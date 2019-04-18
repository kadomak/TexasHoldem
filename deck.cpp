#include "deck.h"

//constructor by default creates a standard deck
deck :: deck()
{
    cardTotal = 52;
    for (int i = 0; i < SUITMAX; i++)
      {
        for (int j = 0; j < RANKMAX; j++)
        {
            deckOfCards.push_back(rankList[j]+suitList[i]); //fills the deck vector
        } 
      }   
}

//default argument used to set apart standard deck from special deck
deck :: deck (int cards=36) 
{
    cardTotal = cards;
    for (int i = 0; i < SUITMAX; i++)
      {
        for (int j = 4; j < RANKMAX; j++) //only fills ranks from 6 up 
        {
            deckOfCards.push_back(rankList[j]+suitList[i]); //fills deck vector
        } 
      }   
}

//returns the deck
vector<string> deck:: getDeck()const 
{
    return deckOfCards;
}

//returns the drawn cards
vector<string> deck ::getCards()const 
{
    return drawnCards;
}

//returns the total number of cards
int deck :: getCardTotal()const 
{
    return cardTotal;
}



