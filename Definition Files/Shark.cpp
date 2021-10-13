/*

Author: Felipe Castro

Class: Shark.cpp

Information: Class to Implement a Wild Shark

*/

// Included Shark.h to include the libraries and definitions

#include "../Header Files/Shark.h"

// Constructors

Shark::Shark()
{
    speedKmH = 50;
    length = 4;
}

Shark::Shark(string Id, string Name, int Age, string Birthdate, string Sex, bool IsUnderCaptivity, bool YearsUnderCaptivity, bool IsAgressive, bool IsPoisonous, int SpeedKmH, int Length) : Wild(Id, Name, Age, Birthdate, Sex, IsUnderCaptivity, YearsUnderCaptivity, IsAgressive, IsPoisonous)
{
    speedKmH = SpeedKmH;
    length = Length;
}

// Get and Sets  Methods

void Shark::setSpeedKmH(int SpeedKmH)
{
    speedKmH = SpeedKmH;
}

void Shark::setLength(int Length)
{
    length = Length;
}

const int Shark::getSpeedKmH()
{
    return speedKmH;
}

const int Shark::getLength()
{
    return length;
}

// Methods

void Shark::sound()
{
    cout << "I don't make noise but I am attracted by the sound" << endl;
}

void Shark::eat(Animal &food)
{
    Animal *pAnimal = &food;

    if (Dog *pDog = dynamic_cast<Dog *>(pAnimal))
    {
        cout << "I am eating a Dog" << endl;
    }
    else
    {
        if (Shark *pShark = dynamic_cast<Shark *>(pAnimal))
        {
            cout << "I am eating a Shark" << endl;
        }
        else
        {
            cout << "I am eating a undefined Animal" << endl;
        }
    }
}

void Shark::getType()
{
    cout << "I am a shark" << endl;
}

void Shark::information()
{
    Wild::information();
    cout << "------------------- Shark Information ----------------" << endl;
    cout << "Speed Km/h: " << speedKmH << endl;
    cout << "Length m: " << length << endl;
}

// Destructor

Shark::~Shark()
{
    cout << "Destroying the shark" << endl;
}
