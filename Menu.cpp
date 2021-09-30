/*

Author: Felipe Castro
Class: Menu.h
Information: Class to Manage the Principal and Secondary Menus and User.

*/

// Including the Classes

#include "Menu.h"

// Constructors
Menu::Menu()
{
    nameOfTheUser = "";
    option = 0;
}

Menu::Menu(string NameOfTheUser, int Option)
{
    nameOfTheUser = NameOfTheUser;
    option = Option;
}

// Get and Set Methods
string Menu::getNameOfTheUser()
{
    return nameOfTheUser;
}
int Menu::getOption()
{
    return option;
}
void Menu::setNameOfTheUser(string NameOfTheUser)
{
    nameOfTheUser = NameOfTheUser;
}
void Menu::setOption(int Option)
{
    option = Option;
}

// Principal methods for the interface
void Menu::displayPrincipalMenu()
{
    system("cls");
    cout << "---------------------- Welcome to this Review of C++ ----------------------" << endl;
    cout << "--- Main Menu --" << endl;
    cout << "-- C++ Review Implementing multiple Data Structures and Algorithms" << endl;
    cout << "-- Here are the available options:" << endl;
    cout << "1. Quick Algorithms" << endl;
    cout << "2. Data Structures" << endl;
    cout << "3. Visiting the Veterinary (Bonus Practice)" << endl;
    cout << "4. Exit" << endl;
    cout << "Please enter the number of the option:" << endl;
    cin >> option;
    (option == 4) ? byeMessage() : ((option == 3) ? displayVetMenu() : menuCaller());
}

void Menu::menuCaller()
{
    switch (option)
    {
    case 2:
        dataStructuresMenu();
        break;
    default:
        system("cls");
        cout << "------------------ Error ------------------" << endl;
        cout << "Please enter a valid option" << endl;
        cout << endl;
        system("pause");
        displayPrincipalMenu();
        break;
    }
}

void Menu::dataStructuresMenu()
{
    system("cls");
    cout << "---------------------- Data Structures ----------------------" << endl;
    cout << "-- Here are the available options:" << endl;
    cout << "1. Pointers" << endl;
    cout << "2. Vectors" << endl;
    cout << "3. Matrices" << endl;
    cout << "4. Return to Main Menu" << endl;
    cout << "Please enter the number of the option:" << endl;

    cin >> option;
    system("cls");

    switch (option)
    {
    case 1:
        alg1.pointersTest();
        dataStructuresMenu();
        break;
    case 2:
        // Pending to Implement
        break;
    case 3:
        // Pending to Implement
        break;
        // Pending to Implement
    case 4:
        displayPrincipalMenu();
        break;
        break;
    default:
        system("cls");
        cout << "------------------ Error ------------------" << endl;
        cout << "Please enter a valid option" << endl;
        cout << endl;
        system("pause");
        dataStructuresMenu();
        break;
    }
}

void Menu::displayVetMenu()
{
    system("cls");
    cout << "-------------- Welcome to F-Veterinary --------------" << endl;
    cout << "--- Vet Menu --" << endl;
    cout << "How can we help you? Please the number option" << endl;
    cout << "1. I need to register a cat." << endl;
    cout << "2. Check if my cat needs a vaccine." << endl;
    cout << "3. Retun to Main Menu" << endl;
    cin >> option;
    optionsForVetMenu();
}

void Menu::optionsForVetMenu()
{
    system("cls");
    string name = "";
    int birthDay = 0;
    int birthMonth = 0;
    int birthYear = 0;
    string ownerId = "";

    switch (option)
    {
    case 1:
        cout << "------------------ Registering Your Cat ------------------" << endl;
        cout << "What is the name of your cat?" << endl;
        cin >> name;
        cout << "Thanks, could you please give us the birth date of your cat?" << endl;
        cout << "1. The birth day first:" << endl;
        cin >> birthDay;
        cout << "2. The month now:" << endl;
        cin >> birthMonth;
        cout << "3. And the year:" << endl;
        cin >> birthYear;
        cout << "Perfect, now we just need the ID of the person that you want to register as the owner" << endl;
        cin >> ownerId;
        cat1.setName(name);
        cat1.setBirthDate(birthMonth, birthDay, birthYear);
        cat1.setOwnerId(ownerId);
        cat1.displayCatInformation();
        cout << endl;
        system("pause");
        displayVetMenu();
        break;
    case 2:
        cout << "------------------ Vaccines Required By Your Cat ------------------" << endl;
        cout << "Here is the information about the vaccines required by your cat" << endl;
        cout << cat1.getRequiredVaccine() << endl;
        cout << endl;
        system("pause");
        displayVetMenu();
        break;
    case 3:
        displayPrincipalMenu();
        break;
    default:
        cout << "------------------ Error ------------------" << endl;
        cout << "Please enter a valid option" << endl;
        cout << endl;
        system("pause");
        displayVetMenu();
        break;
    }
}

void Menu::byeMessage()
{
    system("cls");
    cout << "Thanks for using this program, take care!" << endl;
    system("pause");
}

// Destructor for the Class Called Menu
Menu::~Menu()
{
}
