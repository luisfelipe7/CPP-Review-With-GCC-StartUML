/*

Author: Felipe Castro
Class: Menu.h
Information: Class to Manage the Principal and Secondary Menus and User.

*/

// Including the Class
#include "Algorithm.cpp"

using namespace std;

class Menu
{
    // Declaring the attributes for the class
private:
    string nameOfTheUser;
    int option;
    Cat cat1;
    Algorithm alg1;

    // Declaring the principal methods for the menu
public:
    // Constructors
    Menu();
    Menu(string NameOfTheUser, int Option);
    // Get and Set Methods
    string getNameOfTheUser();
    int getOption();
    void setNameOfTheUser(string NameOfTheUser);
    void setOption(int Option);
    // Principal methods for the interface
    void displayPrincipalMenu();
    void displayVetMenu();
    void dataStructuresMenu();
    void optionsForPrincipalMenu();
    void optionsForVetMenu();
    void menuCaller();
    void byeMessage();
    ~Menu();
};