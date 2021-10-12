/*

Author: Felipe Castro
Class: Domestic.h
Information: Class to Implement An Abstract Class to Generate Multiple Kinds of Animals

*/

// This means that this header file will only ever be included once in a specific destination file
#pragma once

// Define of the class
#ifndef DOMESTIC_H
#define DOMESTIC_H

// Included Animal.cpp to include the libraries
#include "../Definition Files/Animal.cpp"

class Domestic : public Animal
{
protected:
    bool hasAnOwner;
    bool underAdoption;
    double price;

public:
    // Constructors
    Domestic();
    Domestic(string Id, string Name, int Age, string Birthdate, string Sex, bool HasAnOwner, bool UnderAdoption, double Price);
    // Methods
    void play();
    void move();
    virtual void sound() = 0;
    void receiveOrder(int Order);
    // Gets and Sets Methods
    const bool getHasAnOwner();
    const bool getUnderAdoption();
    const double getPrice();
    void setHasAnOwner(bool HasAnOwner);
    void setUnderAdoption(bool UnderAdoption);
    void setPrice(double Price);
    // Destructor
    ~Domestic();
};

#endif