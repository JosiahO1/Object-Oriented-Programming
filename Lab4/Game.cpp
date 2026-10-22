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

 /**
  * @brief Resets winner's hits_taken to 0.
  * Removes the loser from the live_players.
  * Calls updateExpLevel() for the winner
  * prints the structure "NPC_X won against NPC_Y"
  * 
  * @param winner: pointer to RPG winner
  * @param loser: pointer to RPG loser
  * @param loserIndex: int index of loser, so that it can be removed from
  *   live_players
  */

  void Game::endRound(RPG* winner, RPG* loser, int loserIndex){
    winner -> setHitsTaken(0);
    live_players.erase(loserIndex);
    winner -> updateExpLevel();
    printf("%s won against %s\n", winner->getName().c_str(), loser->getName().c_str());
}