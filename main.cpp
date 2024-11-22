#include <iostream>
#include "Deck.h"
#include "Card.h"
#include "Hand.h"
using namespace std;
int main()
{
    Deck deck;
    Hand playerHand;
    Hand dealerHand;
    cout << "Displaying hand:" << endl;
    playerHand.display();
    cout << endl
         << "Displaying deck:" << endl;
    deck.display();
    return 0;
}
