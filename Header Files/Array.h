/*

Author: Felipe Castro
Class: Array.h
Information: Class to Manage and Implement a Static Container with Primitive Data

*/

// This means that this header file will only ever be included once in a specific destination file
#pragma once 

// Define of the class
#ifndef ARRAY_H
#define ARRAY_H


// Including the Classes
#include "../Definition Files/Cat.cpp"
#include "../Definition Files/Dog.cpp"


class Array{
// Creating the attributes 
private:
int arraySP[9]; // Stactic Array to Save Primitive Data Ints 9 Values (From 0 to 8)
int sizeSP; // Handle the Size of the Array
int quantitySP; // Handle the quantity of data on the Array

public:
Array(); 
Array(int QuantitySP, int SizeSP);
void fillArraySP(int QuantitySP, int SizeSP);
int getQuantitySP();
void setQuantitySP(int QuantitySP);
//Methods to modify and handle the array
void printArraySP();
void insertElementAtEmptyPlaceSP(int ValueSP);
void insertElementAtPositionSP(int PositionSP, int ValueSP);
void deleteElementPositionSP(int PositionSP);
void deleteElementValueSP(int ValueSP);
void arraysTests();
//Methods to make requests and then call the methods to modify the arrays
void initArraySP();
void insertValueAtSpecificPosition();
void insertValueAtEmptyPlace();
void removeValueAtSpecificPosition();
void removeValueOnTheArray();
};

#endif