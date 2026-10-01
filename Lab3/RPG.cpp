//RPG.cpp
#include "RPG.h"

RPG::RPG(){
    name = "NPC";
    hits_taken = 0;
    luck = 0.1;
    exp = 50;
    level = 1;
}


/**
* @brief sets hits_taken to new_hits
*
*/

void RPG::setHitsTaken(int new_hits){
    hits_taken = new_hits;
}