//
// Created by flori on 11/18/2024.
//

#ifndef DECK_H
#define DECK_H
#include "Card.h"
#include <vector>
#include <iostream>
#include <algorithm>
#include <random>
namespace std
{

    class Deck
    {
    private:
        vector<Card> cards;

    public:
        Deck()
        {
            int value;
            string filenum;
            for (int i = 1; i < 14; i++)
            {
                switch (i)
                {
                case 1:
                    filenum = "a";
                    break;
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
                case 10:
                    filenum = to_string(i);
                    /* code */
                    break;
                case 11:
                    filenum = "j";
                    /* code */
                    break;
                case 12:
                    filenum = "q";
                    /* code */
                    break;
                case 13:
                    filenum = "k";
                    /* code */
                    break;

                default:
                    break;
                }
                if (i > 10)
                    value = 10;
                else
                    value = i;
                Card newCard(value, filenum + "c.gif");
                cards.push_back(newCard);
                Card newCard2(value, filenum + "d.gif");
                cards.push_back(newCard2);
                Card newCard3(value, filenum + "h.gif");
                cards.push_back(newCard3);
                Card newCard4(value, filenum + "s.gif");
                cards.push_back(newCard4);
            }
        }
        void display()
        {
            for (std::vector<Card>::size_type i = 0; i < cards.size(); ++i)
            {
                cout << cards[i].getValue() << ", " << cards[i].getImageFilePath() << endl; // << ", " << cards[i].getSuit() << ", " << cards[i].getSymbol() << endl; suite and symbol dont matter in blackjack its just a visual
            } // plus the image for the card will visually display those things so no point and having the code know it
        }
        void shuffle()
        {
            auto rng = std::default_random_engine{};
            std::shuffle(cards.begin(), cards.end(), rng);
        }
        Card popCard()
        {
            Card retCard = cards.back();
            cards.pop_back();
            return retCard;
        }
    };
} // std

#endif // DECK_H
