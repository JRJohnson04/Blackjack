/*Pseudo Code Skeleton for Blackjack Group Project
Authors: Garrett Hovind & Ronnie Johnson
Date: 11/6/2024
Class: COP 3003 Programming II in C++
Professor: Deepa Devasenapathy*/

/*NEEDS TO BE REFINED - DOESN'T DEPICT THE FLOW OF DATA BETWEEN CLASSES - JUST SOME BASE FUNCTIONALITY
    data should flow ROUGHLY in this order:
    Create Form to begin Chain -> Call Deck of cards -> Deck calls to create Cards Data -> return Card Data to Deck-> Create Deck of Cards ->
    return Deck of Cards to Form -> Create Player & Dealer Hand -> Hands request Cards Data from Deck ->  Deck Passes Cards data and values to hands
    while removing the data from its available list (assigns card values and graphics to hands data) -> hands return data to form for display ->
    determins effect on funds data -> calls appropriate response from funds and updates values -> ends round: returns cards to deck data list post round->
    cycles back to creating hands till program ends. */

/*Class for Winform
    Initialize the deck of cards
    Initialize the Dealers Hand
    Initialize the Players Hand
    Initialize Funding
    Initialize win/loss tracker

        create form method
            initialize components
            on call - should create the user and dealer hands
            on call - should set the funding amount to base level
            display bet amount, current funds and buttons

        create start button method
            on click - should shuffle the deck
            on click - should deal 2 cards to the player and dealer
            on click - should display the players cards
            on click - should display the total of the player's hand
            on click - should hide the total of the dealer's hand
            on click - should display the hit and stand buttons

        create hit button method
            on click - should deal a card to the player
            on click - should display the players cards
            on click - should display the total of the player's hand
            on click - should check if the player has busted
            on click - should check if the player has 21
            on click - should display the hit and stand buttons

        create stand button method
            on click - should reveal the dealer's hand
            on click - should display the total of the dealer's hand
            on click - should check if the dealer has busted
            on click - should check if the dealer has 21
            on click - should check if the player has won
            on click - should check if the dealer has won
            on click - should check if the player has busted
            on click - should check if the dealer has busted
            on click - should check if the player has 21
            on click - should check if the dealer has 21
            on click - should display the hit and stand buttons
                (can separate the win/loss checks into their own methods)
            on click - should call the logic for the dealer to hit or stand (less than 17, if they have a full hand, etc.)

        create a method for creating win/loss notifications
            on call - should display the win/loss notification
            on call - should update the funding amount
            on call - should update the win/loss tracker

        methods for betting results/score etc

        Convience methods (helpful for testing):
            button to toggle on/off shuffling the deck
            button to toggle on/off showing the dealer's hand

        create a method to shuffle the deck

        create a method to deal a card to the player
            on call - should remove the card from the deck
            on call - should add the card to the player's hand
            on call - should display the card

        create a method to deal a card to the dealer
            on call - should remove the card from the deck
            on call - should add the card to the dealer's hand
            on call - should display the card

    */

/*Class for Deck of cards
    Initialize the deck of cards
    Initialize the suits
    Initialize the ranks
    Initialize the values of the cards
    Initialize the deck size

        create a method to shuffle the deck
            on call - should shuffle the deck of cards

        create a method to deal a card
            on call - should remove the card from the deck

        create a method to return cards to the deck
            on call - should add the card back to the deck
            (could just be a default function of the shuffle method?)

        create a method to get the value of a card
            on call - should return the value of the card

        create a method to get the size of the deck
            on call - should return the size of the deck

        create a method to get the deck
            on call - should return the deck of cards

        create methods for assigning graphics of the cards
            functions include:
            should display the card
            should display the back of the card
            should display the suit of the card
            should display the rank of the card
            should display the value of the card
*/

/*class for Hand
    Initialize the hand
    Initialize the hand size
    Initialize the hand value

        create a method to add a card to the hand
            on call - should add the card to the hand
            on call - should update the hand value

        create a method to remove a card from the hand
            on call - should remove the card from the hand
            on call - should update the hand value

        create a method to get the hand value
            on call - should return the hand value

        create a method to get the hand size
            on call - should return the hand size

        create a method to get the hand
            on call - should return the hand

        create a method to display the hand
            on call - should display the hand
*/

/*Class for Card
    Initialize the suit
    Initialize the rank
    Initialize the value
    initialize the card graphics

        create a method to get the suit
            on call - should return the suit

        create a method to get the rank
            on call - should return the rank

        create a method to get the value
            on call - should return the value

        create a method to display the card
            on call - should display the card
*/

/*Class for Funding
    Initialize the funding amount
    Initialize the bet amount
    Initialize the win/loss tracker

        create a method to set the funding amount
            on call - should set the funding amount

        create a method to get the funding amount
            on call - should return the funding amount

        create a method to set the bet amount
            on call - should set the bet amount

        create a method to get the bet amount
            on call - should return the bet amount

        create a method to set the win/loss tracker
            on call - should set the win/loss tracker

        create a method to get the win/loss tracker
            on call - should return the win/loss tracker
*/

/* Main
    entry point for the program
    needs some configuration data here I think - like rendering options and visual styles etc.
    calls to create the form
*/