#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <iostream>
#include <vector>
using namespace std;


class player
{
    private:
    string hand[2]; //cards given to players
    static int callAmount; //the call amount
    int amount;
    char type; //used to determine the winner
   
    
    public:
    player(); //constructor which creates an empty hand
    void getHand(vector<string> &cards); //allows player to recieve cards
    void showHand()const; //prints out the players hand
    void setCallAmount(int callAmount); //the player sets the call amount
    int getCallAmount()const; //returns the amount
    int raise(int); //allows a player to raise the stake
    int call(); //allows the player to call
    char handType(vector<string> & cards); //determines the hand type flush, pair, etc...
           
};

#endif
