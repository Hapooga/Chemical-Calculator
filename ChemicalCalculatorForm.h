#pragma once



#include "PeriodicTable.h"

namespace ChemicalCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ChemicalCalculatorForm
	/// </summary>
	public ref class ChemicalCalculatorForm : public System::Windows::Forms::Form
	{
	public:
		ChemicalCalculatorForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ChemicalCalculatorForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ main_tabControl;
	protected:

	private: System::Windows::Forms::TabPage^ molar_solution_tabPage;
	private: System::Windows::Forms::TabPage^ ligation_calculator_tabPage;
	private: System::Windows::Forms::TabControl^ molar_solution_menu_tabControl;
	private: System::Windows::Forms::TabPage^ weight_calculation_tabPage;
	private: System::Windows::Forms::TabPage^ volume_calculationtab_Page;
	private: System::Windows::Forms::TabPage^ molar_concentration_calculation_tabPage;
	private: System::Windows::Forms::TextBox^ chemical_formula_textBox;
	private: System::Windows::Forms::Label^ chemical_formula_label;
	private: System::Windows::Forms::Button^ cleare_mass_calculation_button;


	private: System::Windows::Forms::Label^ mass_gramm_mass_calculation_label;
	private: System::Windows::Forms::Button^ calculat_mass_calculation_button;


	private: System::Windows::Forms::Label^ molar_concentration_mass_calculation_label;
	private: System::Windows::Forms::Label^ volume_mass_calculation_label;
	private: System::Windows::Forms::TextBox^ molar_concentration_mass_calculation_textBox;
	private: System::Windows::Forms::TextBox^ volume_mass_calculation_textBox;







	private: System::Windows::Forms::Label^ molar_concentration_volume_calculation_label;
	private: System::Windows::Forms::TextBox^ mass_gramm_volume_calculation_textBox;



	private: System::Windows::Forms::Label^ mass_gramm_volume_calculation_label;






	private: System::Windows::Forms::Label^ volume_gramm_volume_calculation_label;
	private: System::Windows::Forms::Button^ cleare_volume_calculation_button;
	private: System::Windows::Forms::Button^ calculat_volume_calculation_button;
	private: System::Windows::Forms::TextBox^ molar_concentration_volume_calculation_textBox;
	private: System::Windows::Forms::Label^ mass_gramm_molar_concentration_calculation_label;
	private: System::Windows::Forms::TextBox^ mass_gramm_molar_concentration_calculation_textBox;
	private: System::Windows::Forms::Label^ volume_molar_concentration_calculation_labe;
	private: System::Windows::Forms::TextBox^ volume_molar_concentration_calculation_textBox;
	private: System::Windows::Forms::Label^ molar_concentration_molar_concentration_label;










	private: System::Windows::Forms::Button^ calculat_molar_concentration_calculation_button;
	private: System::Windows::Forms::Button^ cleare_molar_concentration_calculation_button;

	private: System::Windows::Forms::MenuStrip^ menuStrip;

	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::Label^ symbol_ligation_label;




	private: System::Windows::Forms::Label^ mass_insertion_ligation_label;


	private: System::Windows::Forms::Label^ insertion_lenght_ligation_label;
	private: System::Windows::Forms::Label^ ration_ligation_label;


	private: System::Windows::Forms::Label^ vector_lenght_legation_label;

	private: System::Windows::Forms::Label^ vector_mass_ligation_label;
	private: System::Windows::Forms::Button^ cleare_ligation_button;




	private: System::Windows::Forms::Button^ calculat_legation_button;
private: System::Windows::Forms::TextBox^ insertion_lenght_ligation_textBox;
private: System::Windows::Forms::TextBox^ ratio_l_ligation_textBox;
private: System::Windows::Forms::TextBox^ ratio_r_ligation_textBox;





private: System::Windows::Forms::TextBox^ vector_lenght_ligation_textBox;


private: System::Windows::Forms::TextBox^ vector_mass_ligation_textBox;
private: System::Windows::Forms::TextBox^ result_output_ligation_textBox;
private: System::Windows::Forms::TextBox^ result_mass_calculation_textBox;
private: System::Windows::Forms::TextBox^ result_volume_calculation_textBox;
private: System::Windows::Forms::TextBox^ result_molar_concentration_textBox;





	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ChemicalCalculatorForm::typeid));
			this->main_tabControl = (gcnew System::Windows::Forms::TabControl());
			this->molar_solution_tabPage = (gcnew System::Windows::Forms::TabPage());
			this->chemical_formula_textBox = (gcnew System::Windows::Forms::TextBox());
			this->chemical_formula_label = (gcnew System::Windows::Forms::Label());
			this->molar_solution_menu_tabControl = (gcnew System::Windows::Forms::TabControl());
			this->weight_calculation_tabPage = (gcnew System::Windows::Forms::TabPage());
			this->result_mass_calculation_textBox = (gcnew System::Windows::Forms::TextBox());
			this->cleare_mass_calculation_button = (gcnew System::Windows::Forms::Button());
			this->mass_gramm_mass_calculation_label = (gcnew System::Windows::Forms::Label());
			this->calculat_mass_calculation_button = (gcnew System::Windows::Forms::Button());
			this->molar_concentration_mass_calculation_label = (gcnew System::Windows::Forms::Label());
			this->volume_mass_calculation_label = (gcnew System::Windows::Forms::Label());
			this->molar_concentration_mass_calculation_textBox = (gcnew System::Windows::Forms::TextBox());
			this->volume_mass_calculation_textBox = (gcnew System::Windows::Forms::TextBox());
			this->volume_calculationtab_Page = (gcnew System::Windows::Forms::TabPage());
			this->result_volume_calculation_textBox = (gcnew System::Windows::Forms::TextBox());
			this->volume_gramm_volume_calculation_label = (gcnew System::Windows::Forms::Label());
			this->cleare_volume_calculation_button = (gcnew System::Windows::Forms::Button());
			this->calculat_volume_calculation_button = (gcnew System::Windows::Forms::Button());
			this->molar_concentration_volume_calculation_textBox = (gcnew System::Windows::Forms::TextBox());
			this->molar_concentration_volume_calculation_label = (gcnew System::Windows::Forms::Label());
			this->mass_gramm_volume_calculation_textBox = (gcnew System::Windows::Forms::TextBox());
			this->mass_gramm_volume_calculation_label = (gcnew System::Windows::Forms::Label());
			this->molar_concentration_calculation_tabPage = (gcnew System::Windows::Forms::TabPage());
			this->result_molar_concentration_textBox = (gcnew System::Windows::Forms::TextBox());
			this->mass_gramm_molar_concentration_calculation_label = (gcnew System::Windows::Forms::Label());
			this->mass_gramm_molar_concentration_calculation_textBox = (gcnew System::Windows::Forms::TextBox());
			this->volume_molar_concentration_calculation_labe = (gcnew System::Windows::Forms::Label());
			this->volume_molar_concentration_calculation_textBox = (gcnew System::Windows::Forms::TextBox());
			this->molar_concentration_molar_concentration_label = (gcnew System::Windows::Forms::Label());
			this->calculat_molar_concentration_calculation_button = (gcnew System::Windows::Forms::Button());
			this->cleare_molar_concentration_calculation_button = (gcnew System::Windows::Forms::Button());
			this->ligation_calculator_tabPage = (gcnew System::Windows::Forms::TabPage());
			this->result_output_ligation_textBox = (gcnew System::Windows::Forms::TextBox());
			this->symbol_ligation_label = (gcnew System::Windows::Forms::Label());
			this->mass_insertion_ligation_label = (gcnew System::Windows::Forms::Label());
			this->insertion_lenght_ligation_label = (gcnew System::Windows::Forms::Label());
			this->ration_ligation_label = (gcnew System::Windows::Forms::Label());
			this->vector_lenght_legation_label = (gcnew System::Windows::Forms::Label());
			this->vector_mass_ligation_label = (gcnew System::Windows::Forms::Label());
			this->cleare_ligation_button = (gcnew System::Windows::Forms::Button());
			this->calculat_legation_button = (gcnew System::Windows::Forms::Button());
			this->insertion_lenght_ligation_textBox = (gcnew System::Windows::Forms::TextBox());
			this->ratio_l_ligation_textBox = (gcnew System::Windows::Forms::TextBox());
			this->ratio_r_ligation_textBox = (gcnew System::Windows::Forms::TextBox());
			this->vector_lenght_ligation_textBox = (gcnew System::Windows::Forms::TextBox());
			this->vector_mass_ligation_textBox = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->main_tabControl->SuspendLayout();
			this->molar_solution_tabPage->SuspendLayout();
			this->molar_solution_menu_tabControl->SuspendLayout();
			this->weight_calculation_tabPage->SuspendLayout();
			this->volume_calculationtab_Page->SuspendLayout();
			this->molar_concentration_calculation_tabPage->SuspendLayout();
			this->ligation_calculator_tabPage->SuspendLayout();
			this->menuStrip->SuspendLayout();
			this->SuspendLayout();
			// 
			// main_tabControl
			// 
			this->main_tabControl->Controls->Add(this->molar_solution_tabPage);
			this->main_tabControl->Controls->Add(this->ligation_calculator_tabPage);
			this->main_tabControl->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->main_tabControl->Location = System::Drawing::Point(1, 27);
			this->main_tabControl->Name = L"main_tabControl";
			this->main_tabControl->SelectedIndex = 0;
			this->main_tabControl->Size = System::Drawing::Size(533, 348);
			this->main_tabControl->TabIndex = 0;
			// 
			// molar_solution_tabPage
			// 
			this->molar_solution_tabPage->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->molar_solution_tabPage->Controls->Add(this->chemical_formula_textBox);
			this->molar_solution_tabPage->Controls->Add(this->chemical_formula_label);
			this->molar_solution_tabPage->Controls->Add(this->molar_solution_menu_tabControl);
			this->molar_solution_tabPage->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->molar_solution_tabPage->Location = System::Drawing::Point(4, 30);
			this->molar_solution_tabPage->Name = L"molar_solution_tabPage";
			this->molar_solution_tabPage->Padding = System::Windows::Forms::Padding(3);
			this->molar_solution_tabPage->Size = System::Drawing::Size(525, 314);
			this->molar_solution_tabPage->TabIndex = 0;
			this->molar_solution_tabPage->Text = L"Молярные растворы";
			// 
			// chemical_formula_textBox
			// 
			this->chemical_formula_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->chemical_formula_textBox->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->chemical_formula_textBox->Location = System::Drawing::Point(13, 35);
			this->chemical_formula_textBox->Name = L"chemical_formula_textBox";
			this->chemical_formula_textBox->Size = System::Drawing::Size(206, 22);
			this->chemical_formula_textBox->TabIndex = 2;
			// 
			// chemical_formula_label
			// 
			this->chemical_formula_label->AutoSize = true;
			this->chemical_formula_label->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->chemical_formula_label->Location = System::Drawing::Point(13, 11);
			this->chemical_formula_label->Name = L"chemical_formula_label";
			this->chemical_formula_label->Size = System::Drawing::Size(173, 21);
			this->chemical_formula_label->TabIndex = 1;
			this->chemical_formula_label->Text = L"Химическая формула";
			// 
			// molar_solution_menu_tabControl
			// 
			this->molar_solution_menu_tabControl->Controls->Add(this->weight_calculation_tabPage);
			this->molar_solution_menu_tabControl->Controls->Add(this->volume_calculationtab_Page);
			this->molar_solution_menu_tabControl->Controls->Add(this->molar_concentration_calculation_tabPage);
			this->molar_solution_menu_tabControl->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->molar_solution_menu_tabControl->Location = System::Drawing::Point(15, 70);
			this->molar_solution_menu_tabControl->Name = L"molar_solution_menu_tabControl";
			this->molar_solution_menu_tabControl->SelectedIndex = 0;
			this->molar_solution_menu_tabControl->Size = System::Drawing::Size(496, 233);
			this->molar_solution_menu_tabControl->TabIndex = 0;
			// 
			// weight_calculation_tabPage
			// 
			this->weight_calculation_tabPage->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->weight_calculation_tabPage->Controls->Add(this->result_mass_calculation_textBox);
			this->weight_calculation_tabPage->Controls->Add(this->cleare_mass_calculation_button);
			this->weight_calculation_tabPage->Controls->Add(this->mass_gramm_mass_calculation_label);
			this->weight_calculation_tabPage->Controls->Add(this->calculat_mass_calculation_button);
			this->weight_calculation_tabPage->Controls->Add(this->molar_concentration_mass_calculation_label);
			this->weight_calculation_tabPage->Controls->Add(this->volume_mass_calculation_label);
			this->weight_calculation_tabPage->Controls->Add(this->molar_concentration_mass_calculation_textBox);
			this->weight_calculation_tabPage->Controls->Add(this->volume_mass_calculation_textBox);
			this->weight_calculation_tabPage->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->weight_calculation_tabPage->Location = System::Drawing::Point(4, 30);
			this->weight_calculation_tabPage->Name = L"weight_calculation_tabPage";
			this->weight_calculation_tabPage->Padding = System::Windows::Forms::Padding(3);
			this->weight_calculation_tabPage->Size = System::Drawing::Size(488, 199);
			this->weight_calculation_tabPage->TabIndex = 0;
			this->weight_calculation_tabPage->Text = L"Расчет массы";
			// 
			// result_mass_calculation_textBox
			// 
			this->result_mass_calculation_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->result_mass_calculation_textBox->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->result_mass_calculation_textBox->Location = System::Drawing::Point(136, 160);
			this->result_mass_calculation_textBox->Name = L"result_mass_calculation_textBox";
			this->result_mass_calculation_textBox->Size = System::Drawing::Size(100, 22);
			this->result_mass_calculation_textBox->TabIndex = 7;
			// 
			// cleare_mass_calculation_button
			// 
			this->cleare_mass_calculation_button->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->cleare_mass_calculation_button->Location = System::Drawing::Point(136, 116);
			this->cleare_mass_calculation_button->Name = L"cleare_mass_calculation_button";
			this->cleare_mass_calculation_button->Size = System::Drawing::Size(100, 30);
			this->cleare_mass_calculation_button->TabIndex = 6;
			this->cleare_mass_calculation_button->Text = L"Очистить";
			this->cleare_mass_calculation_button->UseVisualStyleBackColor = true;
			this->cleare_mass_calculation_button->Click += gcnew System::EventHandler(this, &ChemicalCalculatorForm::cleare_mass_calculation_button_Click);
			// 
			// mass_gramm_mass_calculation_label
			// 
			this->mass_gramm_mass_calculation_label->AutoSize = true;
			this->mass_gramm_mass_calculation_label->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->mass_gramm_mass_calculation_label->Location = System::Drawing::Point(10, 160);
			this->mass_gramm_mass_calculation_label->Name = L"mass_gramm_mass_calculation_label";
			this->mass_gramm_mass_calculation_label->Size = System::Drawing::Size(115, 21);
			this->mass_gramm_mass_calculation_label->TabIndex = 5;
			this->mass_gramm_mass_calculation_label->Text = L"Масса, грамм:";
			// 
			// calculat_mass_calculation_button
			// 
			this->calculat_mass_calculation_button->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->calculat_mass_calculation_button->Location = System::Drawing::Point(10, 116);
			this->calculat_mass_calculation_button->Name = L"calculat_mass_calculation_button";
			this->calculat_mass_calculation_button->Size = System::Drawing::Size(110, 30);
			this->calculat_mass_calculation_button->TabIndex = 4;
			this->calculat_mass_calculation_button->Text = L"Рассчитать";
			this->calculat_mass_calculation_button->UseVisualStyleBackColor = true;
			this->calculat_mass_calculation_button->Click += gcnew System::EventHandler(this, &ChemicalCalculatorForm::calculat_mass_calculation_button_Click);
			// 
			// molar_concentration_mass_calculation_label
			// 
			this->molar_concentration_mass_calculation_label->AutoSize = true;
			this->molar_concentration_mass_calculation_label->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->molar_concentration_mass_calculation_label->Location = System::Drawing::Point(10, 55);
			this->molar_concentration_mass_calculation_label->Name = L"molar_concentration_mass_calculation_label";
			this->molar_concentration_mass_calculation_label->Size = System::Drawing::Size(277, 21);
			this->molar_concentration_mass_calculation_label->TabIndex = 3;
			this->molar_concentration_mass_calculation_label->Text = L"Молярная концентрация, моль/литр";
			// 
			// volume_mass_calculation_label
			// 
			this->volume_mass_calculation_label->AutoSize = true;
			this->volume_mass_calculation_label->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->volume_mass_calculation_label->Location = System::Drawing::Point(10, 5);
			this->volume_mass_calculation_label->Name = L"volume_mass_calculation_label";
			this->volume_mass_calculation_label->Size = System::Drawing::Size(103, 21);
			this->volume_mass_calculation_label->TabIndex = 2;
			this->volume_mass_calculation_label->Text = L"Объем, литр";
			// 
			// molar_concentration_mass_calculation_textBox
			// 
			this->molar_concentration_mass_calculation_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->molar_concentration_mass_calculation_textBox->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->molar_concentration_mass_calculation_textBox->Location = System::Drawing::Point(10, 80);
			this->molar_concentration_mass_calculation_textBox->Name = L"molar_concentration_mass_calculation_textBox";
			this->molar_concentration_mass_calculation_textBox->Size = System::Drawing::Size(130, 22);
			this->molar_concentration_mass_calculation_textBox->TabIndex = 1;
			// 
			// volume_mass_calculation_textBox
			// 
			this->volume_mass_calculation_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->volume_mass_calculation_textBox->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->volume_mass_calculation_textBox->Location = System::Drawing::Point(10, 30);
			this->volume_mass_calculation_textBox->Name = L"volume_mass_calculation_textBox";
			this->volume_mass_calculation_textBox->Size = System::Drawing::Size(130, 22);
			this->volume_mass_calculation_textBox->TabIndex = 0;
			// 
			// volume_calculationtab_Page
			// 
			this->volume_calculationtab_Page->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->volume_calculationtab_Page->Controls->Add(this->result_volume_calculation_textBox);
			this->volume_calculationtab_Page->Controls->Add(this->volume_gramm_volume_calculation_label);
			this->volume_calculationtab_Page->Controls->Add(this->cleare_volume_calculation_button);
			this->volume_calculationtab_Page->Controls->Add(this->calculat_volume_calculation_button);
			this->volume_calculationtab_Page->Controls->Add(this->molar_concentration_volume_calculation_textBox);
			this->volume_calculationtab_Page->Controls->Add(this->molar_concentration_volume_calculation_label);
			this->volume_calculationtab_Page->Controls->Add(this->mass_gramm_volume_calculation_textBox);
			this->volume_calculationtab_Page->Controls->Add(this->mass_gramm_volume_calculation_label);
			this->volume_calculationtab_Page->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->volume_calculationtab_Page->Location = System::Drawing::Point(4, 30);
			this->volume_calculationtab_Page->Name = L"volume_calculationtab_Page";
			this->volume_calculationtab_Page->Padding = System::Windows::Forms::Padding(3);
			this->volume_calculationtab_Page->Size = System::Drawing::Size(488, 199);
			this->volume_calculationtab_Page->TabIndex = 1;
			this->volume_calculationtab_Page->Text = L"Расчет объема";
			// 
			// result_volume_calculation_textBox
			// 
			this->result_volume_calculation_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->result_volume_calculation_textBox->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->result_volume_calculation_textBox->Location = System::Drawing::Point(136, 160);
			this->result_volume_calculation_textBox->Name = L"result_volume_calculation_textBox";
			this->result_volume_calculation_textBox->Size = System::Drawing::Size(100, 22);
			this->result_volume_calculation_textBox->TabIndex = 10;
			// 
			// volume_gramm_volume_calculation_label
			// 
			this->volume_gramm_volume_calculation_label->AutoSize = true;
			this->volume_gramm_volume_calculation_label->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->volume_gramm_volume_calculation_label->Location = System::Drawing::Point(10, 161);
			this->volume_gramm_volume_calculation_label->Name = L"volume_gramm_volume_calculation_label";
			this->volume_gramm_volume_calculation_label->Size = System::Drawing::Size(107, 21);
			this->volume_gramm_volume_calculation_label->TabIndex = 9;
			this->volume_gramm_volume_calculation_label->Text = L"Объем, литр:";
			// 
			// cleare_volume_calculation_button
			// 
			this->cleare_volume_calculation_button->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->cleare_volume_calculation_button->Location = System::Drawing::Point(136, 116);
			this->cleare_volume_calculation_button->Name = L"cleare_volume_calculation_button";
			this->cleare_volume_calculation_button->Size = System::Drawing::Size(100, 30);
			this->cleare_volume_calculation_button->TabIndex = 8;
			this->cleare_volume_calculation_button->Text = L"Очистить";
			this->cleare_volume_calculation_button->UseVisualStyleBackColor = true;
			this->cleare_volume_calculation_button->Click += gcnew System::EventHandler(this, &ChemicalCalculatorForm::cleare_volume_calculation_button_Click);
			// 
			// calculat_volume_calculation_button
			// 
			this->calculat_volume_calculation_button->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->calculat_volume_calculation_button->Location = System::Drawing::Point(10, 116);
			this->calculat_volume_calculation_button->Name = L"calculat_volume_calculation_button";
			this->calculat_volume_calculation_button->Size = System::Drawing::Size(110, 30);
			this->calculat_volume_calculation_button->TabIndex = 7;
			this->calculat_volume_calculation_button->Text = L"Рассчитать";
			this->calculat_volume_calculation_button->UseVisualStyleBackColor = true;
			this->calculat_volume_calculation_button->Click += gcnew System::EventHandler(this, &ChemicalCalculatorForm::calculat_volume_calculation_button_Click);
			// 
			// molar_concentration_volume_calculation_textBox
			// 
			this->molar_concentration_volume_calculation_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->molar_concentration_volume_calculation_textBox->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->molar_concentration_volume_calculation_textBox->Location = System::Drawing::Point(10, 80);
			this->molar_concentration_volume_calculation_textBox->Name = L"molar_concentration_volume_calculation_textBox";
			this->molar_concentration_volume_calculation_textBox->Size = System::Drawing::Size(130, 22);
			this->molar_concentration_volume_calculation_textBox->TabIndex = 6;
			// 
			// molar_concentration_volume_calculation_label
			// 
			this->molar_concentration_volume_calculation_label->AutoSize = true;
			this->molar_concentration_volume_calculation_label->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->molar_concentration_volume_calculation_label->Location = System::Drawing::Point(10, 55);
			this->molar_concentration_volume_calculation_label->Name = L"molar_concentration_volume_calculation_label";
			this->molar_concentration_volume_calculation_label->Size = System::Drawing::Size(277, 21);
			this->molar_concentration_volume_calculation_label->TabIndex = 5;
			this->molar_concentration_volume_calculation_label->Text = L"Молярная концентрация, моль/литр";
			// 
			// mass_gramm_volume_calculation_textBox
			// 
			this->mass_gramm_volume_calculation_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->mass_gramm_volume_calculation_textBox->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->mass_gramm_volume_calculation_textBox->Location = System::Drawing::Point(10, 30);
			this->mass_gramm_volume_calculation_textBox->Name = L"mass_gramm_volume_calculation_textBox";
			this->mass_gramm_volume_calculation_textBox->Size = System::Drawing::Size(130, 22);
			this->mass_gramm_volume_calculation_textBox->TabIndex = 4;
			// 
			// mass_gramm_volume_calculation_label
			// 
			this->mass_gramm_volume_calculation_label->AutoSize = true;
			this->mass_gramm_volume_calculation_label->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->mass_gramm_volume_calculation_label->Location = System::Drawing::Point(10, 5);
			this->mass_gramm_volume_calculation_label->Name = L"mass_gramm_volume_calculation_label";
			this->mass_gramm_volume_calculation_label->Size = System::Drawing::Size(111, 21);
			this->mass_gramm_volume_calculation_label->TabIndex = 3;
			this->mass_gramm_volume_calculation_label->Text = L"Масса, грамм";
			// 
			// molar_concentration_calculation_tabPage
			// 
			this->molar_concentration_calculation_tabPage->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->molar_concentration_calculation_tabPage->Controls->Add(this->result_molar_concentration_textBox);
			this->molar_concentration_calculation_tabPage->Controls->Add(this->mass_gramm_molar_concentration_calculation_label);
			this->molar_concentration_calculation_tabPage->Controls->Add(this->mass_gramm_molar_concentration_calculation_textBox);
			this->molar_concentration_calculation_tabPage->Controls->Add(this->volume_molar_concentration_calculation_labe);
			this->molar_concentration_calculation_tabPage->Controls->Add(this->volume_molar_concentration_calculation_textBox);
			this->molar_concentration_calculation_tabPage->Controls->Add(this->molar_concentration_molar_concentration_label);
			this->molar_concentration_calculation_tabPage->Controls->Add(this->calculat_molar_concentration_calculation_button);
			this->molar_concentration_calculation_tabPage->Controls->Add(this->cleare_molar_concentration_calculation_button);
			this->molar_concentration_calculation_tabPage->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->molar_concentration_calculation_tabPage->Location = System::Drawing::Point(4, 30);
			this->molar_concentration_calculation_tabPage->Name = L"molar_concentration_calculation_tabPage";
			this->molar_concentration_calculation_tabPage->Size = System::Drawing::Size(488, 199);
			this->molar_concentration_calculation_tabPage->TabIndex = 2;
			this->molar_concentration_calculation_tabPage->Text = L"Расчет молярной концентрации";
			// 
			// result_molar_concentration_textBox
			// 
			this->result_molar_concentration_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->result_molar_concentration_textBox->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->result_molar_concentration_textBox->Location = System::Drawing::Point(316, 160);
			this->result_molar_concentration_textBox->Name = L"result_molar_concentration_textBox";
			this->result_molar_concentration_textBox->Size = System::Drawing::Size(100, 22);
			this->result_molar_concentration_textBox->TabIndex = 16;
			// 
			// mass_gramm_molar_concentration_calculation_label
			// 
			this->mass_gramm_molar_concentration_calculation_label->AutoSize = true;
			this->mass_gramm_molar_concentration_calculation_label->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->mass_gramm_molar_concentration_calculation_label->Location = System::Drawing::Point(10, 5);
			this->mass_gramm_molar_concentration_calculation_label->Name = L"mass_gramm_molar_concentration_calculation_label";
			this->mass_gramm_molar_concentration_calculation_label->Size = System::Drawing::Size(111, 21);
			this->mass_gramm_molar_concentration_calculation_label->TabIndex = 15;
			this->mass_gramm_molar_concentration_calculation_label->Text = L"Масса, грамм";
			// 
			// mass_gramm_molar_concentration_calculation_textBox
			// 
			this->mass_gramm_molar_concentration_calculation_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->mass_gramm_molar_concentration_calculation_textBox->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->mass_gramm_molar_concentration_calculation_textBox->Location = System::Drawing::Point(10, 30);
			this->mass_gramm_molar_concentration_calculation_textBox->Name = L"mass_gramm_molar_concentration_calculation_textBox";
			this->mass_gramm_molar_concentration_calculation_textBox->Size = System::Drawing::Size(130, 22);
			this->mass_gramm_molar_concentration_calculation_textBox->TabIndex = 14;
			// 
			// volume_molar_concentration_calculation_labe
			// 
			this->volume_molar_concentration_calculation_labe->AutoSize = true;
			this->volume_molar_concentration_calculation_labe->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->volume_molar_concentration_calculation_labe->Location = System::Drawing::Point(10, 55);
			this->volume_molar_concentration_calculation_labe->Name = L"volume_molar_concentration_calculation_labe";
			this->volume_molar_concentration_calculation_labe->Size = System::Drawing::Size(103, 21);
			this->volume_molar_concentration_calculation_labe->TabIndex = 13;
			this->volume_molar_concentration_calculation_labe->Text = L"Объем, литр";
			// 
			// volume_molar_concentration_calculation_textBox
			// 
			this->volume_molar_concentration_calculation_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->volume_molar_concentration_calculation_textBox->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->volume_molar_concentration_calculation_textBox->Location = System::Drawing::Point(10, 80);
			this->volume_molar_concentration_calculation_textBox->Name = L"volume_molar_concentration_calculation_textBox";
			this->volume_molar_concentration_calculation_textBox->Size = System::Drawing::Size(130, 22);
			this->volume_molar_concentration_calculation_textBox->TabIndex = 12;
			// 
			// molar_concentration_molar_concentration_label
			// 
			this->molar_concentration_molar_concentration_label->AutoSize = true;
			this->molar_concentration_molar_concentration_label->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->molar_concentration_molar_concentration_label->Location = System::Drawing::Point(10, 160);
			this->molar_concentration_molar_concentration_label->Name = L"molar_concentration_molar_concentration_label";
			this->molar_concentration_molar_concentration_label->Size = System::Drawing::Size(281, 21);
			this->molar_concentration_molar_concentration_label->TabIndex = 11;
			this->molar_concentration_molar_concentration_label->Text = L"Молярная концентрация, моль/литр:";
			// 
			// calculat_molar_concentration_calculation_button
			// 
			this->calculat_molar_concentration_calculation_button->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->calculat_molar_concentration_calculation_button->Location = System::Drawing::Point(10, 116);
			this->calculat_molar_concentration_calculation_button->Name = L"calculat_molar_concentration_calculation_button";
			this->calculat_molar_concentration_calculation_button->Size = System::Drawing::Size(110, 30);
			this->calculat_molar_concentration_calculation_button->TabIndex = 10;
			this->calculat_molar_concentration_calculation_button->Text = L"Рассчитать";
			this->calculat_molar_concentration_calculation_button->UseVisualStyleBackColor = true;
			this->calculat_molar_concentration_calculation_button->Click += gcnew System::EventHandler(this, &ChemicalCalculatorForm::calculat_molar_concentration_calculation_button_Click);
			// 
			// cleare_molar_concentration_calculation_button
			// 
			this->cleare_molar_concentration_calculation_button->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->cleare_molar_concentration_calculation_button->Location = System::Drawing::Point(136, 116);
			this->cleare_molar_concentration_calculation_button->Name = L"cleare_molar_concentration_calculation_button";
			this->cleare_molar_concentration_calculation_button->Size = System::Drawing::Size(100, 30);
			this->cleare_molar_concentration_calculation_button->TabIndex = 9;
			this->cleare_molar_concentration_calculation_button->Text = L"Очистить";
			this->cleare_molar_concentration_calculation_button->UseVisualStyleBackColor = true;
			this->cleare_molar_concentration_calculation_button->Click += gcnew System::EventHandler(this, &ChemicalCalculatorForm::cleare_molar_concentration_calculation_button_Click);
			// 
			// ligation_calculator_tabPage
			// 
			this->ligation_calculator_tabPage->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ligation_calculator_tabPage->Controls->Add(this->result_output_ligation_textBox);
			this->ligation_calculator_tabPage->Controls->Add(this->symbol_ligation_label);
			this->ligation_calculator_tabPage->Controls->Add(this->mass_insertion_ligation_label);
			this->ligation_calculator_tabPage->Controls->Add(this->insertion_lenght_ligation_label);
			this->ligation_calculator_tabPage->Controls->Add(this->ration_ligation_label);
			this->ligation_calculator_tabPage->Controls->Add(this->vector_lenght_legation_label);
			this->ligation_calculator_tabPage->Controls->Add(this->vector_mass_ligation_label);
			this->ligation_calculator_tabPage->Controls->Add(this->cleare_ligation_button);
			this->ligation_calculator_tabPage->Controls->Add(this->calculat_legation_button);
			this->ligation_calculator_tabPage->Controls->Add(this->insertion_lenght_ligation_textBox);
			this->ligation_calculator_tabPage->Controls->Add(this->ratio_l_ligation_textBox);
			this->ligation_calculator_tabPage->Controls->Add(this->ratio_r_ligation_textBox);
			this->ligation_calculator_tabPage->Controls->Add(this->vector_lenght_ligation_textBox);
			this->ligation_calculator_tabPage->Controls->Add(this->vector_mass_ligation_textBox);
			this->ligation_calculator_tabPage->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->ligation_calculator_tabPage->Location = System::Drawing::Point(4, 30);
			this->ligation_calculator_tabPage->Name = L"ligation_calculator_tabPage";
			this->ligation_calculator_tabPage->Padding = System::Windows::Forms::Padding(3);
			this->ligation_calculator_tabPage->Size = System::Drawing::Size(525, 314);
			this->ligation_calculator_tabPage->TabIndex = 1;
			this->ligation_calculator_tabPage->Text = L"Расчет лигирования";
			// 
			// result_output_ligation_textBox
			// 
			this->result_output_ligation_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->result_output_ligation_textBox->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->result_output_ligation_textBox->Location = System::Drawing::Point(160, 233);
			this->result_output_ligation_textBox->Name = L"result_output_ligation_textBox";
			this->result_output_ligation_textBox->Size = System::Drawing::Size(130, 22);
			this->result_output_ligation_textBox->TabIndex = 14;
			// 
			// symbol_ligation_label
			// 
			this->symbol_ligation_label->AutoSize = true;
			this->symbol_ligation_label->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->symbol_ligation_label->Location = System::Drawing::Point(344, 140);
			this->symbol_ligation_label->Name = L"symbol_ligation_label";
			this->symbol_ligation_label->Size = System::Drawing::Size(19, 28);
			this->symbol_ligation_label->TabIndex = 13;
			this->symbol_ligation_label->Text = L":";
			// 
			// mass_insertion_ligation_label
			// 
			this->mass_insertion_ligation_label->AutoSize = true;
			this->mass_insertion_ligation_label->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->mass_insertion_ligation_label->Location = System::Drawing::Point(8, 234);
			this->mass_insertion_ligation_label->Name = L"mass_insertion_ligation_label";
			this->mass_insertion_ligation_label->Size = System::Drawing::Size(146, 21);
			this->mass_insertion_ligation_label->TabIndex = 11;
			this->mass_insertion_ligation_label->Text = L"Масса вставки, нг:";
			// 
			// insertion_lenght_ligation_label
			// 
			this->insertion_lenght_ligation_label->AutoSize = true;
			this->insertion_lenght_ligation_label->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->insertion_lenght_ligation_label->Location = System::Drawing::Point(12, 106);
			this->insertion_lenght_ligation_label->Name = L"insertion_lenght_ligation_label";
			this->insertion_lenght_ligation_label->Size = System::Drawing::Size(153, 21);
			this->insertion_lenght_ligation_label->TabIndex = 10;
			this->insertion_lenght_ligation_label->Text = L"Длина вставки, п.н.";
			// 
			// ration_ligation_label
			// 
			this->ration_ligation_label->AutoSize = true;
			this->ration_ligation_label->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ration_ligation_label->Location = System::Drawing::Point(8, 147);
			this->ration_ligation_label->Name = L"ration_ligation_label";
			this->ration_ligation_label->Size = System::Drawing::Size(250, 21);
			this->ration_ligation_label->TabIndex = 9;
			this->ration_ligation_label->Text = L"Соотношение вектора к вставке";
			// 
			// vector_lenght_legation_label
			// 
			this->vector_lenght_legation_label->AutoSize = true;
			this->vector_lenght_legation_label->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->vector_lenght_legation_label->Location = System::Drawing::Point(11, 60);
			this->vector_lenght_legation_label->Name = L"vector_lenght_legation_label";
			this->vector_lenght_legation_label->Size = System::Drawing::Size(154, 21);
			this->vector_lenght_legation_label->TabIndex = 8;
			this->vector_lenght_legation_label->Text = L"Длина вектора, п.н.";
			// 
			// vector_mass_ligation_label
			// 
			this->vector_mass_ligation_label->AutoSize = true;
			this->vector_mass_ligation_label->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->vector_mass_ligation_label->Location = System::Drawing::Point(6, 18);
			this->vector_mass_ligation_label->Name = L"vector_mass_ligation_label";
			this->vector_mass_ligation_label->Size = System::Drawing::Size(143, 21);
			this->vector_mass_ligation_label->TabIndex = 7;
			this->vector_mass_ligation_label->Text = L"Масса вектора, нг";
			// 
			// cleare_ligation_button
			// 
			this->cleare_ligation_button->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cleare_ligation_button->Location = System::Drawing::Point(349, 251);
			this->cleare_ligation_button->Name = L"cleare_ligation_button";
			this->cleare_ligation_button->Size = System::Drawing::Size(100, 30);
			this->cleare_ligation_button->TabIndex = 6;
			this->cleare_ligation_button->Text = L"Очистить";
			this->cleare_ligation_button->UseVisualStyleBackColor = true;
			this->cleare_ligation_button->Click += gcnew System::EventHandler(this, &ChemicalCalculatorForm::cleare_ligation_button_Click);
			// 
			// calculat_legation_button
			// 
			this->calculat_legation_button->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->calculat_legation_button->Location = System::Drawing::Point(349, 201);
			this->calculat_legation_button->Name = L"calculat_legation_button";
			this->calculat_legation_button->Size = System::Drawing::Size(110, 30);
			this->calculat_legation_button->TabIndex = 5;
			this->calculat_legation_button->Text = L"Рассчитать";
			this->calculat_legation_button->UseVisualStyleBackColor = true;
			this->calculat_legation_button->Click += gcnew System::EventHandler(this, &ChemicalCalculatorForm::calculat_legation_button_Click);
			// 
			// insertion_lenght_ligation_textBox
			// 
			this->insertion_lenght_ligation_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->insertion_lenght_ligation_textBox->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->insertion_lenght_ligation_textBox->Location = System::Drawing::Point(167, 105);
			this->insertion_lenght_ligation_textBox->Name = L"insertion_lenght_ligation_textBox";
			this->insertion_lenght_ligation_textBox->Size = System::Drawing::Size(130, 22);
			this->insertion_lenght_ligation_textBox->TabIndex = 4;
			// 
			// ratio_l_ligation_textBox
			// 
			this->ratio_l_ligation_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ratio_l_ligation_textBox->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ratio_l_ligation_textBox->Location = System::Drawing::Point(278, 147);
			this->ratio_l_ligation_textBox->Name = L"ratio_l_ligation_textBox";
			this->ratio_l_ligation_textBox->Size = System::Drawing::Size(55, 22);
			this->ratio_l_ligation_textBox->TabIndex = 3;
			// 
			// ratio_r_ligation_textBox
			// 
			this->ratio_r_ligation_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ratio_r_ligation_textBox->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ratio_r_ligation_textBox->Location = System::Drawing::Point(369, 147);
			this->ratio_r_ligation_textBox->Name = L"ratio_r_ligation_textBox";
			this->ratio_r_ligation_textBox->Size = System::Drawing::Size(55, 22);
			this->ratio_r_ligation_textBox->TabIndex = 2;
			// 
			// vector_lenght_ligation_textBox
			// 
			this->vector_lenght_ligation_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->vector_lenght_ligation_textBox->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->vector_lenght_ligation_textBox->Location = System::Drawing::Point(167, 60);
			this->vector_lenght_ligation_textBox->Name = L"vector_lenght_ligation_textBox";
			this->vector_lenght_ligation_textBox->Size = System::Drawing::Size(130, 22);
			this->vector_lenght_ligation_textBox->TabIndex = 1;
			// 
			// vector_mass_ligation_textBox
			// 
			this->vector_mass_ligation_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->vector_mass_ligation_textBox->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->vector_mass_ligation_textBox->Location = System::Drawing::Point(167, 18);
			this->vector_mass_ligation_textBox->Name = L"vector_mass_ligation_textBox";
			this->vector_mass_ligation_textBox->Size = System::Drawing::Size(130, 22);
			this->vector_mass_ligation_textBox->TabIndex = 0;
			// 
			// menuStrip
			// 
			this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->оПрограммеToolStripMenuItem,
					this->выходToolStripMenuItem
			});
			this->menuStrip->Location = System::Drawing::Point(0, 0);
			this->menuStrip->Name = L"menuStrip";
			this->menuStrip->Size = System::Drawing::Size(534, 24);
			this->menuStrip->TabIndex = 1;
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &ChemicalCalculatorForm::оПрограммеToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &ChemicalCalculatorForm::выходToolStripMenuItem_Click);
			// 
			// ChemicalCalculatorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(534, 377);
			this->Controls->Add(this->main_tabControl);
			this->Controls->Add(this->menuStrip);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip;
			this->MaximizeBox = false;
			this->Name = L"ChemicalCalculatorForm";
			this->Text = L"ChemicalCalculator";
			this->main_tabControl->ResumeLayout(false);
			this->molar_solution_tabPage->ResumeLayout(false);
			this->molar_solution_tabPage->PerformLayout();
			this->molar_solution_menu_tabControl->ResumeLayout(false);
			this->weight_calculation_tabPage->ResumeLayout(false);
			this->weight_calculation_tabPage->PerformLayout();
			this->volume_calculationtab_Page->ResumeLayout(false);
			this->volume_calculationtab_Page->PerformLayout();
			this->molar_concentration_calculation_tabPage->ResumeLayout(false);
			this->molar_concentration_calculation_tabPage->PerformLayout();
			this->ligation_calculator_tabPage->ResumeLayout(false);
			this->ligation_calculator_tabPage->PerformLayout();
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::String^ buffer_formula;
        private: System::String^ buffer_molecular_weight;

		//=======================================================================//mass_calculation
private: System::Void calculat_mass_calculation_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void cleare_mass_calculation_button_Click(System::Object^ sender, System::EventArgs^ e);
	   //=======================================================================//volume_calculation
private: System::Void calculat_volume_calculation_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void cleare_volume_calculation_button_Click(System::Object^ sender, System::EventArgs^ e);
	   //=======================================================================//molar_concentration
private: System::Void calculat_molar_concentration_calculation_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void cleare_molar_concentration_calculation_button_Click(System::Object^ sender, System::EventArgs^ e);
	   //=======================================================================//legation
private: System::Void calculat_legation_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void cleare_ligation_button_Click(System::Object^ sender, System::EventArgs^ e);
	   //=======================================================================//StripMenuItem
private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	   //=======================================================================
};
}
