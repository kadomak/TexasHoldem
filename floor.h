#ifndef FLOOR_H
#define FLOOR_H
#include <string>
#include <iostream>
#include <vector>
using namespace std;


class floor
{
    private:
    vector<string> cardDisplay; //cards displayed on the floor 
    static int pot; //pot (ie the amount of money to win)
   
    public:
    static int getPot(); //gets the pot
    void setPot(int); //increases the pot value
    void addToCardDisplay(vector<string> &cards); //adds to cards on the floor 
    void showCardDisplay()const; //prints out the card display 
    vector<string> getCardDisplay()const; //returns the cards on the floor
};



#endif
