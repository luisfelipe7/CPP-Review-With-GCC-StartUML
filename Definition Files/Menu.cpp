/*

Author: Felipe Castro
Class: Menu.h
Information: Class to Manage the Principal and Secondary Menus and User.

*/

// Including the Classes

#include "../Header Files/Menu.h"

// Defining the static attribute 
string Menu::NAME="Felipe Castro";

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

// ----------------- Principal Menus ---------------------

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
    case 1:
        quickAlgorithmsMenu();
        break;
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

// ----------------- Quick Algorithms Menu -------------------

void Menu::quickAlgorithmsMenu()
{

    system("cls");
    cout << "---------------------- Quick Algorithms ----------------------" << endl;
    cout << "-- Here are the available options:" << endl;
    cout << "1. Lower Numbers than Number1" << endl;
    cout << "2. Lower and Pair Numbers than Number1 " << endl;
    cout << "3. Ways to order people in rows equally" << endl;
    cout << "4. Verify if a number is perfect" << endl;
    cout << "5. Verify if two numbers are friends " << endl;
    cout << "6. Verify if a number is prime" << endl;
    cout << "7. Verify if a number is Armstrong" << endl;
    cout << "8. Verify if a number is Armstrong recursive" << endl;
    cout << "9. Obtain ULAM Conjecture" << endl;
    cout << "10. Obtain Factorial Recursive"<<endl;
    cout << "11. Obtain Fibonacci Value"<<endl;
    cout << "12. Check Discover Value"<<endl;
    cout << "13. Return to Main Menu" << endl;
    cout << "Please enter the number of the option:" << endl;
    cin >> option;
    system("cls");
    switch (option)
    {
    case 1:
        alg1.setNumber1(14);
        alg1.valuesSmallerThanNumber1();
        quickAlgorithmsMenu();
        break;
    case 2:
        alg1.valuesSmallerPairsThanNumber1();
        quickAlgorithmsMenu();
        break;
    case 3:
        alg1.waysToOrderInRowsPeople();
        quickAlgorithmsMenu();
        break;
    case 4:
        alg1.checkNumberIsPerfect();
        quickAlgorithmsMenu();
        break;
    case 5:
        alg1.checkAreFriends();
        quickAlgorithmsMenu();
        break;
    case 6:
        alg1.checkPrimeNumber();
        quickAlgorithmsMenu();
        break;
    case 7:
        alg1.checkArmstrong();
        quickAlgorithmsMenu();
        break;
    case 8:
        system("cls");
        cout << "---------------- Check if a number is Armstrong Recursive ----------------" << endl;
        cout << "-- Please enter the number that you want to verify: " << endl;
        cin >> option;
        if (alg1.checkArmstrongRecursive(option, 0, option))
        {
            cout << "The number entered is Armstrong" << endl;
        }
        else
        {
            cout << "The number entered is not Armstrong" << endl;
        }
        system("pause");
        quickAlgorithmsMenu();
        break;
    case 9:
        alg1.getUlamConjecture();
        quickAlgorithmsMenu();
        break;
    case 10:
        alg1.getFactorial();
        quickAlgorithmsMenu();
        break;
    case 11:
        alg1.getFibonacci();
        quickAlgorithmsMenu();
        break;
    case 12:
        alg1.getDiscover();
        quickAlgorithmsMenu();
        break;
    case 13:
        displayPrincipalMenu();
        break;
    default:
        system("cls");
        cout << "------------------ Error ------------------" << endl;
        cout << "Please enter a valid option" << endl;
        cout << endl;
        system("pause");
        quickAlgorithmsMenu();
        break;
    }
}

// ----------------- Data Structures Menu ---------------------

void Menu::dataStructuresMenu()
{
    system("cls");
    cout << "---------------------- Data Structures ----------------------" << endl;
    cout << "-- Here are the available options:" << endl;
    cout << "1. Pointers" << endl;
    cout << "2. Arrays" << endl;
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
        displayArrayMenu();
        break;
    case 3:
        // Pending to Implement
        break;
        // Pending to Implement
    case 4:
        displayPrincipalMenu();
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

// ----------------- ArraySP Menu ---------------------

void Menu::displayArrayMenu()
{
    system("cls");
    cout << "---------------------- Arrays ----------------------" << endl;
    cout << "-- These are the kind of arrays that we handle" << endl;
    cout << "1. Static with Primitive Data " << endl;
    cout << "2. Static with Objects" << endl;
    cout << "3. Return to Data Structures" << endl;
    cout << "Please enter the number of the option:" << endl;
    cin >> option;
    (option == 3) ? dataStructuresMenu() : optionsForArraySP();
}

void Menu::optionsForArraySP()
{
    system("cls");
    cout << "---------------------- Static with Primitive Data ----------------------" << endl;
    cout << "-- Array with Size 9, Here are the actions that you can do" << endl;
    cout << "1. Initialize the Array" << endl;
    cout << "2. Insert value at specific position" << endl;
    cout << "3. Insert value at first empty place" << endl;
    cout << "4. Remove value at specific position" << endl;
    cout << "5. Remove value on the Array" << endl;
    cout << "6. Print Array" << endl;
    cout << "7. Return to Arrays Menu" << endl;
    cout << "Please enter the number of the option:" << endl;
    cin >> option;
    (option == 7) ? displayArrayMenu() : modifyArraySP();
}

void Menu::modifyArraySP()
{
    system("cls");
    switch (option)
    {
    case 1:
        array1.initArraySP();
        break;
    case 2:
        array1.insertValueAtSpecificPosition();
        break;
    case 3:
        array1.insertValueAtEmptyPlace();
        break;
    case 4:
        array1.removeValueAtSpecificPosition();
        break;
    case 5:
        array1.removeValueOnTheArray();
        break;
    case 6:
        cout << "------------------------ Printing the Array ------------------------" << endl;
        array1.printArraySP();
        break;
    case 7:
        //Nothing to do here
        break;
    default:
        cout << "------------------ Error ------------------" << endl;
        cout << "Please enter a valid option" << endl;
        cout << endl;
        system("pause");
        break;
    }
    optionsForArraySP();
}

// ----------------- Veterinary Menu ---------------------

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
