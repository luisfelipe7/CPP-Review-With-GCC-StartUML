/*

Author: Felipe Castro
Class:  Shark.h
Information: Implement a Shark inheriting from Wild

*/

// This means that this header file will only ever be included once in a specific destination file
#pragma once

// Define of the class
#ifndef SHARK_H
#define SHARK_H

// Included Shark.cpp to include the libraries
#include "../Definition Files/Wild.cpp"

class Shark : public Wild
{
private:
    int speedKmH;
    int length;
public:
    Shark();
    Shark(string Id, string Name, int Age, string Birthdate, string Sex, bool IsUnderCaptivity, bool YearsUnderCaptivity, bool IsAgressive, bool IsPoisonous, int SpeedKmH, int Length);
    // Get and Sets  Methods
    void setSpeedKmH(int SpeedKmH);
    void setLength(int Length);
    const int getSpeedKmH();
    const int getLength();
    // Methods
    void sound();
    void eat(Animal &food);
    void getType();
    void information();
    // Destructor
    ~Shark();
};
#endif