#include "Calculate.h"
#include "FormulaParser.h"

#include <msclr\marshal_cppstd.h>
#include <string>

using namespace System;
using namespace msclr::interop;
using namespace std;



String^ MolarConcentration(String^ molecular_weigth, String^ volume_l, String^ mass) {

	return gcnew String(Convert::ToString(
		ToFloat(CommaInsteadOfPoint(CheckDigitAndThrowException((marshal_as<string>(mass))))) /
		(ToFloat(CommaInsteadOfPoint(CheckDigitAndThrowException(marshal_as<string>(molecular_weigth)))) *
			ToFloat(CommaInsteadOfPoint(CheckDigitAndThrowException(marshal_as<string>(volume_l))))))
	);
}

System::String^ Volume(System::String^ molecular_weigth, System::String^ molar_concentration, System::String^ mass) {

	return gcnew String(Convert::ToString(
		ToFloat(CommaInsteadOfPoint(CheckDigitAndThrowException(marshal_as<string>(mass)))) /
		(ToFloat(CommaInsteadOfPoint(CheckDigitAndThrowException(marshal_as<string>(molecular_weigth)))) *
			ToFloat(CommaInsteadOfPoint(CheckDigitAndThrowException(marshal_as<string>(molar_concentration))))))
	);
}

System::String^ Mass(System::String^ molecular_weigth, System::String^ volume_l, System::String^ molar_concentration) {

	return gcnew String(Convert::ToString(
		ToFloat(CommaInsteadOfPoint(CheckDigitAndThrowException(marshal_as<string>(molar_concentration)))) *
		ToFloat(CommaInsteadOfPoint(CheckDigitAndThrowException(marshal_as<string>(volume_l)))) *
		ToFloat(CommaInsteadOfPoint(CheckDigitAndThrowException(marshal_as<string>(molecular_weigth)))))
	);
}



System::String^ MassInsertion(
	System::String^ vector_mass,
	System::String^ vector_lenght,
	System::String^ ratio_l,
	System::String^ ratio_r,
	System::String^ lenght_insertion
) {

	float number_of_moles_of_vector = ToFloat(CommaInsteadOfPoint(CheckDigitAndThrowException((marshal_as<string>(vector_mass))))) /
		ToFloat(CommaInsteadOfPoint(CheckDigitAndThrowException(marshal_as<string>(vector_lenght))));

	int left = ToFloat(CheckDigitAndThrowException(marshal_as<string>(ratio_l)));
	int right = ToFloat(CheckDigitAndThrowException(marshal_as<string>(ratio_r)));

	float number_of_moles_of_an_insertion = 0;

	if (left < right) {
		number_of_moles_of_an_insertion = number_of_moles_of_vector * right;
	}
	else if (left > right) {
		number_of_moles_of_an_insertion = number_of_moles_of_vector / left;
	}
	else if (left == right) {
		number_of_moles_of_an_insertion = number_of_moles_of_vector;
	}

	return Convert::ToString(
		number_of_moles_of_an_insertion *
		ToFloat(CommaInsteadOfPoint(CheckDigitAndThrowException((marshal_as<string>(lenght_insertion)))))
	);
}




