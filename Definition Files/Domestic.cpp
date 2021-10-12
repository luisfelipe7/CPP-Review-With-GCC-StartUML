/*

Author: Felipe Castro
Class: Domestic.cpp
Information: Class to Implement a Dog inheriting from Domestic

*/

// Included Domestic.h to include the libraries and definitions
#include "../Header Files/Domestic.h"

// Constructor
Domestic::Domestic()
{
    cout << "Creating the Domestic Animal" << endl;
    hasAnOwner = false;
    underAdoption = true;
    price = 0.10;
}
Domestic::Domestic(string Id, string Name, int Age, string Birthdate, string Sex, bool HasAnOwner, bool UnderAdoption, double Price) : Animal(Id, Name, Age, Birthdate, Sex)
{
    hasAnOwner = HasAnOwner;
    underAdoption = UnderAdoption;
    price = Price;
}

// Methods
void Domestic::play()
{
    cout << "I am playing " << endl;
}

void Domestic::move()
{
    cout << "I am walking with my paws" << endl;
}

void Domestic::receiveOrder(int Order)
{
    switch (Order)
    {
    case 1:
        sleep();
        break;
    case 2:
        eat();
        break;
    case 3:
        move();
        break;
    default:
        cout << "I don't understand your order...." << endl;
        break;
    }
}

// Gets and Sets Methods
const bool Domestic::getHasAnOwner()
{
    return hasAnOwner;
}
const bool Domestic::getUnderAdoption()
{
    return underAdoption;
}
const double Domestic::getPrice()
{
    return price;
}
void Domestic::setHasAnOwner(bool HasAnOwner)
{
    hasAnOwner = HasAnOwner;
}
void Domestic::setUnderAdoption(bool UnderAdoption)
{
    underAdoption = UnderAdoption;
}
void Domestic::setPrice(double Price)
{
    price = Price;
}

// Destructor
Domestic::~Domestic()
{
    cout << "Destroying the Domestic Animal" << endl;
}