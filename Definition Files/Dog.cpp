/*

Author: Felipe Castro
Class: Dog.cpp
Information: Class to Implement An Abstract Class to Generate Multiple Kinds of Animals

*/

// Included Dog.h to include the libraries and definitions
#include "../Header Files/Dog.h"

// Constructors

Dog::Dog()
{
    hasPedigree = false;
    race = "Zaguate";
}

Dog::Dog(string Id, string Name, int Age, string Birthdate, string Sex, bool HasAnOwner, bool UnderAdoption, double Price, bool HasPedigree, string Race) : Domestic(Id, Name, Age, Birthdate, Sex, HasAnOwner, UnderAdoption, Price)
{
}

// Methods
void Dog::sound()
{
    cout << "Guau Guau" << endl;
}

void Dog::getType()
{
    cout << "I am Dog" << endl;
}

// Get and Set Methods
const bool Dog::getHasPedigree()
{
    return hasPedigree;
}

const string Dog::getRace()
{
    return race;
}

void Dog::setPedigree(bool HasPedigree)
{
    hasPedigree = HasPedigree;
}

void Dog::setRace(string Race)
{
    race = Race;
}

// Destructor

Dog::~Dog()
{
    cout<<"Destroying the Dog"<<endl;
}
