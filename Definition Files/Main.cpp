/*

Author: Felipe Castro
Class: Main.cpp
Information: Class to Implement and Call the Menu

*/

// Classes
#include "../Definition Files/Menu.cpp"

using namespace std;

// Implementing the classes

int main()
{
    // Declaring the Menu to start the program
    try
    {
        Menu menu1;
        menu1.displayPrincipalMenu();
    }
    catch (const std::exception &e)
    {
        cout << e.what() << endl;
    }

    system("pause");

    return 0;
}
