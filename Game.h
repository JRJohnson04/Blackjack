#pragma once
#include "Hand.h"
#include "Card.h"
#include "Deck.h"

public class Game
{
public:
	Deck deck;
	Hand playerHand;
	Hand dealerHand;
	Hand player2Hand;
	Hand player3Hand;
	int i;
	Game()
	{
		i = 1;
	}
};