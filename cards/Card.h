//
// Created by flori on 11/18/2024.
//
#ifndef CARD_H
#define CARD_H
#include <string>

namespace std
{

    class Card
    {
    private:
        int value;
        string imageFilePath;

    public:
        Card(int inVal, string inImageFilePath)
        {
            value = inVal;
            imageFilePath = inImageFilePath;
        }
        int getValue()
        {
            return value;
        }
        string getImageFilePath()
        {
            return imageFilePath;
        }
        void setValue(int newValue)
        {
            value = newValue;
        }
    };

}

#endif
