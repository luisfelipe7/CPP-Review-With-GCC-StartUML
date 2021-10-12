/*

Author: Felipe Castro
Class: Animal.h
Information: Class to Implement An Abstract Class to Generate Multiple Kinds of Animals

*/

// This means that this header file will only ever be included once in a specific destination file
#pragma once

// Define of the class
#ifndef ANIMAL_H
#define ANIMAL_H

// Including Libraries
#include <iostream>
#include <ctime>
#include <string>
#include <sstream>
#include <math.h>

class Animal
{
protected:
    string id;
    string name;
    int age;
    string birthDate;
    string sex;

public:
    // Constructors
    Animal();
    Animal(string Id, string Name, int Age, string Birthdate, string Sex);
    // Methods
    void eat();
    void sleep();
    void move();
    // Virtual Pure Methods
    virtual void sound() = 0;
    virtual void getType() = 0;
    // Get and Sets Methods
    const string getId();
    const string getName();
    const int getAge();
    const string getBirthDate();
    const string getSex();
    void setId(string Id);
    void setName(string Name);
    void setAge(int Age);
    void setBirthDate(string Birthdate);
    void setSex(string Sex);
    // Destructor
    ~Animal();
};

#endif