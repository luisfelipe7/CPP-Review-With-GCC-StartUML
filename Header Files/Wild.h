/*

Author: Felipe Castro
Class: Wild.h
Information: Class to Implement An Abstract Class to Generate Multiple Kinds of Wild Animals

*/

// This means that this header file will only ever be included once in a specific destination file
#pragma once

// Define of the class
#ifndef WILD_H
#define WILD_H

// Included Animal.cpp to include the libraries
#include "../Definition Files/Dog.cpp"

class Wild : public Animal
{
protected:
    bool isUnderCaptivity;
    bool yearsUnderCaptivity;
    bool isAgressive;
    bool isPoisonous;

public:
    Wild();
    Wild(string Id, string Name, int Age, string Birthdate, string Sex, bool IsUnderCaptivity, bool YearsUnderCaptivity, bool IsAgressive, bool IsPoisonous);
    // Gets and Sets Methods
    void setUnderCaptivity(bool IsUnderCaptivity);
    void setYearsUnderCaptivity(bool YearsUnderCaptivity);
    void setIsAgressive(bool IsAgressive);
    void setIsPoisonous(bool IsPoisonous);
    const bool getUnderCaptivity();
    const bool getIsAgressive();
    const bool getIsPoisonous();
    const bool getYearsUnderCaptivity();
    // Methods
    virtual void sound() = 0;
    void captivityInformation();
    void escape();
    // Destructor
    ~Wild();
};
#endif