/*

Author: Felipe Castro
Class: Menu.h
Information: Manage the principal and secondaries menus

*/

// This means that this header file will only ever be included once in a specific destination file
#pragma once 

// Define of the class
#ifndef MENU_H
#define MENU_H


// Including Libraries
#include <iostream>
#include <ctime>
#include <string>
#include <sstream>
#include <math.h>

// Including the Classes
#include "../Definition Files/Array.cpp"
#include "../Definition Files/Algorithm.cpp"

// Example of Global variable
#define CREATOR FELIPE_CASTRO

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
    static string NAME;

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
    // Quick Algorithms Menu
    void quickAlgorithmsMenu();
    // Options to Modify/Create the Array A
    void optionsArrayA();
    // Calling the methods to modify the Array A
    void modifyArrayA();
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

#endif