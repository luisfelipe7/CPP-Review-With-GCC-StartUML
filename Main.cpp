/*

Author: Felipe Castro
Class: Main.cpp

*/

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
    // While Option
    bool havingUser = true;
    // Menu Option
    int option = 0;
    string userAnswer = "";

    // Declaring the Cat to save the values
    Cat cat1;

    // Introduction and Requesting the necessary data
    while (havingUser)
    {
        // Testing Code Area - Pending to be removed

        ///

        cout << "-------------- Welcome to F-Veterinary --------------" << endl;
        cout << "How can we help you? Please enter an option" << endl;
        cout << "1. I need to register a cat." << endl;
        cout << "2. Check if my cat needs a vaccine." << endl;
        cin >> option;

        switch (option)
        {
        case 1:
            system("cls");
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
            cat1.setName(name);
            cat1.setBirthDate(birthMonth, birthDay, birthYear);
            cat1.setOwnerId(ownerId);
            cat1.displayCatInformation();
            cout << endl;
            system("pause");
            cout << endl;
            break;
        case 2:
            system("cls");
            cout << "Here is the information about the vaccines required by your cat" << endl;
            cout << cat1.getRequiredVaccine() << endl;
            cout << endl;
            system("pause");
            break;
        default:
            cout << "Please enter a valid option" << endl;
            break;
        }

        system("cls");

        cout << "Do you need anything else?" << endl;
        cin >> userAnswer;
        (userAnswer == "No" || userAnswer == "no") ? havingUser = false : havingUser = true;
    }

    cout << endl;
    cout << "Thanks for visiting us, take care!" << endl;
    cout << endl;
    system("pause");

    return 0;
}