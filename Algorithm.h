/*

Author: Felipe Castro
Class: Algorithm.h
Information: Class to Implement Multiple Algorithms

*/

// Included Cat.h to include the libraries
#include "Cat.cpp"

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
void pointersTest();


};