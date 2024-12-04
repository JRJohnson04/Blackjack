#pragma once

#include "Game.h"

namespace BlackJackV11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	/// 
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	public:

	private: System::Windows::Forms::CheckBox^ Player2Checkbox;
	private: System::Windows::Forms::CheckBox^ Player3Checkbox;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::CheckBox^ Staying1;
	private: System::Windows::Forms::CheckBox^ Staying2;
	private: System::Windows::Forms::CheckBox^ Staying3;




	public:
		Game* game = new Game();
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ hitbutton;
	protected:
	private: System::Windows::Forms::Label^ PlayerLabel2;
	private: System::Windows::Forms::Label^ PlayerLabel3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ PlayerLabel5;
	private: System::Windows::Forms::Button^ PCard1;
	private: System::Windows::Forms::Label^ DealerLabel4;
	private: System::Windows::Forms::Button^ DCard1;
	private: System::Windows::Forms::Label^ DealerLabel5;
	private: System::Windows::Forms::Button^ DCard2;
	private: System::Windows::Forms::Label^ PlayerLabel4;
	private: System::Windows::Forms::Label^ PTVLabel;
	private: System::Windows::Forms::Button^ PCard4;
	private: System::Windows::Forms::Label^ DealerLabel3;
	private: System::Windows::Forms::Button^ PCard5;
	private: System::Windows::Forms::Button^ DCard3;
	private: System::Windows::Forms::Label^ DealerLabel1;
	private: System::Windows::Forms::Label^ DealerLabel2;
	private: System::Windows::Forms::Button^ StartButton;
	private: System::Windows::Forms::Button^ DCard4;
	private: System::Windows::Forms::Button^ DCard5;
	private: System::Windows::Forms::Button^ PCard3;
	private: System::Windows::Forms::Button^ staybutton;
	private: System::Windows::Forms::Label^ DTVLabel;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ PlayerLabel1;
	private: System::Windows::Forms::Button^ PCard2;
		   //declare deck playerhand and dealerhand here
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->hitbutton = (gcnew System::Windows::Forms::Button());
			this->PlayerLabel2 = (gcnew System::Windows::Forms::Label());
			this->PlayerLabel3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->PlayerLabel5 = (gcnew System::Windows::Forms::Label());
			this->PCard1 = (gcnew System::Windows::Forms::Button());
			this->DealerLabel4 = (gcnew System::Windows::Forms::Label());
			this->DCard1 = (gcnew System::Windows::Forms::Button());
			this->DealerLabel5 = (gcnew System::Windows::Forms::Label());
			this->DCard2 = (gcnew System::Windows::Forms::Button());
			this->PlayerLabel4 = (gcnew System::Windows::Forms::Label());
			this->PTVLabel = (gcnew System::Windows::Forms::Label());
			this->PCard4 = (gcnew System::Windows::Forms::Button());
			this->DealerLabel3 = (gcnew System::Windows::Forms::Label());
			this->PCard5 = (gcnew System::Windows::Forms::Button());
			this->DCard3 = (gcnew System::Windows::Forms::Button());
			this->DealerLabel1 = (gcnew System::Windows::Forms::Label());
			this->DealerLabel2 = (gcnew System::Windows::Forms::Label());
			this->StartButton = (gcnew System::Windows::Forms::Button());
			this->DCard4 = (gcnew System::Windows::Forms::Button());
			this->DCard5 = (gcnew System::Windows::Forms::Button());
			this->PCard3 = (gcnew System::Windows::Forms::Button());
			this->staybutton = (gcnew System::Windows::Forms::Button());
			this->DTVLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->PlayerLabel1 = (gcnew System::Windows::Forms::Label());
			this->PCard2 = (gcnew System::Windows::Forms::Button());
			this->Player2Checkbox = (gcnew System::Windows::Forms::CheckBox());
			this->Player3Checkbox = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->Staying1 = (gcnew System::Windows::Forms::CheckBox());
			this->Staying2 = (gcnew System::Windows::Forms::CheckBox());
			this->Staying3 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// hitbutton
			// 
			this->hitbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->hitbutton->Location = System::Drawing::Point(1202, 261);
			this->hitbutton->Margin = System::Windows::Forms::Padding(4);
			this->hitbutton->Name = L"hitbutton";
			this->hitbutton->Size = System::Drawing::Size(262, 169);
			this->hitbutton->TabIndex = 55;
			this->hitbutton->Text = L"Hit Button Placeholder";
			this->hitbutton->UseVisualStyleBackColor = true;
			this->hitbutton->Click += gcnew System::EventHandler(this, &MyForm::hitbutton_Click);
			// 
			// PlayerLabel2
			// 
			this->PlayerLabel2->AutoSize = true;
			this->PlayerLabel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PlayerLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlayerLabel2->Location = System::Drawing::Point(462, 593);
			this->PlayerLabel2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->PlayerLabel2->Name = L"PlayerLabel2";
			this->PlayerLabel2->Size = System::Drawing::Size(21, 31);
			this->PlayerLabel2->TabIndex = 72;
			this->PlayerLabel2->Text = L" ";
			this->PlayerLabel2->Click += gcnew System::EventHandler(this, &MyForm::PlayerLabel2_Click);
			// 
			// PlayerLabel3
			// 
			this->PlayerLabel3->AutoSize = true;
			this->PlayerLabel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PlayerLabel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlayerLabel3->Location = System::Drawing::Point(670, 593);
			this->PlayerLabel3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->PlayerLabel3->Name = L"PlayerLabel3";
			this->PlayerLabel3->Size = System::Drawing::Size(21, 31);
			this->PlayerLabel3->TabIndex = 73;
			this->PlayerLabel3->Text = L" ";
			this->PlayerLabel3->Click += gcnew System::EventHandler(this, &MyForm::PlayerLabel3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(7, 438);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 29);
			this->label1->TabIndex = 82;
			this->label1->Text = L"Player 1:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// PlayerLabel5
			// 
			this->PlayerLabel5->AutoSize = true;
			this->PlayerLabel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PlayerLabel5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlayerLabel5->Location = System::Drawing::Point(1078, 593);
			this->PlayerLabel5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->PlayerLabel5->Name = L"PlayerLabel5";
			this->PlayerLabel5->Size = System::Drawing::Size(21, 31);
			this->PlayerLabel5->TabIndex = 75;
			this->PlayerLabel5->Text = L" ";
			this->PlayerLabel5->Click += gcnew System::EventHandler(this, &MyForm::PlayerLabel5_Click);
			// 
			// PCard1
			// 
			this->PCard1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PCard1.BackgroundImage")));
			this->PCard1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->PCard1->Location = System::Drawing::Point(169, 323);
			this->PCard1->Margin = System::Windows::Forms::Padding(4);
			this->PCard1->Name = L"PCard1";
			this->PCard1->Size = System::Drawing::Size(199, 266);
			this->PCard1->TabIndex = 62;
			this->PCard1->UseVisualStyleBackColor = true;
			this->PCard1->Click += gcnew System::EventHandler(this, &MyForm::PCard1_Click);
			// 
			// DealerLabel4
			// 
			this->DealerLabel4->AutoSize = true;
			this->DealerLabel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->DealerLabel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DealerLabel4->Location = System::Drawing::Point(869, 284);
			this->DealerLabel4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->DealerLabel4->Name = L"DealerLabel4";
			this->DealerLabel4->Size = System::Drawing::Size(21, 31);
			this->DealerLabel4->TabIndex = 69;
			this->DealerLabel4->Text = L" ";
			this->DealerLabel4->Click += gcnew System::EventHandler(this, &MyForm::DealerLabel4_Click);
			// 
			// DCard1
			// 
			this->DCard1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DCard1.BackgroundImage")));
			this->DCard1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->DCard1->Location = System::Drawing::Point(168, 16);
			this->DCard1->Margin = System::Windows::Forms::Padding(4);
			this->DCard1->Name = L"DCard1";
			this->DCard1->Size = System::Drawing::Size(199, 266);
			this->DCard1->TabIndex = 57;
			this->DCard1->UseVisualStyleBackColor = true;
			this->DCard1->Click += gcnew System::EventHandler(this, &MyForm::DCard1_Click);
			// 
			// DealerLabel5
			// 
			this->DealerLabel5->AutoSize = true;
			this->DealerLabel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->DealerLabel5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DealerLabel5->Location = System::Drawing::Point(1076, 288);
			this->DealerLabel5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->DealerLabel5->Name = L"DealerLabel5";
			this->DealerLabel5->Size = System::Drawing::Size(21, 31);
			this->DealerLabel5->TabIndex = 70;
			this->DealerLabel5->Text = L" ";
			this->DealerLabel5->Click += gcnew System::EventHandler(this, &MyForm::DealerLabel5_Click);
			// 
			// DCard2
			// 
			this->DCard2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DCard2.BackgroundImage")));
			this->DCard2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->DCard2->Location = System::Drawing::Point(373, 14);
			this->DCard2->Margin = System::Windows::Forms::Padding(4);
			this->DCard2->Name = L"DCard2";
			this->DCard2->Size = System::Drawing::Size(199, 266);
			this->DCard2->TabIndex = 58;
			this->DCard2->UseVisualStyleBackColor = true;
			this->DCard2->Click += gcnew System::EventHandler(this, &MyForm::DCard2_Click);
			// 
			// PlayerLabel4
			// 
			this->PlayerLabel4->AutoSize = true;
			this->PlayerLabel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PlayerLabel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlayerLabel4->Location = System::Drawing::Point(871, 593);
			this->PlayerLabel4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->PlayerLabel4->Name = L"PlayerLabel4";
			this->PlayerLabel4->Size = System::Drawing::Size(21, 31);
			this->PlayerLabel4->TabIndex = 74;
			this->PlayerLabel4->Text = L" ";
			this->PlayerLabel4->Click += gcnew System::EventHandler(this, &MyForm::PlayerLabel4_Click);
			// 
			// PTVLabel
			// 
			this->PTVLabel->AutoSize = true;
			this->PTVLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PTVLabel->Location = System::Drawing::Point(7, 595);
			this->PTVLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->PTVLabel->Name = L"PTVLabel";
			this->PTVLabel->Size = System::Drawing::Size(147, 29);
			this->PTVLabel->TabIndex = 76;
			this->PTVLabel->Text = L"Total Value: ";
			this->PTVLabel->Click += gcnew System::EventHandler(this, &MyForm::PTVLabel_Click);
			// 
			// PCard4
			// 
			this->PCard4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PCard4.BackgroundImage")));
			this->PCard4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->PCard4->Location = System::Drawing::Point(790, 323);
			this->PCard4->Margin = System::Windows::Forms::Padding(4);
			this->PCard4->Name = L"PCard4";
			this->PCard4->Size = System::Drawing::Size(199, 266);
			this->PCard4->TabIndex = 65;
			this->PCard4->UseVisualStyleBackColor = true;
			this->PCard4->Click += gcnew System::EventHandler(this, &MyForm::PCard4_Click);
			// 
			// DealerLabel3
			// 
			this->DealerLabel3->AutoSize = true;
			this->DealerLabel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->DealerLabel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DealerLabel3->Location = System::Drawing::Point(668, 288);
			this->DealerLabel3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->DealerLabel3->Name = L"DealerLabel3";
			this->DealerLabel3->Size = System::Drawing::Size(21, 31);
			this->DealerLabel3->TabIndex = 68;
			this->DealerLabel3->Text = L" ";
			this->DealerLabel3->Click += gcnew System::EventHandler(this, &MyForm::DealerLabel3_Click);
			// 
			// PCard5
			// 
			this->PCard5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PCard5.BackgroundImage")));
			this->PCard5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->PCard5->Location = System::Drawing::Point(995, 323);
			this->PCard5->Margin = System::Windows::Forms::Padding(4);
			this->PCard5->Name = L"PCard5";
			this->PCard5->Size = System::Drawing::Size(199, 266);
			this->PCard5->TabIndex = 66;
			this->PCard5->UseVisualStyleBackColor = true;
			this->PCard5->Click += gcnew System::EventHandler(this, &MyForm::PCard5_Click);
			// 
			// DCard3
			// 
			this->DCard3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DCard3.BackgroundImage")));
			this->DCard3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->DCard3->Location = System::Drawing::Point(580, 14);
			this->DCard3->Margin = System::Windows::Forms::Padding(4);
			this->DCard3->Name = L"DCard3";
			this->DCard3->Size = System::Drawing::Size(199, 266);
			this->DCard3->TabIndex = 59;
			this->DCard3->UseVisualStyleBackColor = true;
			this->DCard3->Click += gcnew System::EventHandler(this, &MyForm::DCard3_Click);
			// 
			// DealerLabel1
			// 
			this->DealerLabel1->AutoSize = true;
			this->DealerLabel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->DealerLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DealerLabel1->Location = System::Drawing::Point(251, 286);
			this->DealerLabel1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->DealerLabel1->Name = L"DealerLabel1";
			this->DealerLabel1->Size = System::Drawing::Size(21, 31);
			this->DealerLabel1->TabIndex = 51;
			this->DealerLabel1->Text = L" ";
			this->DealerLabel1->Click += gcnew System::EventHandler(this, &MyForm::DealerLabel1_Click);
			// 
			// DealerLabel2
			// 
			this->DealerLabel2->AutoSize = true;
			this->DealerLabel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->DealerLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DealerLabel2->Location = System::Drawing::Point(460, 288);
			this->DealerLabel2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->DealerLabel2->Name = L"DealerLabel2";
			this->DealerLabel2->Size = System::Drawing::Size(21, 31);
			this->DealerLabel2->TabIndex = 67;
			this->DealerLabel2->Text = L" ";
			this->DealerLabel2->Click += gcnew System::EventHandler(this, &MyForm::DealerLabel2_Click);
			// 
			// StartButton
			// 
			this->StartButton->Location = System::Drawing::Point(1202, 6);
			this->StartButton->Margin = System::Windows::Forms::Padding(4);
			this->StartButton->Name = L"StartButton";
			this->StartButton->Size = System::Drawing::Size(262, 247);
			this->StartButton->TabIndex = 52;
			this->StartButton->Text = L"Start Button placeholder";
			this->StartButton->UseVisualStyleBackColor = true;
			this->StartButton->Click += gcnew System::EventHandler(this, &MyForm::StartButton_Click);
			// 
			// DCard4
			// 
			this->DCard4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DCard4.BackgroundImage")));
			this->DCard4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->DCard4->Location = System::Drawing::Point(787, 14);
			this->DCard4->Margin = System::Windows::Forms::Padding(4);
			this->DCard4->Name = L"DCard4";
			this->DCard4->Size = System::Drawing::Size(199, 266);
			this->DCard4->TabIndex = 60;
			this->DCard4->UseVisualStyleBackColor = true;
			this->DCard4->Click += gcnew System::EventHandler(this, &MyForm::DCard4_Click);
			// 
			// DCard5
			// 
			this->DCard5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DCard5.BackgroundImage")));
			this->DCard5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->DCard5->Location = System::Drawing::Point(993, 14);
			this->DCard5->Margin = System::Windows::Forms::Padding(4);
			this->DCard5->Name = L"DCard5";
			this->DCard5->Size = System::Drawing::Size(199, 266);
			this->DCard5->TabIndex = 61;
			this->DCard5->UseVisualStyleBackColor = true;
			this->DCard5->Click += gcnew System::EventHandler(this, &MyForm::DCard5_Click);
			// 
			// PCard3
			// 
			this->PCard3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PCard3.BackgroundImage")));
			this->PCard3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->PCard3->Location = System::Drawing::Point(583, 323);
			this->PCard3->Margin = System::Windows::Forms::Padding(4);
			this->PCard3->Name = L"PCard3";
			this->PCard3->Size = System::Drawing::Size(199, 266);
			this->PCard3->TabIndex = 64;
			this->PCard3->UseVisualStyleBackColor = true;
			this->PCard3->Click += gcnew System::EventHandler(this, &MyForm::PCard3_Click);
			// 
			// staybutton
			// 
			this->staybutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->staybutton->Location = System::Drawing::Point(1202, 438);
			this->staybutton->Margin = System::Windows::Forms::Padding(4);
			this->staybutton->Name = L"staybutton";
			this->staybutton->Size = System::Drawing::Size(262, 169);
			this->staybutton->TabIndex = 56;
			this->staybutton->Text = L"Stay Button Placeholder";
			this->staybutton->UseVisualStyleBackColor = true;
			this->staybutton->Click += gcnew System::EventHandler(this, &MyForm::staybutton_Click);
			// 
			// DTVLabel
			// 
			this->DTVLabel->AutoSize = true;
			this->DTVLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DTVLabel->Location = System::Drawing::Point(-5, 284);
			this->DTVLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->DTVLabel->Name = L"DTVLabel";
			this->DTVLabel->Size = System::Drawing::Size(159, 29);
			this->DTVLabel->TabIndex = 77;
			this->DTVLabel->Text = L"Total Value: \?";
			this->DTVLabel->Click += gcnew System::EventHandler(this, &MyForm::DTVLabel_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label2->Location = System::Drawing::Point(7, 26);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(160, 29);
			this->label2->TabIndex = 83;
			this->label2->Text = L"Dealers Hand";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// PlayerLabel1
			// 
			this->PlayerLabel1->AutoSize = true;
			this->PlayerLabel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PlayerLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlayerLabel1->Location = System::Drawing::Point(251, 593);
			this->PlayerLabel1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->PlayerLabel1->Name = L"PlayerLabel1";
			this->PlayerLabel1->Size = System::Drawing::Size(21, 31);
			this->PlayerLabel1->TabIndex = 71;
			this->PlayerLabel1->Text = L" ";
			this->PlayerLabel1->Click += gcnew System::EventHandler(this, &MyForm::PlayerLabel1_Click);
			// 
			// PCard2
			// 
			this->PCard2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PCard2.BackgroundImage")));
			this->PCard2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->PCard2->Location = System::Drawing::Point(375, 323);
			this->PCard2->Margin = System::Windows::Forms::Padding(4);
			this->PCard2->Name = L"PCard2";
			this->PCard2->Size = System::Drawing::Size(199, 266);
			this->PCard2->TabIndex = 63;
			this->PCard2->UseVisualStyleBackColor = true;
			this->PCard2->Click += gcnew System::EventHandler(this, &MyForm::PCard2_Click);
			// 
			// Player2Checkbox
			// 
			this->Player2Checkbox->AutoSize = true;
			this->Player2Checkbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22));
			this->Player2Checkbox->Location = System::Drawing::Point(1199, 619);
			this->Player2Checkbox->Name = L"Player2Checkbox";
			this->Player2Checkbox->Size = System::Drawing::Size(187, 46);
			this->Player2Checkbox->TabIndex = 86;
			this->Player2Checkbox->Text = L"Player 2 ";
			this->Player2Checkbox->UseVisualStyleBackColor = true;
			this->Player2Checkbox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Player2Checkbox_CheckedChanged);
			// 
			// Player3Checkbox
			// 
			this->Player3Checkbox->AutoSize = true;
			this->Player3Checkbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22));
			this->Player3Checkbox->Location = System::Drawing::Point(1199, 671);
			this->Player3Checkbox->Name = L"Player3Checkbox";
			this->Player3Checkbox->Size = System::Drawing::Size(177, 46);
			this->Player3Checkbox->TabIndex = 88;
			this->Player3Checkbox->Text = L"Player 3";
			this->Player3Checkbox->UseVisualStyleBackColor = true;
			this->Player3Checkbox->Visible = false;
			this->Player3Checkbox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Player3Checkbox_CheckedChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(7, 750);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 29);
			this->label3->TabIndex = 100;
			this->label3->Text = L"Player 2:";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(7, 907);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(147, 29);
			this->label4->TabIndex = 99;
			this->label4->Text = L"Total Value: ";
			this->label4->Visible = false;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(1078, 905);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 31);
			this->label5->TabIndex = 98;
			this->label5->Text = L" ";
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(871, 905);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(21, 31);
			this->label6->TabIndex = 97;
			this->label6->Text = L" ";
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(670, 905);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(21, 31);
			this->label7->TabIndex = 96;
			this->label7->Text = L" ";
			this->label7->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(462, 905);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(21, 31);
			this->label8->TabIndex = 95;
			this->label8->Text = L" ";
			this->label8->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(251, 905);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(21, 31);
			this->label9->TabIndex = 94;
			this->label9->Text = L" ";
			this->label9->Visible = false;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Location = System::Drawing::Point(995, 635);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(199, 266);
			this->button1->TabIndex = 93;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Location = System::Drawing::Point(790, 635);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(199, 266);
			this->button2->TabIndex = 92;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Location = System::Drawing::Point(583, 635);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(199, 266);
			this->button3->TabIndex = 91;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Location = System::Drawing::Point(375, 635);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(199, 266);
			this->button4->TabIndex = 90;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->Location = System::Drawing::Point(169, 635);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(199, 266);
			this->button5->TabIndex = 89;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(7, 1067);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(106, 29);
			this->label10->TabIndex = 112;
			this->label10->Text = L"Player 3:";
			this->label10->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(9, 1224);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(147, 29);
			this->label11->TabIndex = 111;
			this->label11->Text = L"Total Value: ";
			this->label11->Visible = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(1078, 1222);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(21, 31);
			this->label12->TabIndex = 110;
			this->label12->Text = L" ";
			this->label12->Visible = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(871, 1222);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(21, 31);
			this->label13->TabIndex = 109;
			this->label13->Text = L" ";
			this->label13->Visible = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(670, 1222);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(21, 31);
			this->label14->TabIndex = 108;
			this->label14->Text = L" ";
			this->label14->Visible = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(462, 1222);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(21, 31);
			this->label15->TabIndex = 107;
			this->label15->Text = L" ";
			this->label15->Visible = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(251, 1222);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(21, 31);
			this->label16->TabIndex = 106;
			this->label16->Text = L" ";
			this->label16->Visible = false;
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->Location = System::Drawing::Point(993, 952);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(199, 266);
			this->button6->TabIndex = 105;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Visible = false;
			// 
			// button7
			// 
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button7->Location = System::Drawing::Point(788, 952);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(199, 266);
			this->button7->TabIndex = 104;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Visible = false;
			// 
			// button8
			// 
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button8->Location = System::Drawing::Point(581, 952);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(199, 266);
			this->button8->TabIndex = 103;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Visible = false;
			// 
			// button9
			// 
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button9->Location = System::Drawing::Point(373, 952);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(199, 266);
			this->button9->TabIndex = 102;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Visible = false;
			// 
			// button10
			// 
			this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.BackgroundImage")));
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button10->Location = System::Drawing::Point(167, 952);
			this->button10->Margin = System::Windows::Forms::Padding(4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(199, 266);
			this->button10->TabIndex = 101;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Visible = false;
			// 
			// Staying1
			// 
			this->Staying1->AutoSize = true;
			this->Staying1->Location = System::Drawing::Point(12, 470);
			this->Staying1->Name = L"Staying1";
			this->Staying1->Size = System::Drawing::Size(108, 20);
			this->Staying1->TabIndex = 113;
			this->Staying1->Text = L"Player 1 Stay";
			this->Staying1->UseVisualStyleBackColor = true;
			this->Staying1->Visible = false;
			// 
			// Staying2
			// 
			this->Staying2->AutoSize = true;
			this->Staying2->Location = System::Drawing::Point(12, 782);
			this->Staying2->Name = L"Staying2";
			this->Staying2->Size = System::Drawing::Size(108, 20);
			this->Staying2->TabIndex = 114;
			this->Staying2->Text = L"Player 2 Stay";
			this->Staying2->UseVisualStyleBackColor = true;
			this->Staying2->Visible = false;
			// 
			// Staying3
			// 
			this->Staying3->AutoSize = true;
			this->Staying3->Location = System::Drawing::Point(12, 1099);
			this->Staying3->Name = L"Staying3";
			this->Staying3->Size = System::Drawing::Size(108, 20);
			this->Staying3->TabIndex = 115;
			this->Staying3->Text = L"Player 3 Stay";
			this->Staying3->UseVisualStyleBackColor = true;
			this->Staying3->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(1474, 1259);
			this->Controls->Add(this->Staying3);
			this->Controls->Add(this->Staying2);
			this->Controls->Add(this->Staying1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->Player3Checkbox);
			this->Controls->Add(this->Player2Checkbox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->DTVLabel);
			this->Controls->Add(this->PTVLabel);
			this->Controls->Add(this->PlayerLabel5);
			this->Controls->Add(this->PlayerLabel4);
			this->Controls->Add(this->PlayerLabel3);
			this->Controls->Add(this->PlayerLabel2);
			this->Controls->Add(this->PlayerLabel1);
			this->Controls->Add(this->DealerLabel5);
			this->Controls->Add(this->DealerLabel4);
			this->Controls->Add(this->DealerLabel3);
			this->Controls->Add(this->DealerLabel2);
			this->Controls->Add(this->PCard5);
			this->Controls->Add(this->PCard4);
			this->Controls->Add(this->PCard3);
			this->Controls->Add(this->PCard2);
			this->Controls->Add(this->PCard1);
			this->Controls->Add(this->DCard5);
			this->Controls->Add(this->DCard4);
			this->Controls->Add(this->DCard3);
			this->Controls->Add(this->DCard2);
			this->Controls->Add(this->DCard1);
			this->Controls->Add(this->staybutton);
			this->Controls->Add(this->hitbutton);
			this->Controls->Add(this->StartButton);
			this->Controls->Add(this->DealerLabel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void PCard2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void PlayerLabel1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void DTVLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void BetAmount_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void staybutton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void PCard3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void BetAmountLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void DCard5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void DCard4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void StartButton_Click(System::Object^ sender, System::EventArgs^ e);
	   void DisplayPlayerGraphics(Hand playerHand);
	   void DisplayDealerGraphics(Hand dealerHand);
	   void CheckForWinner(Hand dealerHand, Hand playerHand, Hand player2Hand, Hand player3Hand);
	   void player2Graphics(Hand player2Hand);
	   void player3Graphics(Hand player3Hand);
private: System::Void DealerLabel2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Funds_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void DealerLabel1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void DCard3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void PCard5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void DealerLabel3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void PCard4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void PTVLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void PlayerLabel4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void DCard2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void DealerLabel5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void DCard1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void DealerLabel4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void PCard1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void PlayerLabel5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void PlayerLabel3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void PlayerLabel2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void hitbutton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Player2Checkbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

private: System::Void Player3Checkbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};

}
