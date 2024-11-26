#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;
#include "Card.h"
#include "Hand.h"
#include "Deck.h"

public ref class Form1 : public System::Windows::Forms::Form
{
private: //work in progress - i need a break will resume tommorrow
    Deck^ Deck = gcnew Deck();
    Hand* PlayerHand;
    Hand* DealerHand;
    //new Funds^ PlayerFunding;
    int WinnerDeclared = 0;

public:
    Form1()
    {
        this->Size = System::Drawing::Size(800, 1024);
        PlayerHand = gcnew Hand("Player");
        DealerHand = gcnew Hand("Dealer");
        //PlayerFunding = gcnew Funds();
        this->Size = System::Drawing::Size(1100, 800);
        //PlayerFunding->Startingpoint();
        //Funds->Text = "Funds : $" + System::Convert::ToInt32(PlayerFunding->Funding());
        //BetAmount->Maximum = PlayerFunding->Funding();
    }
};
