#pragma once

#include "PeriodicTable.h"
#include "ExpressionTree.h"

#include <string>
#include <string_view>
#include <memory>

std::string& CheckDigitAndThrowException(std::string& input_float);

void CheckFormulaAndThrowException(const std::string& formula);

std::string& CommaInsteadOfPoint(std::string& str);

float ToFloat(std::string& element_atomic_weight);

std::string GetElement(std::string_view& formula);

std::string_view CatSubFormula(std::string_view& formula, const size_t left_pose, const size_t right_pose);

bool IsIn(const std::string_view formula, const size_t pose);

std::string_view GetSubFormula(std::string_view& formula);

std::unique_ptr<Expression<float>> Parse(std::string_view& formula);

System::String^ ConvertToMolecularWeight(System::String^ ñhemical_formula);


