#pragma once
#include <iostream>
#include <string>
#include <complex>
#include <cmath>
#include <msclr\marshal_cppstd.h>
namespace complexcalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ first;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ inputreal;
	private: System::Windows::Forms::TextBox^ inputimag;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ ALGtoTRIG;
	private: System::Windows::Forms::Button^ ALGtoEXP;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ calc11;
	private: System::Windows::Forms::TextBox^ calc12;
	private: System::Windows::Forms::TextBox^ calc21;
	private: System::Windows::Forms::TextBox^ calc22;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ buttonSUM;
	private: System::Windows::Forms::Button^ buttonMINUS;
	private: System::Windows::Forms::Button^ buttonUMNOZH;
	private: System::Windows::Forms::Button^ buttonDEL;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ calcanswer;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;

	private: System::Windows::Forms::PictureBox^ pictureBox2;








	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->first = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->inputreal = (gcnew System::Windows::Forms::TextBox());
			this->inputimag = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ALGtoTRIG = (gcnew System::Windows::Forms::Button());
			this->ALGtoEXP = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->calc11 = (gcnew System::Windows::Forms::TextBox());
			this->calc12 = (gcnew System::Windows::Forms::TextBox());
			this->calc21 = (gcnew System::Windows::Forms::TextBox());
			this->calc22 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->buttonSUM = (gcnew System::Windows::Forms::Button());
			this->buttonMINUS = (gcnew System::Windows::Forms::Button());
			this->buttonUMNOZH = (gcnew System::Windows::Forms::Button());
			this->buttonDEL = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->calcanswer = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// first
			// 
			this->first->BackColor = System::Drawing::Color::LimeGreen;
			this->first->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"first.BackgroundImage")));
			this->first->FlatAppearance->BorderSize = 0;
			this->first->FlatAppearance->MouseDownBackColor = System::Drawing::Color::LimeGreen;
			this->first->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PaleGreen;
			this->first->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->first->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Bold));
			this->first->Location = System::Drawing::Point(12, 12);
			this->first->Name = L"first";
			this->first->Size = System::Drawing::Size(366, 65);
			this->first->TabIndex = 0;
			this->first->Text = L"Преобразование комплексного числа";
			this->first->UseVisualStyleBackColor = false;
			this->first->Click += gcnew System::EventHandler(this, &MyForm::first_Click);
			this->first->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MouseDown);
			this->first->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			this->first->MouseLeave += gcnew System::EventHandler(this, &MyForm::MouseLeave);
			this->first->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MouseUp);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Orange;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Orange;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gold;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(388, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(354, 65);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Калькулятор комплексных чисел";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::second_Click);
			this->button1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MouseDown);
			this->button1->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			this->button1->MouseLeave += gcnew System::EventHandler(this, &MyForm::MouseLeave);
			this->button1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MouseUp);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 25.25F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(13, 97);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(568, 120);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Введите действительную часть:\r\n\r\nВведите мнимую часть:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// inputreal
			// 
			this->inputreal->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->inputreal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->inputreal->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->inputreal->Font = (gcnew System::Drawing::Font(L"Consolas", 32, System::Drawing::FontStyle::Bold));
			this->inputreal->ForeColor = System::Drawing::SystemColors::Window;
			this->inputreal->Location = System::Drawing::Point(587, 97);
			this->inputreal->Name = L"inputreal";
			this->inputreal->Size = System::Drawing::Size(86, 50);
			this->inputreal->TabIndex = 3;
			this->inputreal->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// inputimag
			// 
			this->inputimag->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->inputimag->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->inputimag->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->inputimag->Font = (gcnew System::Drawing::Font(L"Consolas", 32, System::Drawing::FontStyle::Bold));
			this->inputimag->ForeColor = System::Drawing::SystemColors::Window;
			this->inputimag->Location = System::Drawing::Point(587, 167);
			this->inputimag->Name = L"inputimag";
			this->inputimag->Size = System::Drawing::Size(86, 50);
			this->inputimag->TabIndex = 4;
			this->inputimag->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 36.75F, System::Drawing::FontStyle::Bold));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(20, 428);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(718, 58);
			this->textBox1->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 25.25F, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(13, 373);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 40);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Ответ";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// ALGtoTRIG
			// 
			this->ALGtoTRIG->BackColor = System::Drawing::Color::LimeGreen;
			this->ALGtoTRIG->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ALGtoTRIG.BackgroundImage")));
			this->ALGtoTRIG->FlatAppearance->BorderSize = 0;
			this->ALGtoTRIG->FlatAppearance->MouseDownBackColor = System::Drawing::Color::LimeGreen;
			this->ALGtoTRIG->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PaleGreen;
			this->ALGtoTRIG->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ALGtoTRIG->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Bold));
			this->ALGtoTRIG->Location = System::Drawing::Point(20, 255);
			this->ALGtoTRIG->Name = L"ALGtoTRIG";
			this->ALGtoTRIG->Size = System::Drawing::Size(358, 79);
			this->ALGtoTRIG->TabIndex = 7;
			this->ALGtoTRIG->Text = L"Перевести число в тригонометрическую форму";
			this->ALGtoTRIG->UseVisualStyleBackColor = false;
			this->ALGtoTRIG->Click += gcnew System::EventHandler(this, &MyForm::ALGtoTRIG_Click);
			this->ALGtoTRIG->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MouseDown);
			this->ALGtoTRIG->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			this->ALGtoTRIG->MouseLeave += gcnew System::EventHandler(this, &MyForm::MouseLeave);
			this->ALGtoTRIG->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MouseUp);
			// 
			// ALGtoEXP
			// 
			this->ALGtoEXP->BackColor = System::Drawing::Color::LimeGreen;
			this->ALGtoEXP->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ALGtoEXP.BackgroundImage")));
			this->ALGtoEXP->FlatAppearance->BorderSize = 0;
			this->ALGtoEXP->FlatAppearance->MouseDownBackColor = System::Drawing::Color::LimeGreen;
			this->ALGtoEXP->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PaleGreen;
			this->ALGtoEXP->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ALGtoEXP->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Bold));
			this->ALGtoEXP->Location = System::Drawing::Point(384, 255);
			this->ALGtoEXP->Name = L"ALGtoEXP";
			this->ALGtoEXP->Size = System::Drawing::Size(358, 79);
			this->ALGtoEXP->TabIndex = 8;
			this->ALGtoEXP->Text = L"Перевести число в экспоненциальную форму";
			this->ALGtoEXP->UseVisualStyleBackColor = false;
			this->ALGtoEXP->Click += gcnew System::EventHandler(this, &MyForm::ALGtoEXP_Click);
			this->ALGtoEXP->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MouseDown);
			this->ALGtoEXP->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			this->ALGtoEXP->MouseLeave += gcnew System::EventHandler(this, &MyForm::MouseLeave);
			this->ALGtoEXP->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MouseUp);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 25.25F, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(679, 97);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 40);
			this->label3->TabIndex = 9;
			this->label3->Text = L"+";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 25.25F, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(679, 176);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 40);
			this->label4->TabIndex = 10;
			this->label4->Text = L"i";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::first_Click);
			// 
			// calc11
			// 
			this->calc11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->calc11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->calc11->Enabled = false;
			this->calc11->Font = (gcnew System::Drawing::Font(L"Consolas", 32, System::Drawing::FontStyle::Bold));
			this->calc11->ForeColor = System::Drawing::SystemColors::Window;
			this->calc11->Location = System::Drawing::Point(45, 142);
			this->calc11->Name = L"calc11";
			this->calc11->Size = System::Drawing::Size(297, 50);
			this->calc11->TabIndex = 11;
			this->calc11->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->calc11->Visible = false;
			// 
			// calc12
			// 
			this->calc12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->calc12->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->calc12->Enabled = false;
			this->calc12->Font = (gcnew System::Drawing::Font(L"Consolas", 32, System::Drawing::FontStyle::Bold));
			this->calc12->ForeColor = System::Drawing::SystemColors::Window;
			this->calc12->Location = System::Drawing::Point(384, 142);
			this->calc12->Name = L"calc12";
			this->calc12->Size = System::Drawing::Size(293, 50);
			this->calc12->TabIndex = 12;
			this->calc12->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->calc12->Visible = false;
			// 
			// calc21
			// 
			this->calc21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->calc21->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->calc21->Enabled = false;
			this->calc21->Font = (gcnew System::Drawing::Font(L"Consolas", 32, System::Drawing::FontStyle::Bold));
			this->calc21->ForeColor = System::Drawing::SystemColors::Window;
			this->calc21->Location = System::Drawing::Point(45, 199);
			this->calc21->Name = L"calc21";
			this->calc21->Size = System::Drawing::Size(297, 50);
			this->calc21->TabIndex = 13;
			this->calc21->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->calc21->Visible = false;
			// 
			// calc22
			// 
			this->calc22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->calc22->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->calc22->Enabled = false;
			this->calc22->Font = (gcnew System::Drawing::Font(L"Consolas", 32, System::Drawing::FontStyle::Bold));
			this->calc22->ForeColor = System::Drawing::SystemColors::Window;
			this->calc22->Location = System::Drawing::Point(384, 198);
			this->calc22->Name = L"calc22";
			this->calc22->Size = System::Drawing::Size(293, 50);
			this->calc22->TabIndex = 14;
			this->calc22->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->calc22->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Enabled = false;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Consolas", 25.25F, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(348, 142);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(36, 40);
			this->label5->TabIndex = 15;
			this->label5->Text = L"+";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Enabled = false;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->Font = (gcnew System::Drawing::Font(L"Consolas", 25.25F, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(348, 199);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(36, 40);
			this->label6->TabIndex = 16;
			this->label6->Text = L"+";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Enabled = false;
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label7->Font = (gcnew System::Drawing::Font(L"Consolas", 25.25F, System::Drawing::FontStyle::Bold));
			this->label7->Location = System::Drawing::Point(683, 142);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(36, 40);
			this->label7->TabIndex = 17;
			this->label7->Text = L"i";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label7->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Enabled = false;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label8->Font = (gcnew System::Drawing::Font(L"Consolas", 25.25F, System::Drawing::FontStyle::Bold));
			this->label8->Location = System::Drawing::Point(683, 207);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(36, 40);
			this->label8->TabIndex = 18;
			this->label8->Text = L"i";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label8->Visible = false;
			// 
			// buttonSUM
			// 
			this->buttonSUM->BackColor = System::Drawing::Color::Orange;
			this->buttonSUM->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonSUM.BackgroundImage")));
			this->buttonSUM->Enabled = false;
			this->buttonSUM->FlatAppearance->BorderSize = 0;
			this->buttonSUM->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Orange;
			this->buttonSUM->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gold;
			this->buttonSUM->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSUM->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Bold));
			this->buttonSUM->Location = System::Drawing::Point(45, 269);
			this->buttonSUM->Name = L"buttonSUM";
			this->buttonSUM->Size = System::Drawing::Size(333, 65);
			this->buttonSUM->TabIndex = 19;
			this->buttonSUM->Text = L"СЛОЖЕНИЕ";
			this->buttonSUM->UseVisualStyleBackColor = false;
			this->buttonSUM->Visible = false;
			this->buttonSUM->Click += gcnew System::EventHandler(this, &MyForm::calculate);
			this->buttonSUM->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MouseDown);
			this->buttonSUM->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			this->buttonSUM->MouseLeave += gcnew System::EventHandler(this, &MyForm::MouseLeave);
			this->buttonSUM->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MouseUp);
			// 
			// buttonMINUS
			// 
			this->buttonMINUS->BackColor = System::Drawing::Color::Orange;
			this->buttonMINUS->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonMINUS.BackgroundImage")));
			this->buttonMINUS->Enabled = false;
			this->buttonMINUS->FlatAppearance->BorderSize = 0;
			this->buttonMINUS->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Orange;
			this->buttonMINUS->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gold;
			this->buttonMINUS->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonMINUS->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Bold));
			this->buttonMINUS->Location = System::Drawing::Point(384, 269);
			this->buttonMINUS->Name = L"buttonMINUS";
			this->buttonMINUS->Size = System::Drawing::Size(333, 65);
			this->buttonMINUS->TabIndex = 20;
			this->buttonMINUS->Text = L"ВЫЧИТАНИЕ";
			this->buttonMINUS->UseVisualStyleBackColor = false;
			this->buttonMINUS->Visible = false;
			this->buttonMINUS->Click += gcnew System::EventHandler(this, &MyForm::calculate);
			this->buttonMINUS->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MouseDown);
			this->buttonMINUS->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			this->buttonMINUS->MouseLeave += gcnew System::EventHandler(this, &MyForm::MouseLeave);
			this->buttonMINUS->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MouseUp);
			// 
			// buttonUMNOZH
			// 
			this->buttonUMNOZH->BackColor = System::Drawing::Color::Orange;
			this->buttonUMNOZH->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonUMNOZH.BackgroundImage")));
			this->buttonUMNOZH->Enabled = false;
			this->buttonUMNOZH->FlatAppearance->BorderSize = 0;
			this->buttonUMNOZH->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Orange;
			this->buttonUMNOZH->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gold;
			this->buttonUMNOZH->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonUMNOZH->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Bold));
			this->buttonUMNOZH->Location = System::Drawing::Point(45, 340);
			this->buttonUMNOZH->Name = L"buttonUMNOZH";
			this->buttonUMNOZH->Size = System::Drawing::Size(333, 65);
			this->buttonUMNOZH->TabIndex = 21;
			this->buttonUMNOZH->Text = L"УМНОЖЕНИЕ";
			this->buttonUMNOZH->UseVisualStyleBackColor = false;
			this->buttonUMNOZH->Visible = false;
			this->buttonUMNOZH->Click += gcnew System::EventHandler(this, &MyForm::calculate);
			this->buttonUMNOZH->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MouseDown);
			this->buttonUMNOZH->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			this->buttonUMNOZH->MouseLeave += gcnew System::EventHandler(this, &MyForm::MouseLeave);
			this->buttonUMNOZH->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MouseUp);
			// 
			// buttonDEL
			// 
			this->buttonDEL->BackColor = System::Drawing::Color::Orange;
			this->buttonDEL->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonDEL.BackgroundImage")));
			this->buttonDEL->Enabled = false;
			this->buttonDEL->FlatAppearance->BorderSize = 0;
			this->buttonDEL->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Orange;
			this->buttonDEL->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gold;
			this->buttonDEL->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDEL->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Bold));
			this->buttonDEL->Location = System::Drawing::Point(384, 340);
			this->buttonDEL->Name = L"buttonDEL";
			this->buttonDEL->Size = System::Drawing::Size(333, 65);
			this->buttonDEL->TabIndex = 22;
			this->buttonDEL->Text = L"ДЕЛЕНИЕ";
			this->buttonDEL->UseVisualStyleBackColor = false;
			this->buttonDEL->Visible = false;
			this->buttonDEL->Click += gcnew System::EventHandler(this, &MyForm::calculate);
			this->buttonDEL->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MouseDown);
			this->buttonDEL->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			this->buttonDEL->MouseLeave += gcnew System::EventHandler(this, &MyForm::MouseLeave);
			this->buttonDEL->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MouseUp);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Enabled = false;
			this->label9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label9->Font = (gcnew System::Drawing::Font(L"Consolas", 25.25F, System::Drawing::FontStyle::Bold));
			this->label9->Location = System::Drawing::Point(38, 428);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(131, 40);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Ответ:";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label9->Visible = false;
			// 
			// calcanswer
			// 
			this->calcanswer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->calcanswer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->calcanswer->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->calcanswer->Enabled = false;
			this->calcanswer->Font = (gcnew System::Drawing::Font(L"Consolas", 36.75F, System::Drawing::FontStyle::Bold));
			this->calcanswer->ForeColor = System::Drawing::SystemColors::Window;
			this->calcanswer->Location = System::Drawing::Point(175, 428);
			this->calcanswer->Name = L"calcanswer";
			this->calcanswer->ReadOnly = true;
			this->calcanswer->Size = System::Drawing::Size(563, 58);
			this->calcanswer->TabIndex = 24;
			this->calcanswer->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Enabled = false;
			this->label10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label10->Font = (gcnew System::Drawing::Font(L"Consolas", 18.25F, System::Drawing::FontStyle::Bold));
			this->label10->Location = System::Drawing::Point(49, 110);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(293, 29);
			this->label10->TabIndex = 25;
			this->label10->Text = L"Действительная часть";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label10->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Enabled = false;
			this->label11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label11->Font = (gcnew System::Drawing::Font(L"Consolas", 18.25F, System::Drawing::FontStyle::Bold));
			this->label11->Location = System::Drawing::Point(438, 110);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(181, 29);
			this->label11->TabIndex = 26;
			this->label11->Text = L"Мнимая часть";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label11->Visible = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1882, 608);
			this->pictureBox2->TabIndex = 28;
			this->pictureBox2->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(750, 497);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->calcanswer);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->buttonDEL);
			this->Controls->Add(this->buttonUMNOZH);
			this->Controls->Add(this->buttonMINUS);
			this->Controls->Add(this->buttonSUM);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->calc22);
			this->Controls->Add(this->calc21);
			this->Controls->Add(this->calc12);
			this->Controls->Add(this->calc11);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->ALGtoEXP);
			this->Controls->Add(this->ALGtoTRIG);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->inputimag);
			this->Controls->Add(this->inputreal);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->first);
			this->Controls->Add(this->pictureBox2);
			this->ForeColor = System::Drawing::SystemColors::Window;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(1920, 600);
			this->MinimumSize = System::Drawing::Size(760, 532);
			this->Name = L"MyForm";
			this->Text = L"Калькулятор комплексных чисел";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int Check(String^ temp)
		{
			String^ allow = "0123456789.";
			if (temp->Length == 0)
				return 1;
			else if (temp[0] == '.')
				return 2;
			else
			{
				int i = 0; int j = 0; bool f = false; int dot = 0;

				while (i < temp->Length)
				{
					j = 0;
					if (temp[i] == '.')
					{
						dot++;
					}
					while (j < allow->Length)
					{
						if ((temp[i] == allow[j]) && (dot <= 1))
							f = true;
						j++;
					}
					if (f == false)
						return 3;
					else f = false;
					i++;
				}
				return 0;
			}
		}
	private: System::Void ALGtoTRIG_Click(System::Object^ sender, System::EventArgs^ e) {
		double real, imag;

		if (Check(this->inputreal->Text) == 0 && Check(this->inputimag->Text) == 0) //Если проверка пройдена
		{
			real = System::Double::Parse(this->inputreal->Text, System::Globalization::NumberStyles::AllowDecimalPoint, System::Globalization::CultureInfo::InvariantCulture);
			imag = System::Double::Parse(this->inputimag->Text, System::Globalization::NumberStyles::AllowDecimalPoint, System::Globalization::CultureInfo::InvariantCulture);
			complex<double> i(real, imag);
			double phi = arg(i);
			double rho = abs(i);
			this->textBox1->Text = rho.ToString(System::Globalization::CultureInfo::GetCultureInfo("en-US")) + "*(cos(" + phi.ToString(System::Globalization::CultureInfo::GetCultureInfo("en-US")) + ")+i*sin(" + phi.ToString(System::Globalization::CultureInfo::GetCultureInfo("en-US")) + "))";
		}
		else  //Если проверка не пройдена
		{
			if (Check(this->inputreal->Text) == 1 || Check(this->inputimag->Text) == 1)
				this->textBox1->Text = "Поле ввода не должно быть пустым!";
			else if (Check(this->inputreal->Text) == 2 || Check(this->inputimag->Text) == 2)
				this->textBox1->Text = "Точка не может быть первым символом!";
			else if (Check(this->inputreal->Text) == 3 || Check(this->inputimag->Text) == 3)
				this->textBox1->Text = "Нельзя вводить посторонние символы!";
		}
	}
	private: System::Void ALGtoEXP_Click(System::Object^ sender, System::EventArgs^ e) {
		Double real, imag;

		if (Check(this->inputreal->Text) == 0 && Check(this->inputimag->Text) == 0)
		{
			real = System::Double::Parse(this->inputreal->Text, System::Globalization::NumberStyles::AllowDecimalPoint, System::Globalization::CultureInfo::InvariantCulture);
			imag = System::Double::Parse(this->inputimag->Text, System::Globalization::NumberStyles::AllowDecimalPoint, System::Globalization::CultureInfo::InvariantCulture);
			complex<float> i(real, imag);
			float phi = arg(i);
			float rho = abs(i);
			this->textBox1->Text = rho.ToString(System::Globalization::CultureInfo::GetCultureInfo("en-US")) + "*exp^(i*" + phi.ToString(System::Globalization::CultureInfo::GetCultureInfo("en-US")) + ")";
		}
		else
		{
			if (Check(this->inputreal->Text) == 1 || Check(this->inputimag->Text) == 1)
				this->textBox1->Text = "Поле ввода не должно быть пустым!";
			else if (Check(this->inputreal->Text) == 2 || Check(this->inputimag->Text) == 2)
				this->textBox1->Text = "Запятая не может быть первым символом!";
			else if (Check(this->inputreal->Text) == 3 || Check(this->inputimag->Text) == 3)
				this->textBox1->Text = "Нельзя вводить посторонние символы!";
		}
	}
	private: System::Void calculate(System::Object^ sender, System::EventArgs^ e) {
		double real1, imag1, real2, imag2;

		if (Check(this->calc11->Text) == 0 && Check(this->calc12->Text) == 0 && Check(this->calc21->Text) == 0 && Check(this->calc22->Text) == 0)
		{
			real1 = System::Double::Parse(this->calc11->Text, System::Globalization::NumberStyles::AllowDecimalPoint, System::Globalization::CultureInfo::InvariantCulture);
			imag1 = System::Double::Parse(this->calc12->Text, System::Globalization::NumberStyles::AllowDecimalPoint, System::Globalization::CultureInfo::InvariantCulture);
			complex<float> i(real1, imag1);
			real2 = System::Double::Parse(this->calc21->Text, System::Globalization::NumberStyles::AllowDecimalPoint, System::Globalization::CultureInfo::InvariantCulture);
			imag2 = System::Double::Parse(this->calc22->Text, System::Globalization::NumberStyles::AllowDecimalPoint, System::Globalization::CultureInfo::InvariantCulture);
			complex<float> j(real2, imag2);
			if (sender == buttonSUM)
			{
				this->calcanswer->Text = (i + j).real().ToString(System::Globalization::CultureInfo::GetCultureInfo("en-US")) + " + " + (i + j).imag().ToString(System::Globalization::CultureInfo::GetCultureInfo("en-US")) + "i";
			}
			else if (sender == buttonMINUS)
			{
				this->calcanswer->Text = (i - j).real().ToString(System::Globalization::CultureInfo::GetCultureInfo("en-US")) + " + " + (i - j).imag().ToString(System::Globalization::CultureInfo::GetCultureInfo("en-US")) + "i";
			}
			else if (sender == buttonUMNOZH)
			{
				this->calcanswer->Text = (i * j).real().ToString(System::Globalization::CultureInfo::GetCultureInfo("en-US")) + " + " + (i * j).imag().ToString(System::Globalization::CultureInfo::GetCultureInfo("en-US")) + "i";
			}
			else if (sender == buttonDEL)
			{
				this->calcanswer->Text = (i / j).real().ToString(System::Globalization::CultureInfo::GetCultureInfo("en-US")) + " + " + (i / j).imag().ToString(System::Globalization::CultureInfo::GetCultureInfo("en-US")) + "i";
			};
		}
		else
		{
			if (Check(this->calc11->Text) == 1 || Check(this->calc12->Text) == 1 || Check(this->calc21->Text) == 1 || Check(this->calc22->Text) == 1)
				this->calcanswer->Text = "Поле ввода не должно быть пустым!";
			else if (Check(this->calc11->Text) == 2 || Check(this->calc12->Text) == 2 || Check(this->calc21->Text) == 2 || Check(this->calc22->Text) == 2)
				this->calcanswer->Text = "Запятая не может быть первым символом!";
			else if (Check(this->calc11->Text) == 3 || Check(this->calc12->Text) == 3 || Check(this->calc21->Text) == 3 || Check(this->calc22->Text) == 3)
				this->calcanswer->Text = "Нельзя вводить посторонние символы!";
		}

	}

	private: System::Void second_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Enabled = false;
		this->label1->Visible = false;
		this->inputreal->Enabled = false;
		this->inputreal->Visible = false;
		this->inputimag->Enabled = false;
		this->inputimag->Visible = false;
		this->textBox1->Enabled = false;
		this->textBox1->Visible = false;
		this->label2->Enabled = false;
		this->label2->Visible = false;
		this->label3->Enabled = false;
		this->label3->Visible = false;
		this->label4->Enabled = false;
		this->label4->Visible = false;
		this->ALGtoEXP->Enabled = false;
		this->ALGtoEXP->Visible = false;
		this->ALGtoTRIG->Enabled = false;
		this->ALGtoTRIG->Visible = false;
		this->calc11->Visible = true;
		this->calc11->Enabled = true;
		this->calc12->Visible = true;
		this->calc12->Enabled = true;
		this->calc21->Enabled = true;
		this->calc21->Visible = true;
		this->calc22->Enabled = true;
		this->calc22->Visible = true;
		this->calcanswer->Enabled = true;
		this->calcanswer->Visible = true;
		this->buttonSUM->Enabled = true;
		this->buttonSUM->Visible = true;
		this->buttonMINUS->Enabled = true;
		this->buttonMINUS->Visible = true;
		this->buttonUMNOZH->Enabled = true;
		this->buttonUMNOZH->Visible = true;
		this->buttonDEL->Enabled = true;
		this->buttonDEL->Visible = true;
		this->label5->Enabled = true;
		this->label5->Visible = true;
		this->label6->Enabled = true;
		this->label6->Visible = true;
		this->label7->Enabled = true;
		this->label7->Visible = true;
		this->label8->Enabled = true;
		this->label8->Visible = true;
		this->label9->Enabled = true;
		this->label9->Visible = true;
		this->label10->Enabled = true;
		this->label10->Visible = true;
		this->label11->Enabled = true;
		this->label11->Visible = true;
	}
	private: System::Void first_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label1->Enabled = true;
		this->label1->Visible = true;
		this->inputreal->Enabled = true;
		this->inputreal->Visible = true;
		this->inputimag->Enabled = true;
		this->inputimag->Visible = true;
		this->textBox1->Enabled = true;
		this->textBox1->Visible = true;
		this->label2->Enabled = true;
		this->label2->Visible = true;
		this->label3->Enabled = true;
		this->label3->Visible = true;
		this->label4->Enabled = true;
		this->label4->Visible = true;
		this->ALGtoEXP->Enabled = true;
		this->ALGtoEXP->Visible = true;
		this->ALGtoTRIG->Enabled = true;
		this->ALGtoTRIG->Visible = true;
		this->calc11->Visible = false;
		this->calc11->Enabled = false;
		this->calc12->Visible = false;
		this->calc12->Enabled = false;
		this->calc21->Enabled = false;
		this->calc21->Visible = false;
		this->calc22->Enabled = false;
		this->calc22->Visible = false;
		this->calcanswer->Enabled = false;
		this->calcanswer->Visible = false;
		this->buttonSUM->Enabled = false;
		this->buttonSUM->Visible = false;
		this->buttonMINUS->Enabled = false;
		this->buttonMINUS->Visible = false;
		this->buttonUMNOZH->Enabled = false;
		this->buttonUMNOZH->Visible = false;
		this->buttonDEL->Enabled = false;
		this->buttonDEL->Visible = false;
		this->label5->Enabled = false;
		this->label5->Visible = false;
		this->label6->Enabled = false;
		this->label6->Visible = false;
		this->label7->Enabled = false;
		this->label7->Visible = false;
		this->label8->Enabled = false;
		this->label8->Visible = false;
		this->label9->Enabled = false;
		this->label9->Visible = false;
		this->label10->Enabled = false;
		this->label10->Visible = false;
		this->label11->Enabled = false;
		this->label11->Visible = false;
	}

	private: System::Void MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		if (sender == first) this->first->BackgroundImage = gcnew Bitmap("vkladka1-2.png");
		if (sender == button1) this->button1->BackgroundImage = gcnew Bitmap("vkladka2-2.png");
		if (sender == ALGtoEXP) this->ALGtoEXP->BackgroundImage = gcnew Bitmap("perev-2.png");
		if (sender == ALGtoTRIG) this->ALGtoTRIG->BackgroundImage = gcnew Bitmap("perev-2.png");
		if (sender == buttonSUM) this->buttonSUM->BackgroundImage = gcnew Bitmap("calc-2.png");
		if (sender == buttonMINUS) this->buttonMINUS->BackgroundImage = gcnew Bitmap("calc-2.png");
		if (sender == buttonUMNOZH) this->buttonUMNOZH->BackgroundImage = gcnew Bitmap("calc-2.png");
		if (sender == buttonDEL) this->buttonDEL->BackgroundImage = gcnew Bitmap("calc-2.png");
	}
	private: System::Void MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (sender == first) this->first->BackgroundImage = gcnew Bitmap("vkladka1-1.png");
		if (sender == button1) this->button1->BackgroundImage = gcnew Bitmap("vkladka2-1.png");
		if (sender == ALGtoEXP) this->ALGtoEXP->BackgroundImage = gcnew Bitmap("perev-1.png");
		if (sender == ALGtoTRIG) this->ALGtoTRIG->BackgroundImage = gcnew Bitmap("perev-1.png");
		if (sender == buttonSUM) this->buttonSUM->BackgroundImage = gcnew Bitmap("calc-1.png");
		if (sender == buttonMINUS) this->buttonMINUS->BackgroundImage = gcnew Bitmap("calc-1.png");
		if (sender == buttonUMNOZH) this->buttonUMNOZH->BackgroundImage = gcnew Bitmap("calc-1.png");
		if (sender == buttonDEL) this->buttonDEL->BackgroundImage = gcnew Bitmap("calc-1.png");
	}
	private: System::Void MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (sender == first) this->first->BackgroundImage = gcnew Bitmap("vkladka1-2.png");
		if (sender == button1) this->button1->BackgroundImage = gcnew Bitmap("vkladka2-2.png");
		if (sender == ALGtoEXP) this->ALGtoEXP->BackgroundImage = gcnew Bitmap("perev-2.png");
		if (sender == ALGtoTRIG) this->ALGtoTRIG->BackgroundImage = gcnew Bitmap("perev-2.png");
		if (sender == buttonSUM) this->buttonSUM->BackgroundImage = gcnew Bitmap("calc-2.png");
		if (sender == buttonMINUS) this->buttonMINUS->BackgroundImage = gcnew Bitmap("calc-2.png");
		if (sender == buttonUMNOZH) this->buttonUMNOZH->BackgroundImage = gcnew Bitmap("calc-2.png");
		if (sender == buttonDEL) this->buttonDEL->BackgroundImage = gcnew Bitmap("calc-2.png");
	}
	private: System::Void MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		if (sender == first) this->first->BackgroundImage = gcnew Bitmap("vkladka1-1.png");
		if (sender == button1) this->button1->BackgroundImage = gcnew Bitmap("vkladka2-1.png");
		if (sender == ALGtoEXP) this->ALGtoEXP->BackgroundImage = gcnew Bitmap("perev-1.png");
		if (sender == ALGtoTRIG) this->ALGtoTRIG->BackgroundImage = gcnew Bitmap("perev-1.png");
		if (sender == buttonSUM) this->buttonSUM->BackgroundImage = gcnew Bitmap("calc-1.png");
		if (sender == buttonMINUS) this->buttonMINUS->BackgroundImage = gcnew Bitmap("calc-1.png");
		if (sender == buttonUMNOZH) this->buttonUMNOZH->BackgroundImage = gcnew Bitmap("calc-1.png");
		if (sender == buttonDEL) this->buttonDEL->BackgroundImage = gcnew Bitmap("calc-1.png");
	}
	};
}
