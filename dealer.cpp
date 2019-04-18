#include <algorithm>         
#include <ctime>       
#include <cstdlib> 
#include "dealer.h"

//constructor which has the deck, total cards, and drawn cards
dealer :: dealer()
{
   cards = playingCards.getDeck(); //gets the deck
   total = playingCards.getCardTotal(); //gets the card total
   drawn = playingCards.getCards(); //gets a handful
      
}

//shuffles the deck of cards
void dealer :: shuffleCards()
{
    random_shuffle(cards.begin(),cards.end());
} 


//draws a card from the deck
vector<string> dealer:: dealCards(int amount) 
{    
    drawn.clear(); //empties the current handful
    for (int i = 0; i < amount; i ++)
    {
        drawn.push_back(cards[0]); //selects the top card
        cards.erase(cards.begin()); //removes it from the deck of cards
        total--; //decreases the total cards
    }
    return drawn; //returns the drawn cards
}

//prints the deck of cards
void dealer :: showDeck()const
{
   for (int i = 0; i < (total-1); i++)
       cout << cards[i] << " ";
} 
