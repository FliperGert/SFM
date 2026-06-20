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
	/// —водка дл€ Model3
	/// </summary>
	public ref class Model3 : public System::Windows::Forms::Form
	{
	public:
		Model3(void)
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
		~Model3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;




	private: System::Windows::Forms::Button^ btn_1;
	private: System::Windows::Forms::Button^ btnI_exit;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Model3::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->btn_1 = (gcnew System::Windows::Forms::Button());
			this->btnI_exit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Console", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->label1->Location = System::Drawing::Point(187, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(403, 28);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ѕаллистическое движение";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(556, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"¬ведите начальную скорость тела(м/с) - ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(133, 139);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(430, 23);
			this->label3->TabIndex = 2;
			this->label3->Text = L"¬ведите угол полета(градусы) -";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(146, 229);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(402, 23);
			this->label4->TabIndex = 3;
			this->label4->Text = L"¬ведите врем€ симул€ции(с) -";
			this->label4->Click += gcnew System::EventHandler(this, &Model3::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(174, 286);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(374, 23);
			this->label5->TabIndex = 4;
			this->label5->Text = L"¬ведите шаг симул€ции(с) -";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(479, 73);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(93, 31);
			this->textBox1->TabIndex = 25;
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->textBox2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(479, 131);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(93, 31);
			this->textBox2->TabIndex = 26;
			// 
			// textBox3
			// 
			this->textBox3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->textBox3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(479, 225);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(93, 31);
			this->textBox3->TabIndex = 27;
			// 
			// textBox4
			// 
			this->textBox4->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->textBox4->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(479, 282);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(93, 31);
			this->textBox4->TabIndex = 28;
			// 
			// btn_1
			// 
			this->btn_1->BackColor = System::Drawing::Color::DimGray;
			this->btn_1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_1->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F));
			this->btn_1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btn_1->Location = System::Drawing::Point(556, 340);
			this->btn_1->Margin = System::Windows::Forms::Padding(4);
			this->btn_1->Name = L"btn_1";
			this->btn_1->Size = System::Drawing::Size(109, 40);
			this->btn_1->TabIndex = 29;
			this->btn_1->Text = L"«апуск";
			this->btn_1->UseVisualStyleBackColor = false;
			this->btn_1->Click += gcnew System::EventHandler(this, &Model3::btn_1_Click);
			// 
			// btnI_exit
			// 
			this->btnI_exit->BackColor = System::Drawing::Color::DimGray;
			this->btnI_exit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnI_exit->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F));
			this->btnI_exit->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnI_exit->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->btnI_exit->Location = System::Drawing::Point(13, 340);
			this->btnI_exit->Margin = System::Windows::Forms::Padding(4);
			this->btnI_exit->Name = L"btnI_exit";
			this->btnI_exit->Size = System::Drawing::Size(155, 40);
			this->btnI_exit->TabIndex = 30;
			this->btnI_exit->Text = L"¬ернутьс€";
			this->btnI_exit->UseVisualStyleBackColor = false;
			this->btnI_exit->Click += gcnew System::EventHandler(this, &Model3::btnI_exit_Click);
			// 
			// Model3
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(681, 409);
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
			this->Name = L"Model3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ѕаллистическое движение";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnI_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btn_1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			List<long double> input_values;
			input_values.push_back(Convert::ToDouble(textBox1->Text)); // v0
			input_values.push_back(Convert::ToDouble(textBox2->Text)); // alpha
			input_values.push_back(Convert::ToDouble(textBox3->Text)); // t	
			input_values.push_back(Convert::ToDouble(textBox4->Text)); // d
			

			if (input_values.size() != 4) {
				MessageBox::Show("ќшибка: недостаточно данных дл€ моделировани€.");
				return;
			}
			if (input_values[3] <= 0) {
				MessageBox::Show("ќшибка: шаг симул€ции должен быть положительным.");
				return;
			}
			if (input_values[2] <= 0) {
				MessageBox::Show("ќшибка: врем€ симул€ции должно быть положительным.");
				return;
			}

			ModelProcess_3 model(input_values);
			std::shared_ptr<ModelProcess_3> point_model = std::make_shared<ModelProcess_3>(model);
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
