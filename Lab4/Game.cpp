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

 /**
  * @brief Randomly selects a player (via index) from the
  * set of alive players, live_players
  * 
  * @return int: index for vector, players
  */
 int Game::selectPlayer(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(0, live_players.size() - 1);

    //Pick random index
    int randomIndex = dist(gen);

    //Advance iterator to that index
    set<int>::iterator it = live_players.begin();
    advance(it, randomIndex);

    int selectedIndex = *it;
    return selectedIndex;

 }