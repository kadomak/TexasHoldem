#include "floor.h"

//sets the pot to zero initially
int floor :: pot = 0; 

//returns the pot value
int floor :: getPot()
{
    return pot;
}        
  
//increases the pot value
void floor :: setPot(int amount)
{
    pot+= amount; //increases the amount
}

//adds card to floor cards
void floor :: addToCardDisplay(vector<string> &cards)
{
    for (int i = 0; i < cards.size(); i++)
    {
       cardDisplay.push_back(cards[i]);
    } 
}

//prints out the cards on the floor (equivalent of flipping over cards)
void floor :: showCardDisplay()const
{
    for (int i = 0; i < cardDisplay.size(); i++)
    {
        cout << cardDisplay[i] << " ";
    }
}

vector<string> floor :: getCardDisplay()const
{
    return cardDisplay;
}

