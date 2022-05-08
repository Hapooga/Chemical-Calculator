#pragma once

#include <memory>
#include <string>

// ������� ����� ��������������� ���������
class Expression {
public:
	virtual ~Expression() = default;

	// ��������� �������� ���������
	virtual int Evaluate() const = 0;

	// ����������� ��������� ��� ������
	// ������ ���� ������ � ������, ���������� �� ����������
	virtual std::string ToString() const = 0;
};

using ExpressionPtr = std::unique_ptr<Expression>;

class Digit : public Expression {
private:
	int value_;

public:

	explicit Digit(const int value);

	int Evaluate() const override;

	std::string ToString() const override;
};


class Operation : public Expression {
protected: 

	ExpressionPtr left_;
	ExpressionPtr right_;

	explicit Operation(ExpressionPtr& left_value, ExpressionPtr& right_value);
};

class Plus : public Operation {
public:

	explicit Plus(ExpressionPtr& left_value, ExpressionPtr& right_value);

	int Evaluate() const override;

	std::string ToString() const override;
};

class Multiplication : public Operation {
public:

	explicit Multiplication(ExpressionPtr& left_value, ExpressionPtr& right_value);

	int Evaluate() const override;

	std::string ToString() const override;

};


ExpressionPtr Value(int value);

ExpressionPtr Sum(ExpressionPtr left, ExpressionPtr right);

ExpressionPtr Product(ExpressionPtr left, ExpressionPtr right);