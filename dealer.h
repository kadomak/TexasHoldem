#ifndef DEALER_H
#define DEALER_H
#include "deck.h"
  
class dealer
{
    private:
    deck playingCards; //composition since a dealer has a deck
    vector<string> cards, drawn;
    int total;
    
    public:
    dealer(); //constructor which automatically creates deck, total cards, and drawn cards
    void shuffleCards(); //shuffles the cards
    void showDeck()const; //prints out the deck
    vector<string> dealCards(int); //deals cards and returns the drawn cards
   
       
};

#endif
