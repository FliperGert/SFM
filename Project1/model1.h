#pragma once
#include "list.h"
#include "classModel.h"
#include "Table.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Model
	/// </summary>
	public ref class Model1 : public System::Windows::Forms::Form
	{
	public:
		Model1(void)
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
		~Model1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btn_1;


	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ btn_exit;
	private: System::Windows::Forms::Label^ label6;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Model1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btn_1 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(84, 104);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(458, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введите начальную скорость(v0) -";
			this->label1->Click += gcnew System::EventHandler(this, &Model1::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(449, 101);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(93, 31);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(194, 151);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(318, 24);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Введите ускорение(а) -";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(449, 148);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(93, 31);
			this->textBox2->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(449, 53);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(93, 31);
			this->textBox3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(42, 56);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(514, 24);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Введите начальное расположение(x0) -";
			this->label3->Click += gcnew System::EventHandler(this, &Model1::label3_Click);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(449, 276);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(93, 31);
			this->textBox4->TabIndex = 7;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Model1::textBox4_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(121, 279);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(402, 24);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Введите время симуляции(с) -";
			this->label4->Click += gcnew System::EventHandler(this, &Model1::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(149, 323);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(374, 24);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Введите шаг симуляции(с) -";
			this->label5->Click += gcnew System::EventHandler(this, &Model1::label5_Click);
			// 
			// btn_1
			// 
			this->btn_1->BackColor = System::Drawing::Color::DimGray;
			this->btn_1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_1->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F));
			this->btn_1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btn_1->Location = System::Drawing::Point(461, 377);
			this->btn_1->Margin = System::Windows::Forms::Padding(4);
			this->btn_1->Name = L"btn_1";
			this->btn_1->Size = System::Drawing::Size(109, 40);
			this->btn_1->TabIndex = 10;
			this->btn_1->Text = L"Запуск";
			this->btn_1->UseVisualStyleBackColor = false;
			this->btn_1->Click += gcnew System::EventHandler(this, &Model1::btn_start_click);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(449, 320);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(93, 31);
			this->textBox5->TabIndex = 11;
			// 
			// btn_exit
			// 
			this->btn_exit->BackColor = System::Drawing::Color::DimGray;
			this->btn_exit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_exit->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F));
			this->btn_exit->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_exit->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btn_exit->Location = System::Drawing::Point(13, 377);
			this->btn_exit->Margin = System::Windows::Forms::Padding(4);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(146, 40);
			this->btn_exit->TabIndex = 12;
			this->btn_exit->Text = L"Вернуться";
			this->btn_exit->UseVisualStyleBackColor = false;
			this->btn_exit->Click += gcnew System::EventHandler(this, &Model1::btn_exit_click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Lucida Console", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->label6->Location = System::Drawing::Point(103, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(420, 28);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Равноускоренное движение";
			this->label6->Click += gcnew System::EventHandler(this, &Model1::label6_Click);
			// 
			// Model
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(583, 430);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->btn_exit);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->btn_1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Lucida Console", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Model";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Равноускоренное движение";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btn_start_click(System::Object^ sender, System::EventArgs^ e) {
		try {
			List<long double> input_values;
			input_values.push_back(Convert::ToDouble(textBox3->Text)); // x0
			input_values.push_back(Convert::ToDouble(textBox1->Text)); // v0
			input_values.push_back(Convert::ToDouble(textBox2->Text)); // a	
			input_values.push_back(Convert::ToDouble(textBox4->Text)); // t
			input_values.push_back(Convert::ToDouble(textBox5->Text)); // d
			
			if (input_values.size() != 5) {
				MessageBox::Show("Ошибка: недостаточно данных для моделирования.");
				return;
			}
			if (input_values[3] <= 0 || input_values[4] <= 0) {
				MessageBox::Show("Ошибка: время симуляции и шаг симуляции должны быть положительными.");
				return;
			}

			ModelProcess_1 model(input_values);
			std::shared_ptr<ModelProcess_1> point_model = std::make_shared<ModelProcess_1>(model);
			point_model->full();

			Table^ table1 = gcnew Table(point_model);
			table1->Show();
			
		}
		catch (System::FormatException^ ex) {
			MessageBox::Show("Ошибка ввода: " + ex->Message);
		}
		catch (System::Exception^ ex) {
			MessageBox::Show("Произошла ошибка: " + ex->Message);
		}
	}
private: System::Void btn_exit_click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
