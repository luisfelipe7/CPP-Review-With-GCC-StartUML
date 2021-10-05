/*

Author: Felipe Castro
Class: Algorithm.h
Information: Class to Implement Multiple Algorithms

*/

// Included Cat.h to include the libraries
#include "../Definition Files/Cat.cpp"

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

};