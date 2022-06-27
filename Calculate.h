#pragma once


System::String^ MolarConcentration(System::String^ molecular_weigth, System::String^ volume_l, System::String^ mass);

System::String^ Volume(System::String^ molecular_weigth, System::String^ molar_concentration, System::String^ mass);

System::String^ Mass(System::String^ molecular_weigth, System::String^ volume_l, System::String^ molar_concentration);

System::String^ MassInsertion(System::String^ vector_mass, System::String^ vector_lenght,
	System::String^ ratio_l, System::String^ ratio_r, System::String^ lenght_insertion
);






