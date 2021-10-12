/*

Author: Felipe Castro
Class: Algorithm.h
Information: Class to Implement Multiple Algorithms

*/

// This means that this header file will only ever be included once in a specific destination file
#pragma once 

// Define of the class
#ifndef ALGORITHM_H
#define ALGORITHM_H

// Including Libraries
#include <iostream>
#include <ctime>
#include <string>
#include <sstream>
#include <math.h>

using namespace std;

class Algorithm {
private:
// Attributes to perform multiple algorithms
int number1;
int number2;
string word1;
string word2;

public:
// Constructors
Algorithm();
Algorithm(int Number1, int Number2, string Word1, string Word2);
// Gets/Sets
int getNumber1();
int getNumber2();
string getWord1();
string getWord2();
void setNumber1(int Number1);
void setNumber2(int Number2);
void setWord1(string Word1);
void setWord2(string Word2);
// Methods
// Method to make a test with the pointers
void pointersTest();
// Method to print all the values smaller than Number 1
void valuesSmallerThanNumber1();
// Method to print all the values smaller and pair than Number 1
void valuesSmallerPairsThanNumber1();
// Method to say how can we order x people in rows equally
void waysToOrderInRowsPeople();
// Method to verify if a number is perfect
void checkNumberIsPerfect();
// Method to verify if two numbers are friends
void checkAreFriends();
// Method to verify if a number is prime or not
void checkPrimeNumber();
// Method to verify if a number is Armstrong
void checkArmstrong();
// Method to verify if a number is Armstrong Recursive
bool checkArmstrongRecursive(int Number1, int SumOfValues, int NewNumber1);
// Methods to check ULAM Conjecture
void getUlamConjecture();
string checkUlam(int Value);
// Methods to get the Factorial from a Number
void getFactorial();
int checkFactorial(int Value);
int checkFactorialNP();
int checkFactorialNPE();
// Methods to get the Fibonnaci Succesion from a Number
void getFibonacci();
int checkFibonacci(int Value);
// Method to Discover
void getDiscover();
float checkDiscover();


};

#endif