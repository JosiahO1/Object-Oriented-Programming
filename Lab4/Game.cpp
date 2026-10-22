//Game.cpp
#include "Game.h"



Game::Game() {
}


/**
 * @brief creates up to n RPG pointers and updates names
 * with ordering. Populates live_players from 0 to n-1 as
 * all players are alive initially
 * 
 * @param n : number of players
 */
 
 void Game::generatePlayers(int n){
    for(int i = 0; i < n; i++){
        players.push_back(new RPG());

        //rename players
        string new_name = "NPC_" + to_string(i);
        players[i] -> setName(new_name);
        live_players.insert(i);
    }
 }