#include "player.h"

//sets the call amount to 0 init
int player :: callAmount = 0; 

//constructor
player :: player() 
{
    hand[2]; //each player has an empty hand until given hards
 
}

//sets the callAmount using the this pointer
void player :: setCallAmount(int callAmount) 
{
    this -> callAmount = callAmount;
}

int player :: getCallAmount()const
{
    return callAmount;
}

//gives the player their cards by passing in drawn cards and filling in the hand array
void player :: getHand(vector<string> &cards) 
{
    for (int i = 0; i < 2; i++)
    {
        hand[i] = cards[i]; 
    }
}

//prints out hand
void player :: showHand()const 
{
    for (int i = 0; i < 2; i++)
    {
        cout << hand[i] << " ";
    }
}


//a betting function allowing the player to bet more than the call
int player:: raise(int amount)
{
    this -> amount = amount; //uses the this function
    while (amount <= callAmount)
    {
        cout << endl << "Amount must be greater than the call. Please enter a valid amount: ";
        cin >> amount;
    }
    return amount; //returns the amoutn
}


//returns the call amount as bet
int player :: call()
{
    return callAmount;
}


//incomplete but would allow the hand to be determined
char player :: handType(vector<string> &cards)
{
    string temp, rank, suit;
    int spade = 0, heart = 0, diamond =0, club = 0, length;
    
    cards.resize(7); //total amount of cards
    cards[5] = hand[0]; //adding hand cards total
    cards[6] = hand[1];
    
    
    for (int i = 0; i < cards.size(); i++)
    {
        temp = cards[i]; //had difficulty indexing into suits and ranks
     
        if (suit == "♠")
            spade++;
        else if (suit == "♥")
            heart++;
        else if (suit == "♣")
            club++;
        else
            diamond++;      
    }
    
    if (spade >= 5 || heart >= 5 || club >= 5 || diamond >= 5)
        type = 'f'; //sets a flush
    
    else
        type = 'n';
   
    
    return type; 
}
