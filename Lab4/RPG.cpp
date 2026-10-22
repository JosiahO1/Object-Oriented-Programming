//RPG.cpp
#include "RPG.h"
using namespace std;

RPG::RPG(){
    name = "NPC";
    hits_taken = 0;
    luck = 0.1;
    exp = 50;
    level = 1;
}
RPG::RPG(string name, int hits_taken, float luck, float exp, int level){
    this->name = name;
    this->hits_taken = hits_taken;
    this->luck = luck;
    this->exp = exp;
    this->level = level;
}


/**
* @brief sets hits_taken to new_hits
*
*/

void RPG::setHitsTaken(int new_hits){
    hits_taken = new_hits;
}



/**
* @brief returns whether hits_taken is less than MAX_HITS_TAKEN
* In other words, a player is alive as long as they have not been hit MAX_HITS_TAKEN times.
*
* @return true : player is alive
* @return false : player is unalive
*/
bool RPG::isAlive() const{
    return hits_taken < MAX_HITS_TAKEN;
}

string RPG::getName() const{
    return name;
}

int RPG::getHitsTaken() const{
    return hits_taken;
}

float RPG::getLuck() const{
    return luck;
}

float RPG::getexp() const{
    return exp;
}

int RPG::getLevel() const{
    return level;
}

/*********EXTENDED FUNCTION ********************/
/**
 * @brief updates name
 * 
 * @param name
 */
 
void RPG::setName(string name){
    this->name = name;
}

 /**
  * @brief increase RPG's experince by 50
  * After updating, if RPG's experience is >=100.0, increase
  * RPG's level by 1, reset their experience to 0, and increase
  * their luck by 0.1
  */
void RPG::updateExpLevel(){
    exp += 50;
    if(exp >=100.0){
        level++;
        exp = 0;
        luck += 0.1;
    }
}

/**
 * @brief Hits or misses the opponent at random. Luck is a form of defense.
 * The higher the opponent's luck, the more liekly the attack will miss.
 * If the attack is a hit, opponent's hits taken should increment by 1.
 * Add last couple of lines to complete
 * @param opponent: RPG*
 */
void RPG::attack(RPG* opponent){
    random_device rd;
    mt19937 gen(rd()); //seed with random
    uniform_real_distribution<> dist(0.0, 1.0);

    float random_num = dist(gen);

    //Create a bool called hit
    //hit is true if random_num > HIT_FACTOR * opponent's luck
    //if hit is true, call UpdateHitsTaken() to increase opponent's hits_taken

    bool hit = false;
    if(random_num > HIT_FACTOR * opponent->getLuck()){
        hit = true;
        if(hit){
            opponent->setHitsTaken(opponent->getHitsTaken() + 1);
        }
    }


    }
/**
 * @brief Prints in the format:
 * "Name: NPC_X      Hits Taken: X     Luck: 0.X00000     Exp: X0.00000000      Level:X      Status: Alive or Dead"
 */
void RPG::printStats(){
    printf("Name:  %s\t Hits Taken: %i\t Luck: %f\t Exp: %f\t Level: %i\t Status: %s\n", getName().c_str(), getHitsTaken(), getLuck(), getexp(), getLevel(), isAlive()?"Alive":"Dead");
}


/**
 * @brief Destory RPG::RPG object
 * Already completed
 */

RPG::~RPG() {}
