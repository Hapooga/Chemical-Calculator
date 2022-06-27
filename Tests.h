#pragma once

#include <vector>
#include <string>
#include <string_view>

#include "Tester.h"
#include "FormulaParser.h"



void TestParse() {

	std::vector<std::string> formuls{
		"H2S5(O4)",
		"H2S(O4)",
		"Cu(NO3)2*6(H2O)",
		"HCO3−",
		"HC5H5N+",
		"[Cu(H2O)4]SO4*0.5H2O",
		"[Cu(H2O)4]SO4*H2O",
		"Cu(NO3)2*6H2O",
		"Co3(Fe(CN)6)2",
		"(NH4)2[Pt(SCN)6]",
		"(NH4)2Hg(SCN)4",
		"C4H11NO3*HCl",
		"C18H36N4O11*H2SO4*H2O"
	};

	std::vector<std::string> results;
	PeriodicTable periodic_table;
	std::unique_ptr<Expression<float>> formula_expression;

	for (const auto& formula : formuls) {
		try {
			formula_expression = Parse(std::string_view(formula), periodic_table);
			results.push_back(std::to_string(formula_expression->Evaluate()));
		}
		catch(std::exception& ex) {
			results.push_back(ex.what());
		}
	}

	std::vector<std::string> comparation{
		"Неверно установлены скобки",
		"Неверно установлены скобки",
		"Неверно установлены скобки (H2O)",
		"61.015934",
		"66.102646",
		"240.674957",
	    "249.682404",
		"295.643280",
		"600.708984",
		"579.661499",
		"469.003510",
		"157.596283",
		"600.593567"
	};

	for (int i = 0; i < comparation.size(); ++i) {
		ASSERT_EQUAL(comparation[i], results[i]);
	}
}

