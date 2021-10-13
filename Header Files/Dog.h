/*

Author: Felipe Castro
Class:  Dog.h
Information: Implement a Dog inheriting from Domestic

*/

// This means that this header file will only ever be included once in a specific destination file
#pragma once

// Define of the class
#ifndef DOG_H
#define DOG_H

// Included Domestic.cpp to include the libraries
#include "../Definition Files/Domestic.cpp"

class Dog : public Domestic
{
protected:
    bool hasPedigree;
    string race;

public:
    // Constructors
    Dog();
    Dog(string Id, string Name, int Age, string Birthdate, string Sex, bool HasAnOwner, bool UnderAdoption, double Price, bool HasPedigree, string Race);
    // Methods
    void sound();
    void getType();
    void information();
    // Get and Set Methods
    const bool getHasPedigree();
    const string getRace();
    void setPedigree(bool HasPedigree);
    void setRace(string Race);
    // Destructor
    ~Dog();
};

#endif