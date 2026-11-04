#include <iostream>
#include<stdio.h>
#include "Charmander.h"

/**
 * @brief Construct a new Charmander:: Charmander object
 * 
 */
Charmander::Charmander() : Pokemon(){
    type.push_back("Fire");
    skills.push_back("Growl");
    skills.push_back("Scratch");

    cout<< "Default Constructor (Charmander) \n";
}
