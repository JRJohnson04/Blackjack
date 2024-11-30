//
// Created by flori on 11/18/2024.
//

#ifndef HAND_H
#define HAND_H
#include <vector>
#include "Card.h"
#include "Deck.h"
using namespace std;

class Hand
{
private:
    vector<Card> cards;
    int total = 0;

public:
    Hand() {};
    void addCard(Card card)
    {
        cards.push_back(card);
		total = DynTotal();
        // need ideas for dynamically deciding if an Ace is 1 or 11. Got nothing atm.
    }
    void reset()
    {
        cards.clear();
    }

	Card GetCardInfo(int i)
	{
		return cards[i];
	}

	int GetTheNumberOfCards()
	{
		return cards.size();
	}
	int DynTotal(){
		total = 0;
		int aceCounter = 0;
		for (int i = 0; i < cards.size(); i++)
		{
			if (cards[i].GetCardValue() != 1 && cards[i].GetCardValue() != 11) {
				total += cards[i].GetCardValue();
			}
			else {
				aceCounter++;
			}
		
		}
		total += aceCounter;
		for (int i = 0; i < aceCounter; i++) {
			if (total + 10 <= 21) {
				total += 10;
			}
		}
		return total;
	}
	int GetTotal()
	{
		return total;
	}

	Card swapAceValue() {
		for (int i = 0; i < cards.size(); i++)
		{
			if (cards[i].GetCardValue() == 1)
			{
				cards[i].setValue(11);
				total += 10;
				return cards[i];
			}
		}
	}
};

#endif // HAND_H