/*

Author: Felipe Castro
Class: Cat.cpp
Information: Class to Implement the Constructor and Methods for the Cat Class.

*/

// Classes
#include "../Header Files/Cat.h"

using namespace std;

// Defining the methods and constructors

// Constructors
Cat::Cat()
{
    name = "";
    birthDate = "";
    ownerId = "";
    birthMonth = 0;
    birthDay = 0;
    birthYear = 0;
}

// Initializing the cat
Cat::Cat(string Name, int BirthMonth, int BirthDay, int BirthYear, string OwnerId)
{

    // Setting the name
    name = Name;
    // Creating the date with the int values, using this format month-day-year
    birthDate = birthDate.append(to_string(BirthMonth));
    birthDate = birthDate.append("-");
    birthDate = birthDate.append(to_string(BirthDay));
    birthDate = birthDate.append("-");
    birthDate = birthDate.append(to_string(BirthYear));
    // Setting the int values
    birthDay = BirthDay;
    birthMonth = BirthMonth;
    birthYear = BirthYear;

    // Setting the owner ID
    ownerId = OwnerId;
}

// Methods

//Set
void Cat::setName(string Name)
{
    name = Name;
}
void Cat::setBirthDate(int BirthMonth, int BirthDay, int BirthYear)
{
    // Creating the date with the int values, using this format month-day-year
    birthDate = birthDate.append(to_string(BirthMonth));
    birthDate = birthDate.append("-");
    birthDate = birthDate.append(to_string(BirthDay));
    birthDate = birthDate.append("-");
    birthDate = birthDate.append(to_string(BirthYear));
    // Setting the int values
    birthDay = BirthDay;
    birthMonth = BirthMonth;
    birthYear = BirthYear;
}
void Cat::setOwnerId(string OwnerId)
{
    ownerId = OwnerId;
}

// Get Methods
string Cat::getName()
{
    return name;
}
string Cat::getBirthDate()
{
    return birthDate;
}
string Cat::getOwnerID()
{
    return ownerId;
}

// Other Methods

int Cat::getAge()
{
    // Pending to implement
    return 0;
}
string Cat::getRequiredVaccine()
{

    time_t timeObject = time(nullptr);
    tm *const pTimeObject = localtime(&timeObject);
    int catAge = (1900 + pTimeObject->tm_year) - birthYear;
    switch (catAge)
    {
    case 1:
        return "The cat is requiring the Rabia vaccine";
        break;
    case 7:
        return "The cat is requiring the Calicivirosis vaccine";
        break;
    case 10:
        return "The cat is requiring the Peritonitis Infecciosa vaccine";
        break;
    default:
        return "The cat is not requiring vaccines at this time";
        break;
    }
}

// Method to display the cat information
void Cat::displayCatInformation()
{
    cout << endl;
    cout << "This is your cat information: " << endl;
    cout << endl;
    cout << "------------";
    cout << name << "------------" << endl;
    cout << "The owner ID is: " << ownerId << endl;
    cout << "The birthdate is: " << birthDate << endl;
}

// Destructor

Cat::~Cat()
{
    // Destroying the Cat Object
}