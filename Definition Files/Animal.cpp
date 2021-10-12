/*

Author: Felipe Castro
Class: Animal.cpp
Information: Class to Implement An Abstract Class to Generate Multiple Kinds of Animals

*/

// Included Animal.h to include the libraries
#include "../Header Files/Animal.h"

// Constructor
Animal::Animal()
{
    cout << "Creating the Animal" << endl;
    id = "";
    name = "";
    age = 0;
    birthDate = "";
    sex = "";
}
Animal::Animal(string Id, string Name, int Age, string Birthdate, string Sex)
{
    id = Id;
    name = Name;
    age = Age;
    birthDate = Birthdate;
    sex = Sex;
}
void Animal::eat()
{
    cout << "I am eating food" << endl;
}
void Animal::sleep()
{
    cout << "I am sleeping" << endl;
}
void Animal::move()
{
    cout << "I am moving, still not defined how" << endl;
}
void Animal::getType()
{
    cout << "I am a simple animal, still not defined which type" << endl;
}

// Get and Set Methods
const string Animal::getId()
{
    return id;
}
const string Animal::getName()
{
    return name;
}
const int Animal::getAge()
{
    return age;
}
const string Animal::getBirthDate()
{
    return birthDate;
}
const string Animal::getSex()
{
    return sex;
}
void Animal::setId(string Id)
{
    id = Id;
}
void Animal::setName(string Name)
{
    name = Name;
}
void Animal::setAge(int Age)
{
    age = Age;
}
void Animal::setBirthDate(string Birthdate)
{
    birthDate = Birthdate;
}
void Animal::setSex(string Sex)
{
    sex = Sex;
}

// Destructor

Animal::~Animal()
{
    cout << "Destroying the Animal" << endl;
}
