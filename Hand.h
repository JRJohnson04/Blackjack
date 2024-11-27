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
        total += card.GetCardValue();
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

	int GetTotal()
	{
		return total;
	}
};

#endif // HAND_H
