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
	DisplayDealerGraphics(game->dealerHand);
	DisplayPlayerGraphics(game->playerHand);
	Staying1->Checked = false;
    Staying2->Checked = false;
	Staying3->Checked = false;
    for (int i = 0; i < 2; i++)
    {
        game->playerHand.addCard(game->deck.popCard());
        game->dealerHand.addCard(game->deck.popCard());
        if (label10->Visible == true) {
            game->player3Hand.addCard(game->deck.popCard());
        }
		if (label3->Visible == true) {
			game->player2Hand.addCard(game->deck.popCard());
		}
    }
    //DisplayDealerGraphics(game->dealerHand); 
    DisplayPlayerGraphics(game->playerHand);
	if (label10->Visible) {
		player3Graphics(game->player3Hand);
	}
	if (label3->Visible) {
		player2Graphics(game->player2Hand);
	}
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
	int i = 0;
    if(i != 3 || 4){
        if (Staying1->Checked == false && Staying1->Visible == true)
        {
            i = 0;
        }
        else if (Staying2->Checked == false && Staying1->Visible == true)
        {
            i = 1;
        }
        else if (Staying3->Checked == false && Staying1->Visible == true)
        {
            i = 2;
        }
		if(label3->Visible == false)
		{
			i = 3;
		}
		if (Staying1->Checked == true && Staying2->Checked == true && Staying3->Checked == true)
		{
			i = 4;
		}
        switch (i)
        {
        case 0:
            game->playerHand.addCard(game->deck.popCard());
            DisplayPlayerGraphics(game->playerHand);
			if (game->playerHand.GetTotal() >= 21)
			{
				Staying1->Checked = true;
			}
            break;
        case 1:
            game->player2Hand.addCard(game->deck.popCard());
            player2Graphics(game->player2Hand);
			if (game->player2Hand.GetTotal() >= 21)
			{
				Staying2->Checked = true;
			}
            break;
        case 2:
            game->player3Hand.addCard(game->deck.popCard());
            player3Graphics(game->player3Hand);
			if (game->player3Hand.GetTotal() >= 21)
			{
				Staying3->Checked = true;
			}
            break;
		case 3:
			game->playerHand.addCard(game->deck.popCard());
            DisplayPlayerGraphics(game->playerHand);
            if (game->playerHand.GetTotal() >= 21)
            {
                CheckForWinner(game->dealerHand, game->playerHand, game->player2Hand, game->player3Hand);
            }
			break;
        case 4:
                CheckForWinner(game->dealerHand, game->playerHand, game->player2Hand, game->player3Hand);
                break;
        }

    }
    /*game->playerHand.addCard(game->deck.popCard());
    DisplayPlayerGraphics(game->playerHand);
    if (game->playerHand.GetTotal() >= 21)
    {
        CheckForWinner(game->dealerHand, game->playerHand);
    }*/
}
void BlackJackV11::MyForm::staybutton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label3->Visible == false) {
		if (label10->Visible == false) {
            while (game->dealerHand.GetTotal() < 17)
            {
                game->dealerHand.addCard(game->deck.popCard());
            }
			DisplayDealerGraphics(game->dealerHand);
            CheckForWinner(game->dealerHand, game->playerHand, game->player2Hand, game->player3Hand);
        }
    else if(label3->Visible == true && label10->Visible == false) {
			if (Staying2->Checked == true && Staying1->Checked == true) {
				while (game->dealerHand.GetTotal() < 17)
				{
					game->dealerHand.addCard(game->deck.popCard());
				}
                DisplayDealerGraphics(game->dealerHand);
                CheckForWinner(game->dealerHand, game->playerHand, game->player2Hand, game->player3Hand);
            }
    }
    else if (label10->Visible == true && label3->Visible == true) {
            if (Staying3->Checked == true && Staying2->Checked ==true) {
                while (game->dealerHand.GetTotal() < 17)
                {
                    game->dealerHand.addCard(game->deck.popCard());
                }
                DisplayDealerGraphics(game->dealerHand);
                CheckForWinner(game->dealerHand, game->playerHand, game->player2Hand, game->player3Hand);
            }
		}
	}
	else {
		if (Staying1->Checked == true && Staying2->Checked == true && Staying3->Checked == true) {
			while (game->dealerHand.GetTotal() < 17)
			{
				game->dealerHand.addCard(game->deck.popCard());
			}
			DisplayDealerGraphics(game->dealerHand);
			CheckForWinner(game->dealerHand, game->playerHand, game->player2Hand, game->player3Hand);
		}
	}
    //while (game->dealerHand.GetTotal() < 17)
    //{
    //    game->dealerHand.addCard(game->deck.popCard());
    //}
    //DisplayDealerGraphics(game->dealerHand);
    //CheckForWinner(game->dealerHand, game->playerHand);
    }
void BlackJackV11::MyForm::CheckForWinner(Hand dealerHand, Hand playerHand, Hand player2Hand, Hand player3Hand)
{
    if (playerHand.GetTotal() > 21)
    {
		DisplayDealerGraphics(dealerHand);
        //player bust - dealer wins
        WinnerPopup("Dealer", "Player", int(0));
    }
    else if (dealerHand.GetTotal() > 21)
    {
		DisplayDealerGraphics(dealerHand);
        //dealer bust - player wins
        WinnerPopup("Player", "Dealer", int(0));
    }
    else if (playerHand.GetTotal() > dealerHand.GetTotal())
    {
		DisplayDealerGraphics(dealerHand);
        //player wins
        WinnerPopup("Player", "Dealer", int(1));
    }
    else if (dealerHand.GetTotal() > playerHand.GetTotal())
    {
		DisplayDealerGraphics(dealerHand);
        //dealer wins
        WinnerPopup("Dealer", "Player", int(1));
    }
    else
    {
		DisplayDealerGraphics(dealerHand);
        //tie
        WinnerPopup("Player", "Dealer", int(2));
    }
}


void BlackJackV11::MyForm::Player2Checkbox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    if (Player2Checkbox->Checked)
    {
		label3->Visible = true;
		label4->Visible = true;
		label5->Visible = true;
		label6->Visible = true;
		label7->Visible = true;
		label8->Visible = true;
		label9->Visible = true;
		button5->Visible = true;
		button4->Visible = true;
		button3->Visible = true;
		button2->Visible = true;
		button1->Visible = true;
		Staying2->Visible = true;
		Staying1->Visible = true;
		staybutton->Text = "End Round";
		Player3Checkbox->Visible = true;
    }
	else {
		label3->Visible = false;
		label4->Visible = false;
		label5->Visible = false;
		label6->Visible = false;
		label7->Visible = false;
		label8->Visible = false;
		label9->Visible = false;
		button5->Visible = false;
		button4->Visible = false;
		button3->Visible = false;
		button2->Visible = false;
		button1->Visible = false;
		Staying2->Visible = false;
		Staying1->Visible = false;
		staybutton->Text = "Stay";
		Player3Checkbox->Visible = false;
	}

}


void BlackJackV11::MyForm::Player3Checkbox_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e) {
    if (Player3Checkbox->Checked)
    {
		label10->Visible = true;
		label11->Visible = true;
		label12->Visible = true;
		label13->Visible = true;
		label14->Visible = true;
		label15->Visible = true;
		label16->Visible = true;
		button10->Visible = true;
		button9->Visible = true;
		button8->Visible = true;
		button7->Visible = true;
        button6->Visible = true;
		Staying3->Visible = true;
    }
    else
    {
		label10->Visible = false;
		label11->Visible = false;
		label12->Visible = false;
		label13->Visible = false;
		label14->Visible = false;
		label15->Visible = false;
		label16->Visible = false;
		button10->Visible = false;
		button9->Visible = false;
		button8->Visible = false;
		button7->Visible = false;
		button6->Visible = false;
		Staying3->Visible = false;
    }
}
void BlackJackV11::MyForm::player2Graphics(Hand player2Hand)
{
    String^ filename = "";

    int value = 0;
    for (int i = 0; i < 5; i++)
    {
        if (i < player2Hand.GetTheNumberOfCards()) {
            Card acard = player2Hand.GetCardInfo(i);
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
            button5->BackgroundImage = System::Drawing::Image::FromFile(filename);
            label9->Text = ("" + value);
            if (value == 0)
            {
                label9->Text = (" ");
            }
            break;
        case 1:
            button4->BackgroundImage = System::Drawing::Image::FromFile(filename);
            label8->Text = ("" + value);
            if (value == 0)
            {
                label8->Text = (" ");
            }
            break;
        case 2:
            button3->BackgroundImage = System::Drawing::Image::FromFile(filename);
            label7->Text = ("" + value);
            if (value == 0)
            {
                label7->Text = (" ");
            }
            break;
        case 3:
            button2->BackgroundImage = System::Drawing::Image::FromFile(filename);
            label6->Text = ("" + value);
            if (value == 0)
            {
                label6->Text = (" ");
            }
            break;
        case 4:
            button1->BackgroundImage = System::Drawing::Image::FromFile(filename);
            label5 ->Text = ("" + value);
            if (value == 0)
            {
                label5 ->Text = (" ");
            }
            break;
        }
    }
    label4->Text = "Total Value: " + player2Hand.GetTotal();
}
void BlackJackV11::MyForm::player3Graphics(Hand player3Hand)
{
    String^ filename = "";
    int value = 0;
    for (int i = 0; i < 5; i++)
    {
        if (i < player3Hand.GetTheNumberOfCards()) {
            Card acard = player3Hand.GetCardInfo(i);
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
            button10->BackgroundImage = System::Drawing::Image::FromFile(filename);
            label16->Text = ("" + value);
            if (value == 0)
            {
                label16->Text = (" ");
            }
            break;
        case 1:
            button9->BackgroundImage = System::Drawing::Image::FromFile(filename);
            label15->Text = ("" + value);
            if (value == 0)
            {
                label15->Text = (" ");
            }
            break;
        case 2:
            button8->BackgroundImage = System::Drawing::Image::FromFile(filename);
            label14->Text = ("" + value);
            if (value == 0)
            {
                label14->Text = (" ");
            }
            break;
        case 3:
            button7->BackgroundImage = System::Drawing::Image::FromFile(filename);
            label13->Text = ("" + value);
            if (value == 0)
            {
                label13->Text = (" ");
            }
            break;
        case 4:
            button6->BackgroundImage = System::Drawing::Image::FromFile(filename);
            label12->Text = ("" + value);
            if (value == 0)
            {
                label12->Text = (" ");
            }
            break;
        }
    }
    label11->Text = "Total Value: " + player3Hand.GetTotal();
}
