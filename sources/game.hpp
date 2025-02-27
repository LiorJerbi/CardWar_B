#pragma once
#include "player.hpp"
#include "card.hpp"
#include <vector>
#include <string>

namespace ariel{

class Game{
private:
    Player &_p1,&_p2;
    std::vector <Card> _deck,_table;    //Member variables that repr the deck of cards and the cards on table.
    std::string _lst_turn,_game_log;
    void makeDeck();
    int _turn_count;

public:
    //Constructor
    Game(Player& pl1, Player& pl2);
    //Game methods
    void playTurn();
    void printLastTurn();
    void playAll();
    void printWiner();
    void printLog();
    void printStats();
};
}