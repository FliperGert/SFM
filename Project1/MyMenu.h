#include "model.h"
#include "list.h"
#include <string>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyMenu
	/// </summary>
	public ref class MyMenu : public System::Windows::Forms::Form
	{
	public:
		MyMenu(void)
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
		~MyMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_test;
	private: System::Windows::Forms::Button^ btn_exit;
	protected:


	private: System::Windows::Forms::Button^ btn_m1;
	private: System::Windows::Forms::Button^ btn_m2;
	private: System::Windows::Forms::Button^ btn_m3;
	private: System::Windows::Forms::Button^ btn_m4;





	private: System::Windows::Forms::Button^ btn_spr;


	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyMenu::typeid));
			this->label_test = (gcnew System::Windows::Forms::Label());
			this->btn_exit = (gcnew System::Windows::Forms::Button());
			this->btn_m1 = (gcnew System::Windows::Forms::Button());
			this->btn_m2 = (gcnew System::Windows::Forms::Button());
			this->btn_m3 = (gcnew System::Windows::Forms::Button());
			this->btn_m4 = (gcnew System::Windows::Forms::Button());
			this->btn_spr = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_test
			// 
			resources->ApplyResources(this->label_test, L"label_test");
			this->label_test->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label_test->Name = L"label_test";
			// 
			// btn_exit
			// 
			this->btn_exit->BackColor = System::Drawing::Color::DimGray;
			resources->ApplyResources(this->btn_exit, L"btn_exit");
			this->btn_exit->Name = L"btn_exit";
			this->btn_exit->UseVisualStyleBackColor = false;
			this->btn_exit->Click += gcnew System::EventHandler(this, &MyMenu::btn_main_Click);
			// 
			// btn_m1
			// 
			resources->ApplyResources(this->btn_m1, L"btn_m1");
			this->btn_m1->BackColor = System::Drawing::Color::DimGray;
			this->btn_m1->Name = L"btn_m1";
			this->btn_m1->UseMnemonic = false;
			this->btn_m1->UseVisualStyleBackColor = false;
			this->btn_m1->Click += gcnew System::EventHandler(this, &MyMenu::btn_m1_click);
			// 
			// btn_m2
			// 
			resources->ApplyResources(this->btn_m2, L"btn_m2");
			this->btn_m2->BackColor = System::Drawing::Color::DimGray;
			this->btn_m2->Name = L"btn_m2";
			this->btn_m2->UseVisualStyleBackColor = false;
			// 
			// btn_m3
			// 
			resources->ApplyResources(this->btn_m3, L"btn_m3");
			this->btn_m3->BackColor = System::Drawing::Color::DimGray;
			this->btn_m3->Name = L"btn_m3";
			this->btn_m3->UseVisualStyleBackColor = false;
			// 
			// btn_m4
			// 
			resources->ApplyResources(this->btn_m4, L"btn_m4");
			this->btn_m4->BackColor = System::Drawing::Color::DimGray;
			this->btn_m4->Name = L"btn_m4";
			this->btn_m4->UseVisualStyleBackColor = false;
			// 
			// btn_spr
			// 
			this->btn_spr->BackColor = System::Drawing::Color::DimGray;
			resources->ApplyResources(this->btn_spr, L"btn_spr");
			this->btn_spr->Name = L"btn_spr";
			this->btn_spr->UseVisualStyleBackColor = false;
			this->btn_spr->Click += gcnew System::EventHandler(this, &MyMenu::btn_doc);
			// 
			// MyMenu
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Controls->Add(this->btn_spr);
			this->Controls->Add(this->btn_m4);
			this->Controls->Add(this->btn_m3);
			this->Controls->Add(this->btn_m2);
			this->Controls->Add(this->btn_m1);
			this->Controls->Add(this->btn_exit);
			this->Controls->Add(this->label_test);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Name = L"MyMenu";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_main_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void btn_doc(System::Object^ sender, System::EventArgs^ e) {
		try {
			System::Diagnostics::Process::Start("document.pdf");
		}
		catch (System::Exception^ ex) {
			MessageBox::Show("ќшибка при открытии документа: " + ex->Message);
		}

	}

	private: System::Void btn_m1_click(System::Object^ sender, System::EventArgs^ e) {

		Model^ newModel = gcnew Model();

		newModel->Show();
	}
};
};