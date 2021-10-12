/*

Author: Felipe Castro

Class: Wild.cpp

Information: Class to Implement An Abstract Class to Generate Multiple Kinds of Wild Animals

*/

// Included Wild.h to include the libraries
#include "../Header Files/Wild.h"

Wild::Wild()
{
    isUnderCaptivity = false;
    yearsUnderCaptivity = 0;
    isAgressive = false;
    isPoisonous = false;
}

Wild::Wild(string Id, string Name, int Age, string Birthdate, string Sex, bool IsUnderCaptivity, bool YearsUnderCaptivity, bool IsAgressive, bool IsPoisonous) : Animal(Id, Name, Age, Birthdate, Sex)
{

    isUnderCaptivity = IsUnderCaptivity;
    yearsUnderCaptivity = YearsUnderCaptivity;
    isAgressive = IsAgressive;
    isPoisonous = IsPoisonous;
}

// Gets and Sets Methods

void Wild::setUnderCaptivity(bool IsUnderCaptivity)
{
    isUnderCaptivity = IsUnderCaptivity;
}

void Wild::setYearsUnderCaptivity(bool YearsUnderCaptivity)
{
    yearsUnderCaptivity = YearsUnderCaptivity;
}

void Wild::setIsAgressive(bool IsAgressive)
{
    isAgressive = IsAgressive;
}

void Wild::setIsPoisonous(bool IsPoisonous)
{
    isPoisonous = IsPoisonous;
}

const bool Wild::getUnderCaptivity()
{
    return isUnderCaptivity;
}

const bool Wild::getIsAgressive()
{
    return isAgressive;
}

const bool Wild::getIsPoisonous()
{
    return isPoisonous;
}

const bool Wild::getYearsUnderCaptivity()
{
    return isUnderCaptivity;
}

// Methods

void Wild::captivityInformation()
{
    stringstream textToPrint;
    if (isUnderCaptivity)
    {
        textToPrint << "The animal is under captivity" << endl;
        textToPrint << "For " << yearsUnderCaptivity << "years" << endl;
    }
    else
    {
        textToPrint << "The animal is not under captivity" << endl;
    }

    cout << textToPrint.str() << endl;
}

void Wild::escape(){
    cout << "I escaped"<<endl;
    isUnderCaptivity=false;
}

// Destructor

Wild::~Wild()
{
    cout << "Destroying the Wild Animal" << endl;
}
