//
// Created by flori on 11/18/2024.
//

#ifndef DECK_H
#define DECK_H
#include "Card.h"
#include <vector>
#include<iostream>
#include <algorithm>
#include <random>
namespace std {

class Deck {
private:
    vector<Card> cards;
public:
    Deck() {
        string symbol;
        int value;
        for(int i =1; i <14;i++) {
            if(i==1) symbol = "A";
            else if(i==11) symbol = "J";
            else if(i==12) symbol = "Q";
            else if(i==13) symbol = "K";
            else symbol = to_string(i);
            if(i>10) value = 10;
            else value = i;
            Card newCard(value,"TBD","Spades",symbol);
            cards.push_back(newCard);
            Card newCard2(value,"TBD","Clubs",symbol);
            cards.push_back(newCard2);
            Card newCard3(value,"TBD","Diamonds",symbol);
            cards.push_back(newCard3);
            Card newCard4(value,"TBD","Hearts",symbol);
            cards.push_back(newCard4);
        }
    }
    void display() {
        for(int i = 0; i < cards.size(); i++) {
            cout<<cards[i].getValue()<< ", "<< cards[i].getSuit()<<", " <<cards[i].getSymbol()<<endl;
        }
    }
    void shuffle() {
        auto rng = std::default_random_engine {};
        std::ranges::shuffle(cards, rng);
    }
    Card popCard() {
       Card retCard = cards.back();
        cards.pop_back();
        return retCard;
    }
    };
} // std

#endif //DECK_H
