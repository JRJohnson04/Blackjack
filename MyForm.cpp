#include "Hand.h"
#include "Card.h"
#include "MyForm.h"
#include "Deck.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;
using namespace System::ComponentModel;
using namespace System::Collections;

namespace BlackJackV11 {

    public ref class form : public System::Windows::Forms::Form
    {
        int WinnerDeclared = 0;
        Deck* deck;
        Hand* playerHand;
        Hand* dealerHand;
	public: form()
	{
		deck = new Deck();
		playerHand = new Hand();
		dealerHand = new Hand();
	}
		  //logic below is not working as it refuses to recognise the buttons and labels - once its done the rest of the logic should be really simple
    //private: void StartButton_Click(System::Object^ sender, System::EventArgs^ e) {
    //    deck->shuffle();
    //    for (int i = 0; i < 2; i++)
    //    {
    //        playerHand->addCard(deck->popCard());
    //        dealerHand->addCard(deck->popCard());
    //    }
    //    DisplayPlayerGraphics();
    //}

    //private: void DisplayPlayerGraphics() 
    //{
    //    for (int i = 0; i < playerHand->GetTheNumberOfCards(); i++)
    //    {
    //        Card acard = playerHand->GetCardInfo(i);
    //        switch (i)
    //        {
    //        case 0:
    //            PCard1->BackgroundImage = acard.GetCardImage();
    //            PlayerLabel1->Text = ("" + acard.GetCardValue());
    //            if (acard.GetCardValue() == 0)
    //            {
    //                PlayerLabel1->Text = (" ");
    //            }
    //            break;
    //        case 1:
    //            PCard2->BackgroundImage = acard.GetCardImage();
    //            PlayerLabel2->Text = ("" + acard.GetCardValue());
    //            if (acard.GetCardValue() == 0)
    //            {
    //                PlayerLabel2->Text = (" ");
    //            }
    //            break;
    //        case 2:
    //            PCard3->BackgroundImage = acard.GetCardImage();
    //            PlayerLabel3->Text = ("" + acard.GetCardValue());
    //            if (acard.GetCardValue() == 0)
    //            {
    //                PlayerLabel3->Text = (" ");
    //            }
    //            break;
    //        case 3:
    //            PCard4->BackgroundImage = acard.GetCardImage();
    //            PlayerLabel4->Text = ("" + acard.GetCardValue());
    //            if (acard.GetCardValue() == 0)
    //            {
    //                PlayerLabel4->Text = (" ");
    //            }
    //            break;
    //        case 4:
    //            PCard5->BackgroundImage = acard.GetCardImage();
    //            PlayerLabel5->Text = ("" + acard.GetCardValue());
    //            if (acard.GetCardValue() == 0)
    //            {
    //                PlayerLabel5->Text = (" ");
    //            }
    //            break;
    //        }
    //    }
    //    PTVLabel->Text = "Total Value: " + playerHand.GetTotalValue();
    //}
    };
}
