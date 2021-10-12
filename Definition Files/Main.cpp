/*

Author: Felipe Castro
Class: Main.cpp

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

// ----------- OTHER DOCUMENTATION ----------------------

/* -----------  Casting Information --------------------

Use dynamic_cast for converting pointers/references within an inheritance hierarchy.

Use static_cast for ordinary type conversions.

Use reinterpret_cast for low-level reinterpreting of bit patterns. Use with extreme caution.

Use const_cast for casting away const/volatile. Avoid this unless you are stuck using a const-incorrect API.

- Example of Dynamic Casting:

// Making some test with the new classes
Animal *animal1 = new Dog();
if (Dog *pDog = dynamic_cast<Dog*>(animal1))
{
    cout << "Value " << pDog->getHasPedigree() << endl;
}
delete animal1;
    system("pause");


*/

/* ------------ Static Array with Objects ----------------------------

Dog *dog1= new Dog();
Animal *ptrAnimal= dog1;
Shark arraySSO[9]; // Stactic Array to Save Static Objects 9 Values (From 0 to 9)
Shark s1("1", "Sharky", 12, "10-10-1005", "Male", false, 0, true, false, 200, 40);
arraySSO[0] = s1;
arraySSO[0].getType();
arraySSO[0].captivityInformation();
cout << arraySSO[0].getName() << endl;
arraySSO[0].sound();
arraySSO[0].escape();
arraySSO[0].eat(*ptrAnimal);
arraySSO[0].eat(arraySSO[0]);

*/