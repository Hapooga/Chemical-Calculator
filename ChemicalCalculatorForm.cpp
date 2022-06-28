#include "ChemicalCalculatorForm.h"

#include"FormulaParser.h"
#include "Calculate.h"
#include "PeriodicTable.h"

#include <stdexcept>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args) {

	PeriodicTable::Instence();// PeriodicTable::Instence();

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ChemicalCalculator::ChemicalCalculatorForm form;
	Application::Run(% form);
}



//=======================================================================//mass_calculation
System::Void ChemicalCalculator::ChemicalCalculatorForm::calculat_mass_calculation_button_Click(System::Object^ sender, System::EventArgs^ e)
{

	
	
		try {
			if (buffer_formula != chemical_formula_textBox->Text) {

				buffer_formula = chemical_formula_textBox->Text;

				buffer_molecular_weight = gcnew String(ConvertToMolecularWeight(chemical_formula_textBox->Text));

				result_mass_calculation_textBox->Text = Mass(buffer_molecular_weight,
					volume_mass_calculation_textBox->Text, 
					molar_concentration_mass_calculation_textBox->Text);

			}
			else {

				result_mass_calculation_textBox->Text = Mass(buffer_molecular_weight, 
					volume_mass_calculation_textBox->Text, 
					molar_concentration_mass_calculation_textBox->Text);

			}
		}
		catch (std::exception& ex) {
			MessageBox::Show(gcnew String(ex.what()), "Ошибка!");
		}
	
}

System::Void ChemicalCalculator::ChemicalCalculatorForm::cleare_mass_calculation_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	volume_mass_calculation_textBox->Text = L"";
	molar_concentration_mass_calculation_textBox->Text = L"";
	result_mass_calculation_textBox->Text = L"";
}





//=======================================================================//volume_calculation
System::Void ChemicalCalculator::ChemicalCalculatorForm::calculat_volume_calculation_button_Click(System::Object^ sender, System::EventArgs^ e)
{

	try {
		if (buffer_formula != chemical_formula_textBox->Text) {

			buffer_formula = chemical_formula_textBox->Text;

			buffer_molecular_weight = gcnew String(ConvertToMolecularWeight(chemical_formula_textBox->Text));

			result_volume_calculation_textBox->Text = Volume(buffer_molecular_weight,
				molar_concentration_volume_calculation_textBox->Text, 
				mass_gramm_volume_calculation_textBox->Text);

		}
		else {
			result_volume_calculation_textBox->Text = Volume(buffer_molecular_weight, 
				molar_concentration_volume_calculation_textBox->Text, 
				mass_gramm_volume_calculation_textBox->Text);
		}
	}
	catch (std::exception& ex) {
		MessageBox::Show(gcnew String(ex.what()), "Ошибка!");
	}
	
}
System::Void ChemicalCalculator::ChemicalCalculatorForm::cleare_volume_calculation_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	molar_concentration_volume_calculation_textBox->Text = L"";
	mass_gramm_volume_calculation_textBox->Text = L"";
	result_volume_calculation_textBox->Text = L"";
}



//=======================================================================//molar_concentration
System::Void ChemicalCalculator::ChemicalCalculatorForm::calculat_molar_concentration_calculation_button_Click(System::Object^ sender, System::EventArgs^ e)
{

	try {
		if (buffer_formula != chemical_formula_textBox->Text) {

			buffer_formula = chemical_formula_textBox->Text;
			
			buffer_molecular_weight = gcnew String(ConvertToMolecularWeight(chemical_formula_textBox->Text));

			result_molar_concentration_textBox->Text = MolarConcentration(buffer_molecular_weight,
				volume_molar_concentration_calculation_textBox->Text, 
				mass_gramm_molar_concentration_calculation_textBox->Text);

		}
		else {

			result_molar_concentration_textBox->Text = MolarConcentration(buffer_molecular_weight,
				volume_molar_concentration_calculation_textBox->Text, 
				mass_gramm_molar_concentration_calculation_textBox->Text);

		}
	}
	catch (std::exception& ex) {
		MessageBox::Show(gcnew String(ex.what()), "Ошибка!");
	}

	
}
System::Void ChemicalCalculator::ChemicalCalculatorForm::cleare_molar_concentration_calculation_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	volume_molar_concentration_calculation_textBox->Text = L"";
	mass_gramm_molar_concentration_calculation_textBox->Text = L"";
	result_molar_concentration_textBox->Text = L"";
}




//=======================================================================//legation
System::Void ChemicalCalculator::ChemicalCalculatorForm::calculat_legation_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	try {
		result_output_ligation_textBox->Text = MassInsertion(
			vector_mass_ligation_textBox->Text, vector_lenght_ligation_textBox->Text,
			ratio_l_ligation_textBox->Text, ratio_r_ligation_textBox->Text,
			insertion_lenght_ligation_textBox->Text
		);
	}
	catch (std::exception& ex) {
		MessageBox::Show(gcnew String(ex.what()),L"Ошибка!");
	}
}
System::Void ChemicalCalculator::ChemicalCalculatorForm::cleare_ligation_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	vector_mass_ligation_textBox->Text = L"";
	vector_lenght_ligation_textBox->Text = L"";
	ratio_l_ligation_textBox->Text = L"";
	ratio_r_ligation_textBox->Text = L"";
	insertion_lenght_ligation_textBox->Text = L"";
	result_output_ligation_textBox->Text = L"";
}





//=======================================================================//StripMenuItem
System::Void ChemicalCalculator::ChemicalCalculatorForm::выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}
System::Void ChemicalCalculator::ChemicalCalculatorForm::оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Калькулятор химический", "Hapooga Pet Project");
}

