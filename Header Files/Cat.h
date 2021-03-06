/*

Author: Felipe Castro
Class: Cat.h
Information: Implement the Cat with multiple attributes and methods

*/

// This means that this header file will only ever be included once in a specific destination file
#pragma once 

// Define of the class
#ifndef CAT_H
#define CAT_H

// Including Libraries
#include <iostream>
#include <ctime>
#include <string>
#include <sstream>
#include <math.h>

using namespace std;

// Declaring the class Cat

class Cat
{
    // Attributes
private:
    string name;
    string birthDate;
    string ownerId;
    int birthMonth;
    int birthDay;
    int birthYear;

    // Methods
public:
    // Constructors
    Cat();
    Cat(string Name, int BirthMonth, int BirthDay, int BirthYear, string OwnerId);

    // Sets
    void setName(string Name);
    void setBirthDate(int BirthMonth, int BirthDay, int BirthYear);
    void setOwnerId(string OwnerId);

    // Gets
    string getName();
    string getBirthDate();
    string getOwnerID();

    // Other Methods
    int getAge();
    string getRequiredVaccine();
    void displayCatInformation();

    // Destructors
    ~Cat();
};

#endif