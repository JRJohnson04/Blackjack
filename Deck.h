//
// Created by flori on 11/18/2024.
//

#ifndef DECK_H
#define DECK_H
#include "Card.h"
#include <vector>
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
                    break;
                case 11:
                    filenum = "j";
                    break;
                case 12:
                    filenum = "q";
                    break;
                case 13:
                    filenum = "k";
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
        /*void shuffle()
        {
            auto rng = std::default_random_engine{};
            std::shuffle(cards.begin(), cards.end(), rng);
        }*/


        void shuffle() // this is the old shuffle method I have. might test it later otherwise just delete it before presentation
        {
            std::random_device rd;
            std::mt19937 rng(rd());
            std::uniform_int_distribution<int> dist(11, 100);
            int timesToShuffle = dist(rng);
            for (int index = 0; index < timesToShuffle; index++)
            {
                for (int r1 = 0; r1 < 52; r1++)
                {
                    std::uniform_int_distribution<int> cardDist(0, 51);
                    int r2 = cardDist(rng);
                    std::swap(cards[r1], cards[r2]);
                }
            }
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
