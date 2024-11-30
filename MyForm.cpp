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

static void WinnerPopup(String^ winner, String^ loser, int type) {
	String^ message;
    switch (type)
    {
    case 0: //bust 
        message = ("" + loser + " bust " + winner + " Wins!");
        break;
    case 1: //normal win
		message = ("" + winner + " Wins!");
        break;
    case 2: //tie
		message = ("It's a tie!");
        break;
	}
    MessageBox::Show(message, "Game Over", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

 void BlackJackV11::MyForm::StartButton_Click(System::Object^ sender, System::EventArgs^ e) {
	 game = new Game();
     game->deck.shuffle();
    for (int i = 0; i < 2; i++)
    {
        game->playerHand.addCard(game->deck.popCard());
        game->dealerHand.addCard(game->deck.popCard());
    }
	 DisplayDealerGraphics(game->dealerHand); //only here for debugging - comment out later
     DisplayPlayerGraphics(game->playerHand);
}

void BlackJackV11::MyForm::DisplayDealerGraphics(Hand dealerHand)
 {
    String^ filename = "";
	int value = 0;
     for (int i = 0; i < 5; i++)
     {
         if (i < dealerHand.GetTheNumberOfCards()) {
             Card acard = dealerHand.GetCardInfo(i);
             filename = gcnew String(("cards/" + acard.GetCardImage()).c_str());
             value = acard.GetCardValue();
         }
         else
         {
             filename = gcnew String("cards/CardBack.png");
			 value = 0;
         }
             switch (i)
             {
             case 0:
                 DCard1->BackgroundImage = System::Drawing::Image::FromFile(filename);
                 DealerLabel1->Text = ("" + value);
                 if (value == 0)
                 {
                     DealerLabel1->Text = (" ");
                 }
                 break;
             case 1:
                 DCard2->BackgroundImage = System::Drawing::Image::FromFile(filename);
                 DealerLabel2->Text = ("" + value);
                 if (value == 0)
                 {
                     DealerLabel2->Text = (" ");
                 }
                 break;
             case 2:
                 DCard3->BackgroundImage = System::Drawing::Image::FromFile(filename);
                 DealerLabel3->Text = ("" + value);
                 if (value == 0)
                 {
                     DealerLabel3->Text = (" ");
                 }
                 break;
             case 3:
                 DCard4->BackgroundImage = System::Drawing::Image::FromFile(filename);
                 DealerLabel4->Text = ("" + value);
                 if (value == 0)
                 {
                     DealerLabel4->Text = (" ");
                 }
                 break;
             case 4:
                 DCard5->BackgroundImage = System::Drawing::Image::FromFile(filename);
                 DealerLabel5->Text = ("" + value);
                 if (value == 0)
                 {
                     DealerLabel5->Text = (" ");
                 }
                 break;
             }
         
     }
     DTVLabel->Text = "Total Value: " + dealerHand.GetTotal();
 }

void BlackJackV11::MyForm::DisplayPlayerGraphics(Hand playerHand)
{
    String^ filename = "";
    int value = 0;
    for (int i = 0; i < 5; i++)
    {
        if (i < playerHand.GetTheNumberOfCards()) {
            Card acard = playerHand.GetCardInfo(i);
            filename = gcnew String(("cards/" + acard.GetCardImage()).c_str());
            value = acard.GetCardValue();
        }
        else
        {
            filename = gcnew String("cards/CardBack.png");
            value = 0;
        }
        switch (i)
        {
        case 0:
			PCard1->BackgroundImage = System::Drawing::Image::FromFile(filename);
            PlayerLabel1->Text = ("" + value);
            if (value == 0)
            {
                PlayerLabel1->Text = (" ");
            }
            break;
        case 1:
            PCard2->BackgroundImage = System::Drawing::Image::FromFile(filename);
            PlayerLabel2->Text = ("" + value);
            if (value == 0)
            {
                PlayerLabel2->Text = (" ");
            }
            break;
        case 2:
            PCard3->BackgroundImage = System::Drawing::Image::FromFile(filename);
            PlayerLabel3->Text = ("" + value);
            if (value == 0)
            {
                PlayerLabel3->Text = (" ");
            }
            break;
        case 3:
            PCard4->BackgroundImage = System::Drawing::Image::FromFile(filename);
            PlayerLabel4->Text = ("" + value);
            if (value == 0)
            {
                PlayerLabel4->Text = (" ");
            }
            break;
        case 4:
            PCard5->BackgroundImage = System::Drawing::Image::FromFile(filename);
            PlayerLabel5->Text = ("" + value);
            if (value == 0)
            {
                PlayerLabel5->Text = (" ");
            }
            break;
        }
    }
    PTVLabel->Text = "Total Value: " + playerHand.GetTotal();
}
void BlackJackV11::MyForm::hitbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	game->playerHand.addCard(game->deck.popCard());
	DisplayPlayerGraphics(game->playerHand);
	if (game->playerHand.GetTotal() >= 21)
	{
		CheckForWinner(game->dealerHand, game->playerHand);
	}
}
void BlackJackV11::MyForm::staybutton_Click(System::Object^ sender, System::EventArgs^ e) {
	while (game->dealerHand.GetTotal() < 17)
	{
		game->dealerHand.addCard(game->deck.popCard());
	}
	DisplayDealerGraphics(game->dealerHand);
	CheckForWinner(game->dealerHand, game->playerHand);
}
void BlackJackV11::MyForm::CheckForWinner(Hand dealerHand, Hand playerHand)
{
	if (playerHand.GetTotal() > 21)
	{
		//player bust - dealer wins
		WinnerPopup("Dealer", "Player", int(0));
	}
	else if (dealerHand.GetTotal() > 21)
	{
		//dealer bust - player wins
		WinnerPopup("Player", "Dealer", int(0));
	}
	else if (playerHand.GetTotal() > dealerHand.GetTotal())
	{
		//player wins
		WinnerPopup("Player", "Dealer", int(1));
	}
	else if (dealerHand.GetTotal() > playerHand.GetTotal())
	{
		//dealer wins
		WinnerPopup("Dealer", "Player", int(1));
	}
	else
	{
		//tie
		WinnerPopup("Player", "Dealer", int(2));
	}
}
