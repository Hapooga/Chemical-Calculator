#include "FormulaParser.h"
#include "ExpressionTree.h"
#include "PeriodicTable.h"
#include "Tests.h"
#include "Tester.h"

#include <msclr\marshal_cppstd.h>
#include <string>
#include <sstream>
#include <cctype>
#include <memory>


using namespace msclr::interop;
using namespace System;
using namespace std;


void CheckFormulaAndThrowException(const string& formula) {
	if (formula.empty()) {
		throw invalid_argument("Введите химическую формулу");
	}
	for (const auto ch : formula) {
		if (ch < -1) {
			throw invalid_argument("При вводе формулы\nиспользованы недопустимые значения\nОбразец ввода: [Cu(H2O)4]SO4*H2O");
		}
	}
}

string& CheckDigitAndThrowException(string& input_float) {
	if (input_float.empty()) {
		throw invalid_argument("Пустое поле ввода");
	}
	for (const auto ch : input_float) {
		if (!isdigit(ch) && ch != '.' && ch != ',') {
			throw invalid_argument("Неверный ввод  " + input_float);
		}
	}
	return input_float;
}









string& CommaInsteadOfPoint(string& str) {
	size_t point_pose = str.find('.');
	if (point_pose < str.size()) {
		str[point_pose] = ',';
	}
	return str;
}

float ToFloat(string& element_atomic_weight) {
	size_t point_pose = element_atomic_weight.find(',');
	if (point_pose < element_atomic_weight.size()) {
		element_atomic_weight[point_pose] = '.';
	}
	stringstream str(element_atomic_weight);
	float result = 0;
	str >> result;
	return result;
}

string GetElement(string_view& formula) {
	string result;
	result.push_back(formula.front());
	formula.remove_prefix(1);
	if (!formula.empty()) {
		if (isdigit(result[0]) && (isdigit(formula.front()) || formula.front() == '.')) {
			while (isdigit(formula.front()) || formula.front() == '.') {
				result.push_back(formula.front());
				formula.remove_prefix(1);
				if (formula.empty()) {
					break;
				}
				if ((formula.front() == '.' && result.back() == '.') || formula.front() == '.' && isdigit(result.back())) {
					throw invalid_argument("Неверный ввод  " + string(formula));
				}
			}
		}
		else if (islower(formula.front())) {
			result.push_back(formula.front());
			formula.remove_prefix(1);
		}
	}
	return result;
}


string_view CatSubFormula(string_view& formula, const size_t left_pose, const size_t right_pose) {
	string_view sub_formula = formula.substr(left_pose, right_pose);
	formula.remove_prefix(right_pose);
	return sub_formula;
}

bool IsIn(const string_view formula, const size_t pose) {
	return pose < formula.size();
}

string_view GetSubFormula(string_view& formula) {

	size_t after_opening_bracket_pose = 0;
	size_t closing_bracket = formula.find_first_of(')');
	size_t one_more_sub_formula_bracket = formula.find_first_of('(');

	if (IsIn(formula, closing_bracket) && !IsIn(formula, one_more_sub_formula_bracket)) {
		return CatSubFormula(formula, after_opening_bracket_pose, closing_bracket);
	}

	if (IsIn(formula, closing_bracket) && IsIn(formula, one_more_sub_formula_bracket)) {

		if (closing_bracket < one_more_sub_formula_bracket) {
			return CatSubFormula(formula, after_opening_bracket_pose, closing_bracket);
		}

		if (closing_bracket > one_more_sub_formula_bracket) {
			closing_bracket = formula.find_last_of(')');
			return CatSubFormula(formula, after_opening_bracket_pose, closing_bracket);
		}

	}
}

unique_ptr<Expression<float>> Parse(string_view& formula) {


	if (formula.empty()) {

		return Value(static_cast<float>(0));
	}
	// =========================================================================================================================
	if (formula.front() == ' ') {
		throw invalid_argument("Не используйте пробелы.\nОбразец ввода: [Cu(H2O)4]SO4*H2O");
	}
	// =========================================================================================================================
	if (formula.front() == '[' || formula.front() == ']' ||
		formula.front() == '*' || formula.front() == '·' ||
		formula.front() == '−' || formula.front() == '+'
		) {

		formula.remove_prefix(1);

		return Parse(formula);
	}
	// =========================================================================================================================
	if (formula.front() == '(') {

		formula.remove_prefix(1);

		unique_ptr<Expression<float>> sub_formula = Parse(GetSubFormula(formula));

		formula.remove_prefix(1);

		// -----------------------------------
		if (formula.empty()) {

			throw invalid_argument("Неверно установлены скобки");

		}
		// -----------------------------------

		float l_value = ToFloat(GetElement(formula));

		// -----------------------------------
		if (formula.empty()) {

			return Product(Value(sub_formula->Evaluate()), Value(l_value));
		}
		// -----------------------------------
		return Sum(Product(Value(sub_formula->Evaluate()), Value(l_value)), Parse(formula));
	}
	// =========================================================================================================================
	if (isdigit(formula.front())) {

		float l_value = ToFloat(GetElement(formula));
		// -----------------------------------
		if (formula.front() == '(') {

			throw invalid_argument("Неверно установлены скобки " + string(formula));
		}
		// -----------------------------------
		if (isupper(formula.front())) {

			return Product(Value(l_value), Parse(formula));
		}
		// -----------------------------------
	}
	// =========================================================================================================================
	if (isupper(formula.front())) {

		float l_value = PeriodicTable::Instence().GetAtomicWeightFromClass(GetElement(formula));
		// -----------------------------------
		if (formula.empty()) {

			return Value(l_value);
		}
		// -----------------------------------
		if (isupper(formula.front())) {

			return Sum(Value(l_value), Parse(formula));
		}
		// -----------------------------------
		if (isdigit(formula.front())) {

			float r_value = ToFloat(GetElement(formula));
			// ------------------
			if (formula.empty()) {

				return Product(Value(l_value), Value(r_value));
			}
			// ------------------

			return Sum(Product(Value(l_value), Value(r_value)), Parse(formula));

		}
		// -----------------------------------
		if (formula.front() == '(') {

			formula.remove_prefix(1);

			unique_ptr<Expression<float>> sub_formula = Parse(GetSubFormula(formula));

			formula.remove_prefix(1);

			// ------------------
			if (formula.empty()) {

				throw invalid_argument("Неверно установлены скобки");

			}
			// ------------------

			float r_value = ToFloat(GetElement(formula));

			// ------------------
			if (formula.empty()) {

				return Sum(Value(l_value), Product(Value(sub_formula->Evaluate()), Value(r_value)));
			}
			// ------------------
			return Sum(Sum(Value(l_value), Product(Value(sub_formula->Evaluate()), Value(r_value))), Parse(formula));
		}
		// -----------------------------------
		return Parse(formula);
	}
	// =========================================================================================================================

	throw invalid_argument("Неверный ввод  " + string(formula));
}



String^ ConvertToMolecularWeight(String^ сhemical_formula) {

	const string formula = marshal_as<string>(сhemical_formula);

	CheckFormulaAndThrowException(formula);

	unique_ptr<Expression<float>> formula_expression = Parse(string_view(formula));

	return gcnew String(CommaInsteadOfPoint(to_string(formula_expression->Evaluate())).c_str());
}