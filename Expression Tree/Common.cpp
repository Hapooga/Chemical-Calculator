#include "Common.h"

using namespace std;

Digit::Digit(const int value) : value_(value) 
{
}

int Digit::Evaluate() const {
	return value_;
}

string Digit::ToString() const {
	return to_string(value_);
}



Operation::Operation(ExpressionPtr& left_value, ExpressionPtr& right_value) :
	left_(move(left_value)), right_(move(right_value))
{
}


Plus::Plus(ExpressionPtr& left_value, ExpressionPtr& right_value) :
	Operation(left_value, right_value)
{
}

int Plus::Evaluate() const {
	return left_->Evaluate() + right_->Evaluate();
}

string Plus::ToString() const {
	return '(' + left_->ToString() + ')' + '+' + '(' + right_->ToString() + ')';
}



Multiplication::Multiplication(ExpressionPtr& left_value, ExpressionPtr& right_value) :
	Operation(left_value, right_value)
{
}

int Multiplication::Evaluate() const {
	return left_->Evaluate() * right_->Evaluate();
}

std::string Multiplication::ToString() const {
	return '(' + left_->ToString() + ')' + '*' + '(' + right_->ToString() + ')';
}



ExpressionPtr Value(int value) {
	return make_unique<Digit>(value);
}

ExpressionPtr Sum(ExpressionPtr left, ExpressionPtr right) {
	return make_unique<Plus>(left, right);
}

ExpressionPtr Product(ExpressionPtr left, ExpressionPtr right) {
	return make_unique<Multiplication>(left, right);
}