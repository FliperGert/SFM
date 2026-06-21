#pragma once
#include "classModel.h"
#include <string>
#include <memory>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class Table : public System::Windows::Forms::Form
	{
	public:
		Table(std::shared_ptr<ModelProcess> model)
		{
			InitializeComponent();
			// Сохраняем копию shared_ptr в native-обёртке
			nativeModel = new std::shared_ptr<ModelProcess>(model);
			// Подпишемся на событие закрытия формы, чтобы освободить native-ресурсы
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Table::Table_FormClosed);
			LoadTableData();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Table()
		{
			this->!Table();
			System::GC::SuppressFinalize(this);
		}

		!Table()
		{
			ReleaseNativeModel();
			if (components)
			{
				delete components;
				components = nullptr;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btn_exit;
	private: System::Windows::Forms::Button^ btn_return;
	private: System::Windows::Forms::Button^ btn_save;


	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

private:
	
	std::shared_ptr<ModelProcess>* nativeModel = nullptr;


	void ReleaseNativeModel()
	{
		if (nativeModel != nullptr) {
			try {
				nativeModel->reset();
			}
			catch (...) {}
			delete nativeModel;
			nativeModel = nullptr;
		}
	}

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Table::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->btn_return = (gcnew System::Windows::Forms::Button());
			this->btn_save = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlDark;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(26, 21);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(659, 431);
			this->dataGridView1->TabIndex = 0;
			// 
			// btn_exit
			// 
			this->btn_exit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_exit->Location = System::Drawing::Point(563, 471);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(122, 42);
			this->btn_exit->TabIndex = 1;
			this->btn_exit->Text = L"Закрыть ";
			this->btn_exit->UseVisualStyleBackColor = true;
			this->btn_exit->Click += gcnew System::EventHandler(this, &Table::btn_exit_click);
			// 
			// btn_return
			// 
			this->btn_return->BackColor = System::Drawing::Color::DimGray;
			this->btn_return->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_return->Location = System::Drawing::Point(26, 471);
			this->btn_return->Name = L"btn_return";
			this->btn_return->Size = System::Drawing::Size(147, 42);
			this->btn_return->TabIndex = 2;
			this->btn_return->Text = L"Вернуться";
			this->btn_return->UseVisualStyleBackColor = false;
			this->btn_return->Click += gcnew System::EventHandler(this, &Table::btn_return_click);
			// 
			// btn_save
			// 
			this->btn_save->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_save->Location = System::Drawing::Point(191, 471);
			this->btn_save->Name = L"btn_save";
			this->btn_save->Size = System::Drawing::Size(145, 42);
			this->btn_save->TabIndex = 3;
			this->btn_save->Text = L"Сохранить";
			this->btn_save->UseVisualStyleBackColor = true;
			this->btn_save->Click += gcnew System::EventHandler(this, &Table::btn_save_click);
			// 
			// Table
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(715, 525);
			this->Controls->Add(this->btn_save);
			this->Controls->Add(this->btn_return);
			this->Controls->Add(this->btn_exit);
			this->Controls->Add(this->dataGridView1);
			this->Font = (gcnew System::Drawing::Font(L"Lucida Console", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->Name = L"Table";
			this->Text = L"Table";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}

		void LoadTableData() {
		try {
			if (nativeModel == nullptr || nativeModel->get() == nullptr) return;
			auto model = *nativeModel;
			const List<char>& output_values = model->getListOutputName();
			for (int i = 0; i < output_values.size(); i++) {
				std::string colNameStr(1, output_values[i]);
				System::String^ colName = gcnew System::String(colNameStr.c_str());
				this->dataGridView1->Columns->Add(colName, colName);
			}

			const ListModel<long double>& output_data = model->getListOutputValues();
			Node<List<long double>>* rowNode = output_data.getHead();
			for (int i = 0; rowNode != nullptr && i < output_data.getLeight(); ++i) {
				auto rowDataList = rowNode->getData();
				System::Collections::Generic::List<System::Object^>^ rowData = gcnew System::Collections::Generic::List<System::Object^>();
				int cols = output_values.size();
				for (int j = 0; j < cols; ++j) {
					if (j < rowDataList.size()) {
						rowData->Add((double)rowDataList[j]);
					} else {
						rowData->Add(System::DBNull::Value);
					}
				}
				this->dataGridView1->Rows->Add(rowData->ToArray());
				rowNode = rowNode->getNext();
			}
		}
		catch (const std::exception& e) {
			System::String^ msg = gcnew System::String(e.what());
			MessageBox::Show("Native exception: " + msg, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		catch (...) {
			MessageBox::Show("Unknown native exception", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->ColumnHeadersDefaultCellStyle->BackColor = System::Drawing::SystemColors::ControlDark;
			this->dataGridView1->ColumnHeadersDefaultCellStyle->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersDefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;

			this->dataGridView1->RowHeadersDefaultCellStyle->BackColor = System::Drawing::SystemColors::ControlDark;
		    this->dataGridView1->RowHeadersDefaultCellStyle->ForeColor = System::Drawing::SystemColors::ButtonHighlight;

			this->dataGridView1->DefaultCellStyle->BackColor = System::Drawing::SystemColors::ControlDark;
			this->dataGridView1->DefaultCellStyle->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
		}
#pragma endregion

	private: System::Void btn_return_click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();

	}
	private: System::Void Table_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		// Освобождаем native-модель при закрытии формы
		ReleaseNativeModel();
	}
	private: System::Void btn_save_click(System::Object^ sender, System::EventArgs^ e) {
		try {
			SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();

			saveFileDialog->Filter = "CSV files (*.csv)|*.csv|All files (*.*)|*.*";
			saveFileDialog->FilterIndex = 1;                
			saveFileDialog->DefaultExt = "csv";             
			saveFileDialog->AddExtension = true;           
			saveFileDialog->RestoreDirectory = true;        
			saveFileDialog->Title = "Сохранить таблицу как...";
			saveFileDialog->FileName = "output.csv";  

			if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				String^ filePath = saveFileDialog->FileName;
				System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(filePath);
				for (int i = 0; i < this->dataGridView1->Columns->Count; i++) {
					sw->Write(this->dataGridView1->Columns[i]->HeaderText);
					if (i < this->dataGridView1->Columns->Count - 1) sw->Write(";");
				}
				sw->WriteLine();
				for (int i = 0; i < this->dataGridView1->Rows->Count; i++) {
					for (int j = 0; j < this->dataGridView1->Columns->Count; j++) {
						sw->Write(this->dataGridView1->Rows[i]->Cells[j]->Value);
						if (j < this->dataGridView1->Columns->Count - 1) sw->Write(";");
					}
					sw->WriteLine();
				}
				sw->Close();
			}
			MessageBox::Show("Данные успешно сохранены в " + saveFileDialog->FileName);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Ошибка при сохранении данных: " + ex->Message);
		}
	}
	private: System::Void btn_exit_click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		Application::Exit();
	}
};
}
