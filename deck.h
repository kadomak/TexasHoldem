#ifndef DECK_H
#define DECK_H 
#include "cards.h"


class deck : public cards //inherts card data
{ 
    protected:
    vector<string> deckOfCards; //deck
    int cardTotal; //card total
    vector<string> drawnCards; //a hand full of cards
   
    public:
    deck(); //constructor creates the standard 52 card deck
    deck(int cards); // constructor creates a 36 card deck for six plus hold'em
    vector<string> getDeck()const; //gets the deck
    vector<string> getCards()const; //gets a hand full of cards
    int getCardTotal()const; //gets the card total
 
       
};
 
#endif
