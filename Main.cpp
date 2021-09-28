/*

Author: Felipe Castro
Class: Main.cpp

*/

#include <iostream>
#include <ctime>
#include <string>

// Classes
#include "Cat.cpp"

using namespace std;

// Implementing the classes

int main()
{
    // Declaring general variables
    string name = "";
    int birthDay = 0;
    int birthYear = 0;
    int birthMonth = 0;
    string ownerId = "";

    // Introduction and Requesting the necessary data
    cout << "Welcome to F-Veterinary" << endl;
    cout << "What is the name of your cat?" << endl;
    cin >> name;
    cout << "Thanks, could you please give us the birth date of your cat?" << endl;
    cout << "1. The birth day first:" << endl;
    cin >> birthDay;
    cout << "2. The month now:" << endl;
    cin >> birthMonth;
    cout << "3. And the year:" << endl;
    cin >> birthYear;
    cout << "Perfect, now we just need the ID of the person that you want to register as the owner:" << endl;
    cin >> ownerId;

    // Creating the object
    Cat cat1(name, birthMonth, birthDay, birthYear, ownerId);
    cat1.displayCatInformation();
    system("pause");
    cout << endl;
    cout << "Thanks for visiting us, take care!" << endl;

    return 0;
}