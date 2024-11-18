#include <iostream>
#include"Deck.h"
#include "Card.h"
#include "Hand.h"
using namespace std;
int main() {
    Deck deck;
    deck.shuffle();
    deck.display();
    Hand hand;
    hand.addCard(deck.popCard());
    hand.addCard(deck.popCard());
    cout<<"Displaying hand:"<<endl;
    hand.display();
    cout<<endl<<"Displaying deck:"<<endl;
    deck.display();
    return 0;
}
