#pragma once
#include "list.h"
#include "classModel.h"
#include "Table.h"
#include <memory>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Model2
	/// </summary>
	public ref class Model2 : public System::Windows::Forms::Form
	{
	public:
		Model2	(void)
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
		~Model2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label6;
	protected:
	private: System::Windows::Forms::Button^ btn_exit;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ btn_1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label7;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Model2::typeid));
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->btn_1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Lucida Console", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->label6->Location = System::Drawing::Point(208, 19);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(304, 28);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Колебание пружины";
			this->label6->Click += gcnew System::EventHandler(this, &Model2::label6_Click);
			// 
			// btn_exit
			// 
			this->btn_exit->BackColor = System::Drawing::Color::DimGray;
			this->btn_exit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_exit->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F));
			this->btn_exit->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_exit->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btn_exit->Location = System::Drawing::Point(31, 401);
			this->btn_exit->Margin = System::Windows::Forms::Padding(4);
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->Size = System::Drawing::Size(146, 40);
			this->btn_exit->TabIndex = 25;
			this->btn_exit->Text = L"Вернуться";
			this->btn_exit->UseVisualStyleBackColor = false;
			this->btn_exit->Click += gcnew System::EventHandler(this, &Model2::btn_return_click);
			// 
			// textBox5
			// 
			this->textBox5->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->textBox5->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(500, 329);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(93, 31);
			this->textBox5->TabIndex = 24;
			// 
			// btn_1
			// 
			this->btn_1->BackColor = System::Drawing::Color::DimGray;
			this->btn_1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_1->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F));
			this->btn_1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btn_1->Location = System::Drawing::Point(484, 401);
			this->btn_1->Margin = System::Windows::Forms::Padding(4);
			this->btn_1->Name = L"btn_1";
			this->btn_1->Size = System::Drawing::Size(109, 40);
			this->btn_1->TabIndex = 23;
			this->btn_1->Text = L"Запуск";
			this->btn_1->UseVisualStyleBackColor = false;
			this->btn_1->Click += gcnew System::EventHandler(this, &Model2::btn_start_click);
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(195, 332);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(374, 24);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Введите шаг симуляции(с) -";
			// 
			// textBox4
			// 
			this->textBox4->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->textBox4->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(500, 279);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(93, 31);
			this->textBox4->TabIndex = 21;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Model2::textBox4_TextChanged);
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(181, 282);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(402, 24);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Введите время симуляции(с) -";
			this->label4->Click += gcnew System::EventHandler(this, &Model2::label4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(500, 81);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(93, 31);
			this->textBox1->TabIndex = 19;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Model2::textBox3_TextChanged);
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(223, 196);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(346, 24);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Введите массу тела(кг) -";
			// 
			// textBox3
			// 
			this->textBox3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->textBox3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(500, 193);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(93, 31);
			this->textBox3->TabIndex = 17;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(99, 115);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(395, 65);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Введите отклонение от начального положения системы(м)";
			this->label2->Click += gcnew System::EventHandler(this, &Model2::label2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->textBox2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(500, 133);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(93, 31);
			this->textBox2->TabIndex = 15;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(60, 84);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(542, 24);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Введите коэффицент жесткости пружины -";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(470, 137);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(24, 23);
			this->label7->TabIndex = 27;
			this->label7->Text = L"-";
			this->label7->Click += gcnew System::EventHandler(this, &Model2::label7_Click);
			// 
			// Model2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(623, 454);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->btn_exit);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->btn_1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Lucida Console", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->Name = L"Model2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Колебание пружины";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	
	private: System::Void btn_return_click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btn_start_click(System::Object^ sender, System::EventArgs^ e) {
		try {
			List<long double> input_values;
			input_values.push_back(Convert::ToDouble(textBox1->Text)); // x0
			input_values.push_back(Convert::ToDouble(textBox2->Text)); // v0
			input_values.push_back(Convert::ToDouble(textBox3->Text)); // a	
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

			ModelProcess_2 model(input_values);
			std::shared_ptr<ModelProcess_2> point_model = std::make_shared<ModelProcess_2>(model);
			point_model->full();

			Table^ table2 = gcnew Table(point_model);
			table2->Show();

		}
		catch (System::FormatException^ ex) {
			MessageBox::Show("Ошибка ввода: " + ex->Message);
		}
		catch (System::Exception^ ex) {
			MessageBox::Show("Произошла ошибка: " + ex->Message);
		}
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
