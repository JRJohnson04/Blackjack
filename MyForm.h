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
	private: System::Windows::Forms::Label^ Funds;
	private: System::Windows::Forms::Label^ DealerLabel2;
	private: System::Windows::Forms::Button^ StartButton;
	private: System::Windows::Forms::Button^ DCard4;
	private: System::Windows::Forms::Button^ DCard5;
	private: System::Windows::Forms::Label^ BetAmountLabel;
	private: System::Windows::Forms::Button^ PCard3;
	private: System::Windows::Forms::Button^ staybutton;
	private: System::Windows::Forms::NumericUpDown^ BetAmount;
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
			this->Funds = (gcnew System::Windows::Forms::Label());
			this->DealerLabel2 = (gcnew System::Windows::Forms::Label());
			this->StartButton = (gcnew System::Windows::Forms::Button());
			this->DCard4 = (gcnew System::Windows::Forms::Button());
			this->DCard5 = (gcnew System::Windows::Forms::Button());
			this->BetAmountLabel = (gcnew System::Windows::Forms::Label());
			this->PCard3 = (gcnew System::Windows::Forms::Button());
			this->staybutton = (gcnew System::Windows::Forms::Button());
			this->BetAmount = (gcnew System::Windows::Forms::NumericUpDown());
			this->DTVLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->PlayerLabel1 = (gcnew System::Windows::Forms::Label());
			this->PCard2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BetAmount))->BeginInit();
			this->SuspendLayout();
			// 
			// hitbutton
			// 
			this->hitbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->hitbutton->Location = System::Drawing::Point(1151, 322);
			this->hitbutton->Margin = System::Windows::Forms::Padding(4);
			this->hitbutton->Name = L"hitbutton";
			this->hitbutton->Size = System::Drawing::Size(280, 181);
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
			this->PlayerLabel2->Location = System::Drawing::Point(388, 738);
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
			this->PlayerLabel3->Location = System::Drawing::Point(596, 738);
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
			this->label1->Location = System::Drawing::Point(552, 785);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 29);
			this->label1->TabIndex = 82;
			this->label1->Text = L"Players Hand";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// PlayerLabel5
			// 
			this->PlayerLabel5->AutoSize = true;
			this->PlayerLabel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PlayerLabel5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlayerLabel5->Location = System::Drawing::Point(1004, 738);
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
			this->PCard1->Location = System::Drawing::Point(95, 468);
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
			this->DealerLabel4->Location = System::Drawing::Point(797, 343);
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
			this->DCard1->Location = System::Drawing::Point(96, 75);
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
			this->DealerLabel5->Location = System::Drawing::Point(1004, 347);
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
			this->DCard2->Location = System::Drawing::Point(301, 73);
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
			this->PlayerLabel4->Location = System::Drawing::Point(797, 738);
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
			this->PTVLabel->Location = System::Drawing::Point(112, 781);
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
			this->PCard4->Location = System::Drawing::Point(716, 468);
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
			this->DealerLabel3->Location = System::Drawing::Point(596, 347);
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
			this->PCard5->Location = System::Drawing::Point(921, 468);
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
			this->DCard3->Location = System::Drawing::Point(508, 73);
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
			this->DealerLabel1->Location = System::Drawing::Point(189, 347);
			this->DealerLabel1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->DealerLabel1->Name = L"DealerLabel1";
			this->DealerLabel1->Size = System::Drawing::Size(21, 31);
			this->DealerLabel1->TabIndex = 51;
			this->DealerLabel1->Text = L" ";
			this->DealerLabel1->Click += gcnew System::EventHandler(this, &MyForm::DealerLabel1_Click);
			// 
			// Funds
			// 
			this->Funds->AutoSize = true;
			this->Funds->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Funds->Location = System::Drawing::Point(763, 392);
			this->Funds->Name = L"Funds";
			this->Funds->Size = System::Drawing::Size(120, 31);
			this->Funds->TabIndex = 80;
			this->Funds->Text = L"Funds: $";
			this->Funds->Click += gcnew System::EventHandler(this, &MyForm::Funds_Click);
			// 
			// DealerLabel2
			// 
			this->DealerLabel2->AutoSize = true;
			this->DealerLabel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->DealerLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DealerLabel2->Location = System::Drawing::Point(388, 347);
			this->DealerLabel2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->DealerLabel2->Name = L"DealerLabel2";
			this->DealerLabel2->Size = System::Drawing::Size(21, 31);
			this->DealerLabel2->TabIndex = 67;
			this->DealerLabel2->Text = L" ";
			this->DealerLabel2->Click += gcnew System::EventHandler(this, &MyForm::DealerLabel2_Click);
			// 
			// StartButton
			// 
			this->StartButton->Location = System::Drawing::Point(1151, 7);
			this->StartButton->Margin = System::Windows::Forms::Padding(4);
			this->StartButton->Name = L"StartButton";
			this->StartButton->Size = System::Drawing::Size(293, 247);
			this->StartButton->TabIndex = 52;
			this->StartButton->Text = L"Start Button placeholder";
			this->StartButton->UseVisualStyleBackColor = true;
			this->StartButton->Click += gcnew System::EventHandler(this, &MyForm::StartButton_Click);
			// 
			// DCard4
			// 
			this->DCard4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DCard4.BackgroundImage")));
			this->DCard4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->DCard4->Location = System::Drawing::Point(715, 73);
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
			this->DCard5->Location = System::Drawing::Point(921, 73);
			this->DCard5->Margin = System::Windows::Forms::Padding(4);
			this->DCard5->Name = L"DCard5";
			this->DCard5->Size = System::Drawing::Size(199, 266);
			this->DCard5->TabIndex = 61;
			this->DCard5->UseVisualStyleBackColor = true;
			this->DCard5->Click += gcnew System::EventHandler(this, &MyForm::DCard5_Click);
			// 
			// BetAmountLabel
			// 
			this->BetAmountLabel->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->BetAmountLabel->AutoSize = true;
			this->BetAmountLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BetAmountLabel->Location = System::Drawing::Point(747, 424);
			this->BetAmountLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->BetAmountLabel->Name = L"BetAmountLabel";
			this->BetAmountLabel->Size = System::Drawing::Size(133, 26);
			this->BetAmountLabel->TabIndex = 81;
			this->BetAmountLabel->Text = L"Bet Amount:";
			this->BetAmountLabel->Click += gcnew System::EventHandler(this, &MyForm::BetAmountLabel_Click);
			// 
			// PCard3
			// 
			this->PCard3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PCard3.BackgroundImage")));
			this->PCard3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->PCard3->Location = System::Drawing::Point(509, 468);
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
			this->staybutton->Location = System::Drawing::Point(1151, 532);
			this->staybutton->Margin = System::Windows::Forms::Padding(4);
			this->staybutton->Name = L"staybutton";
			this->staybutton->Size = System::Drawing::Size(280, 181);
			this->staybutton->TabIndex = 56;
			this->staybutton->Text = L"Stay Button Placeholder";
			this->staybutton->UseVisualStyleBackColor = true;
			this->staybutton->Click += gcnew System::EventHandler(this, &MyForm::staybutton_Click);
			// 
			// BetAmount
			// 
			this->BetAmount->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->BetAmount->Location = System::Drawing::Point(899, 427);
			this->BetAmount->Margin = System::Windows::Forms::Padding(4);
			this->BetAmount->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1874919424, 2328306, 0, 0 });
			this->BetAmount->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->BetAmount->Name = L"BetAmount";
			this->BetAmount->Size = System::Drawing::Size(160, 22);
			this->BetAmount->TabIndex = 79;
			this->BetAmount->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->BetAmount->ValueChanged += gcnew System::EventHandler(this, &MyForm::BetAmount_ValueChanged);
			// 
			// DTVLabel
			// 
			this->DTVLabel->AutoSize = true;
			this->DTVLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DTVLabel->Location = System::Drawing::Point(112, 395);
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
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(547, 18);
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
			this->PlayerLabel1->Location = System::Drawing::Point(177, 738);
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
			this->PCard2->Location = System::Drawing::Point(301, 468);
			this->PCard2->Margin = System::Windows::Forms::Padding(4);
			this->PCard2->Name = L"PCard2";
			this->PCard2->Size = System::Drawing::Size(199, 266);
			this->PCard2->TabIndex = 63;
			this->PCard2->UseVisualStyleBackColor = true;
			this->PCard2->Click += gcnew System::EventHandler(this, &MyForm::PCard2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1538, 823);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->BetAmountLabel);
			this->Controls->Add(this->Funds);
			this->Controls->Add(this->BetAmount);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BetAmount))->EndInit();
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
	   void CheckForWinner(Hand dealerHand, Hand playerHand);
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
};

}
