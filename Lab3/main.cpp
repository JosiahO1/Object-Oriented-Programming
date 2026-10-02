//main.cpp
#include <iostream>
#include "RPG.h"
using namespace std;

int main(){
    RPG p1 = RPG("Wiz", 0, 0.2, 60, 1);
    RPG p2 = RPG();

    printf("%s Current Stats\n", p1.getName().c_str());
    printf("Hits Taken: %i\t Luck: %f\t Exp: %f\t Level: %i\n\n", p1.getHitsTaken(), p1.getLuck(), p1.getexp(), p1.getLevel());

    //PRINT the same for p2
    printf("%s Current Stats\n", p2.getName().c_str());
    printf("Hits Taken: %i\t Luck: %f\t Exp: %f\t Level: %i\n\n", p2.getHitsTaken(), p2.getLuck(), p2.getexp(), p2.getLevel());



    //CALL setHitsTaken() on either p1 and p2
    p1.setHitsTaken(3);



    //PRINT out the hits_taken
    cout<<"\nP1 hits taken " << p1.getHitsTaken() << endl;
    cout<<"\nP2 hits taken " << p2.getHitsTaken() << endl;



    cout<<"\n0 is dead, 1 is alive\n" << endl;
    //CALL isAlive() on both p1 and p2
    cout<<"P1 " << p1.isAlive()<<endl;
    cout<<"P2 " << p2.isAlive()<<endl;

    return 0;
}