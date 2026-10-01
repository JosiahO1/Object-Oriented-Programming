//main.cpp
#include <iostream>
#include "RPG.h"
using namespace std;

int main(){
    RPG p1 = RPG("Wiz", 0, 0.2, 60, 1);
    RPG p2 = RPG();

    printf("%s Current Stats\n", p1.getName().c_str());
    printf("Hits Taken: %i\t Luck: %f\t Exp: %f\t Level: %i\n", p1.getHitsTaken(), p1.getLuck(), p1.getexp(), p1.getLevel());

    //PRINT the same for p2


    //CALL setHitsTaken() on either p1 and p2



    cout<<"\nP2 hits taken";
    //PRINT our the hits_taken

    cout<<"0 is dead, 1 is alive\n";
    //CALL isAlive() on both p1 and p2


    return 0;
}