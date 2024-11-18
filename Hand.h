//
// Created by flori on 11/18/2024.
//

#ifndef HAND_H
#define HAND_H
using namespace std;
#include <vector>
#include "Card.h"
#include "Deck.h"


class Hand {
private:
    vector<Card> cards;
    int total =0;
public:
    Hand(){};
    void addCard(Card card) {
        cards.push_back(card);
        total+=card.getValue();
        //need ideas for dynamically deciding if an Ace is 1 or 11. Got nothing atm.
    }
    void reset() {
        cards.clear();
    }
    void display() {
        for (Card card : cards) {
            cout << card.getSymbol() << ", "<<card.getValue()<<", "<< card.getSuit() << endl;
        }
        cout<<total;
    }
};



#endif //HAND_H
