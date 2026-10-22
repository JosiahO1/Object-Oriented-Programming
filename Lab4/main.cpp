//main.cpp
#include <iostream>
#include "RPG.h"
#include "Game.h"
using namespace std;

int main(){
    //Create a Game object
    Game gamers;
    
    //Create num_players as an int and set it to 10
    int num_players = 10;

    //Call generatePLayers(..) with num_players as the parameter
    gamers.generatePlayers(num_players);

    //Call gameLoop()
    gamers.gameLoop();

    //Call printFinalResults()
    gamers.printFinalResults();

    return 0;
}