//
// Created by flori on 11/18/2024.
//
#ifndef CARD_H
#define CARD_H
#include <string>

namespace std {

class Card {
private:
    int value;
    string suit;
    string symbol;
    string imageFilePath;
    public:
    Card(int inVal, string inImageFilePath, string inSuit, string inSymbol) {
        value = inVal;
        imageFilePath = inImageFilePath;
        suit = inSuit;
        symbol = inSymbol;
    }
    int getValue() {
        return value;
    }
    string getImageFilePath() {
        return imageFilePath;
    }
    string getSuit() {
        return suit;
    }
    string getSymbol() {
        return symbol;
    }
    void setValue(int newValue) {
        value = newValue;
    }
};

}

#endif
