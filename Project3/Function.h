#pragma once


namespace Start {
	using namespace System;
	using namespace System::Windows::Forms;
	using namespace Data;
	using namespace Data::SqlClient;

	DataTable^ StartData(){
		SqlConnection^ conn = gcnew SqlConnection();
		SqlConnectionStringBuilder^ connStringBuilder = gcnew SqlConnectionStringBuilder();

		connStringBuilder->DataSource = "DESKTOP-I5G3O3I";
		connStringBuilder->InitialCatalog = "Ollivander";
		connStringBuilder->IntegratedSecurity = true;

		conn->ConnectionString = connStringBuilder->ToString();
		String^ sql = "SELECT wood_name, wood_cost, core_name, core_cost FROM wood FULL JOIN core ON wood_id = core_id;";
		SqlCommand^ cmd = gcnew SqlCommand(sql, conn);

		conn->Open();

		SqlDataAdapter^ da = gcnew SqlDataAdapter(cmd);
		DataTable^ dt = gcnew DataTable();
		da->Fill(dt);

		conn->Close();

		return dt;
	}
}
namespace General 
{
	using namespace System;
	using namespace System::Windows::Forms;
	using namespace Data;
	using namespace Data::SqlClient;

	DataTable^ Total(String^ Wood, String^ Core) {
		SqlConnection^ conn = gcnew SqlConnection();
		SqlConnectionStringBuilder^ connStringBuilder = gcnew SqlConnectionStringBuilder();

		connStringBuilder->DataSource = "DESKTOP-I5G3O3I";
		connStringBuilder->InitialCatalog = "Ollivander";
		connStringBuilder->IntegratedSecurity = true;

		conn->ConnectionString = connStringBuilder->ToString();


		String^ sql = "SELECT wood_name, wood_cost, core_name, core_cost, (wood_cost + core_cost) AS 'Total' FROM wood, core WHERE wood_name = \'" + Wood + "\' AND core_name = \'" + Core + "\';";
		SqlCommand^ cmd = gcnew SqlCommand(sql, conn);
		conn->Open();

		SqlDataAdapter^ da = gcnew SqlDataAdapter(cmd);
		DataTable^ dt = gcnew DataTable();
		da->Fill(dt);

		conn->Close();

		return dt;
	}
}

