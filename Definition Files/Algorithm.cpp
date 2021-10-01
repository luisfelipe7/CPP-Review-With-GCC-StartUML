/*

Author: Felipe Castro
Class: Algorithm.h
Information: Class to Implement Multiple Algorithms

*/

#include "../Header Files/Algorithm.h"

// Constructors
Algorithm::Algorithm()
{
}
Algorithm::Algorithm(int Number1, int Number2, string Word1, string Word2)
{
}

// Gets/Sets
int Algorithm::getNumber1()
{
    return number1;
}
int Algorithm::getNumber2()
{
    return number2;
}
string Algorithm::getWord1()
{
    return word1;
}
string Algorithm::getWord2()
{
    return word2;
}

void Algorithm::setNumber1(int Number1)
{
    number1 = Number1;
}
void Algorithm::setNumber2(int Number2)
{
    number2 = Number2;
}
void Algorithm::setWord1(string Word1)
{
    word1 = Word1;
}
void Algorithm::setWord2(string Word2)
{
    word2 = Word2;
}

// Methods

// Playing and Testing Pointers:
void Algorithm::pointersTest()
{
    // Testing the dynamic instantiation (Pointers)

    // With Variables (Pointers)
    int *pA;
    pA = new int;
    *pA = 4;

    int *pB;
    pB = new int;
    *pB = 110;

    int b = 84;

    cout << "------------------ Playing with Pointers------------------" << endl;
    cout << "--- Declared these variables" << endl;
    cout << "int *pA; \n pA = new int;  \n *pA = 4; \n int *pB; pB = new int; \n *pB = 110; \n int b = 84; \n"<< endl;
    cout << "--- Test 1:" << endl;
    cout << "Value of *pA " << *pA << endl;
    cout << "Value of pA " << pA << endl;
    cout << "Value of &pA " << &pA << endl;
    system("pause");
    cout << endl;

    // Always delete the pointer before assigning  Values
    *pA = b;

    cout << "--- Test 2:" << endl;
    cout << "Applied *pA = b (b=84)" << endl;
    cout << "Value of *pA " << *pA << endl;
    cout << "Value of pA " << pA << endl;
    cout << "Value of &pA " << &pA << endl;
    cout << "Value of b " << b << endl;
    cout << "Value of &b " << &b << endl;
    cout << endl;
    system("pause");
    // We need to free up the space prior to assign any other Values dinamically
    delete pA;
    cout << endl;

    cout << "--- Test 3:" << endl;
    pA = new int;
    *pA = 35;
    cout << "Applied pa = new int then *pA=35" << endl;
    cout << "Value of *pA " << *pA << endl;
    cout << "Value of pA " << pA << endl;
    cout << "Value of &pA " << &pA << endl;
    cout << endl;
    system("pause");

    delete pA;

    // -- This will generate an error, we can't use delete if we did not use  and we just use pB = &pb delete pB;
    cout << "--- Test 4:" << endl;
    cout << "Value of *pB " << *pB << endl;
    cout << "Value of pB " << pB << endl;
    cout << "Value of &pB " << &pB << endl;
    cout << endl;
    system("pause");

    cout << "--- Test 5:" << endl;
    pB = &b;
    cout << "Applied pB = &b" << endl;
    cout << "Value of *pB " << *pB << endl;
    cout << "Value of pB " << pB << endl;
    cout << "Value of &pB " << &pB << endl;
    cout << endl;
    system("pause");

    cout << "--- Test 6:" << endl;
    b = 600;
    cout << "Applied b=600" << endl;
    cout << "Value of b " << b << endl;
    cout << "Value of &b " << &b << endl;
    cout << "Value of *pB " << *pB << endl;
    cout << "Value of &pB " << &pB << endl;
    cout << "Value of pB " << pB << endl;
    cout << endl;
    system("pause");

    // Testing With Classes
    // -- This a pointer to the class Cat
    cout << "--- Declared this class" << endl;
    cout << "Cat *pCat = new Cat('Felix', 10, 07, 1997, '116890358');" << endl;
    Cat *pCat = new Cat("Felix", 10, 07, 1997, "116890358");
    cout << "pCat " << pCat << endl;
    pCat->displayCatInformation();
    system("pause");
    /* 
    -- This will generate an error because we free up the space
    delete pCat;
    cout << "pCat " << pCat << endl;
    pCat->displayCatInformation();
    cout << endl;
    */
}