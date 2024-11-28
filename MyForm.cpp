#include "Hand.h"
#include "Card.h"
#include "MyForm.h"
#include "Deck.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Data;
//#include "gdiplusheaders.h"


 void BlackJackV11::MyForm::StartButton_Click(System::Object^ sender, System::EventArgs^ e) {
    //deck->shuffle();
    Deck deck;
    Hand playerHand;
    Hand dealerHand;
    for (int i = 0; i < 2; i++)
    {
        playerHand.addCard(deck.popCard());
        dealerHand.addCard(deck.popCard());
    }
     DisplayPlayerGraphics(playerHand);
}
 void BlackJackV11::MyForm::DisplayPlayerGraphics(Hand playerHand)
{
    for (int i = 0; i < playerHand.GetTheNumberOfCards(); i++)
    {
        Card acard = playerHand.GetCardInfo(i);
		String ^ filename = gcnew String(("cards/"+acard.GetCardImage()).c_str());
        switch (i)
        {
        case 0:
			PCard1->BackgroundImage = System::Drawing::Image::FromFile(filename);
            PlayerLabel1->Text = ("" + acard.GetCardValue());
            if (acard.GetCardValue() == 0)
            {
                PlayerLabel1->Text = (" ");
            }
            break;
        case 1:
            PCard2->BackgroundImage = System::Drawing::Image::FromFile(filename);
            PlayerLabel2->Text = ("" + acard.GetCardValue());
            if (acard.GetCardValue() == 0)
            {
                PlayerLabel2->Text = (" ");
            }
            break;
        case 2:
            PCard3->BackgroundImage = System::Drawing::Image::FromFile(filename);
            PlayerLabel3->Text = ("" + acard.GetCardValue());
            if (acard.GetCardValue() == 0)
            {
                PlayerLabel3->Text = (" ");
            }
            break;
        case 3:
            PCard4->BackgroundImage = System::Drawing::Image::FromFile(filename);
            PlayerLabel4->Text = ("" + acard.GetCardValue());
            if (acard.GetCardValue() == 0)
            {
                PlayerLabel4->Text = (" ");
            }
            break;
        case 4:
            PCard5->BackgroundImage = System::Drawing::Image::FromFile(filename);
            PlayerLabel5->Text = ("" + acard.GetCardValue());
            if (acard.GetCardValue() == 0)
            {
                PlayerLabel5->Text = (" ");
            }
            break;
        }
    }
    PTVLabel->Text = "Total Value: " + playerHand.GetTotal();
}

