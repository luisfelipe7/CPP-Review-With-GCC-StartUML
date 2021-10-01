/*

Author: Felipe Castro
Class: Menu.h
Information: Class to Manage the Principal and Secondary Menus and User.

*/

// Including the Class
#include "../Definition Files/Array.cpp"

using namespace std;

class Menu
{
    // Declaring the attributes for the class
private:
    string nameOfTheUser;
    int option;
    Cat cat1;
    Algorithm alg1;
    Array array1;

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
    // Principal Menu
    void displayPrincipalMenu();
    // Veterinary Menu
    void displayVetMenu();
    // Array Menu
    void displayArrayMenu();
    // Data Structure Menu
    void dataStructuresMenu();
    // Options to Modify Array SP
    void optionsForArraySP();
    // Calling the Methods to Modify the Array SP
    void modifyArraySP();
    // Calling the Methods for the principal menu
    void optionsForPrincipalMenu();
    // Available options on the Veterinary
    void optionsForVetMenu();
    // In charge of calling the right menu
    void menuCaller();
    void byeMessage();
    ~Menu();
};