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
	/// —водка дл€ Model4
	/// </summary>
	public ref class Model4 : public System::Windows::Forms::Form
	{
	public:
		Model4(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Model4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnI_exit;
	protected:
	private: System::Windows::Forms::Button^ btn_1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Model4::typeid));
			this->btnI_exit = (gcnew System::Windows::Forms::Button());
			this->btn_1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnI_exit
			// 
			this->btnI_exit->BackColor = System::Drawing::Color::DimGray;
			this->btnI_exit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnI_exit->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F));
			this->btnI_exit->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnI_exit->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnI_exit->Location = System::Drawing::Point(13, 432);
			this->btnI_exit->Margin = System::Windows::Forms::Padding(4);
			this->btnI_exit->Name = L"btnI_exit";
			this->btnI_exit->Size = System::Drawing::Size(155, 40);
			this->btnI_exit->TabIndex = 41;
			this->btnI_exit->Text = L"¬ернутьс€";
			this->btnI_exit->UseVisualStyleBackColor = false;
			this->btnI_exit->Click += gcnew System::EventHandler(this, &Model4::btnI_exit_Click);
			// 
			// btn_1
			// 
			this->btn_1->BackColor = System::Drawing::Color::DimGray;
			this->btn_1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_1->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F));
			this->btn_1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btn_1->Location = System::Drawing::Point(680, 432);
			this->btn_1->Margin = System::Windows::Forms::Padding(4);
			this->btn_1->Name = L"btn_1";
			this->btn_1->Size = System::Drawing::Size(109, 40);
			this->btn_1->TabIndex = 40;
			this->btn_1->Text = L"«апуск";
			this->btn_1->UseVisualStyleBackColor = false;
			this->btn_1->Click += gcnew System::EventHandler(this, &Model4::btn_1_Click);
			// 
			// textBox4
			// 
			this->textBox4->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->textBox4->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(574, 222);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(93, 31);
			this->textBox4->TabIndex = 39;
			// 
			// textBox3
			// 
			this->textBox3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->textBox3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(574, 169);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(93, 31);
			this->textBox3->TabIndex = 38;
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->textBox2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(574, 117);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(93, 31);
			this->textBox2->TabIndex = 37;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(574, 68);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(93, 31);
			this->textBox1->TabIndex = 36;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Model4::textBox1_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(271, 351);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(374, 23);
			this->label5->TabIndex = 35;
			this->label5->Text = L"¬ведите шаг симул€ции(с) -";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(243, 298);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(402, 23);
			this->label4->TabIndex = 34;
			this->label4->Text = L"¬ведите врем€ симул€ции(с) -";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(70, 72);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(626, 23);
			this->label3->TabIndex = 33;
			this->label3->Text = L"¬ведите площадь поперечного сечени€(в м^2) -";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(257, 173);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(388, 23);
			this->label2->TabIndex = 32;
			this->label2->Text = L"¬ведите высоту падени€(м) -";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Console", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->label1->Location = System::Drawing::Point(145, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(624, 28);
			this->label1->TabIndex = 31;
			this->label1->Text = L"ѕадение тела с сопротивление воздуха";
			// 
			// textBox5
			// 
			this->textBox5->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->textBox5->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(574, 290);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(93, 31);
			this->textBox5->TabIndex = 42;
			// 
			// textBox6
			// 
			this->textBox6->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->textBox6->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(574, 347);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(93, 31);
			this->textBox6->TabIndex = 43;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(181, 121);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(486, 23);
			this->label6->TabIndex = 44;
			this->label6->Text = L"¬ведите коэффицент сопротивлени€ -";
			this->label6->Click += gcnew System::EventHandler(this, &Model4::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(299, 226);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(346, 23);
			this->label7->TabIndex = 45;
			this->label7->Text = L"¬ведите массу тела(кг) -";
			// 
			// Model4
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(802, 485);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->btnI_exit);
			this->Controls->Add(this->btn_1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Lucida Console", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->Name = L"Model4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ѕадение тела с сопротивление воздуха";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnI_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void btn_1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			List<long double> input_values;
			input_values.push_back(Convert::ToDouble(textBox1->Text)); // S
			input_values.push_back(Convert::ToDouble(textBox2->Text)); // k
			input_values.push_back(Convert::ToDouble(textBox3->Text)); // h	
			input_values.push_back(Convert::ToDouble(textBox4->Text)); // m
			input_values.push_back(Convert::ToDouble(textBox5->Text)); // t
			input_values.push_back(Convert::ToDouble(textBox6->Text)); // d

			if (input_values.size() != 6) {
				MessageBox::Show("ќшибка: недостаточно данных дл€ моделировани€.");
				return;
			}
			if (input_values[4] <= 0 || input_values[5] <= 0) {
				MessageBox::Show("ќшибка: врем€ симул€ции и шаг симул€ции должны быть положительными.");
				return;
			}
			if (input_values[0] <= 0 ) {
				MessageBox::Show("ќшибка: площадь поперечного сечени€ должна быть положительной.");
				return;
			}
			if (input_values[1] <= 0 ) {
				MessageBox::Show("ќшибка: коэффициент сопротивлени€ должен быть положительным.");
				return;
			}
			if (input_values[2] <= 0) {
				MessageBox::Show("ќшибка: высота падени€ должна быть положительной.");
				return;
			}
			if (input_values[3] <= 0 ) {
				MessageBox::Show("ќшибка: масса должна быть положительной.");
				return;
			}
			ModelProcess_4 model(input_values);
			std::shared_ptr<ModelProcess_4> point_model = std::make_shared<ModelProcess_4>(model);
			point_model->full();

			Table^ table1 = gcnew Table(point_model);
			table1->Show();

		}
		catch (System::FormatException^ ex) {
			MessageBox::Show("ќшибка ввода: " + ex->Message);
		}
		catch (System::Exception^ ex) {
			MessageBox::Show("ѕроизошла ошибка: " + ex->Message);
		}
	}
};
}
