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
	int i;
	Game()
	{
		i = 1;
	}
};