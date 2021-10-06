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

    cout << "------------------- Pointers------------------" << endl;
    cout << "--- Declared these variables" << endl;
    cout << "int *pA; \n pA = new int;  \n *pA = 4; \n int *pB; pB = new int; \n *pB = 110; \n int b = 84; \n"
         << endl;
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

// Print all the values smaller than number1

void Algorithm::valuesSmallerThanNumber1()
{
    system("cls");
    cout << "---------------- Values Smaller than Number1 ----------------" << endl;
    cout << "-- The value of Number1 is : " << number1 << endl;
    cout << "-- These values are smaller than Number1" << endl;
    for (int i = 0; i < number1; i++)
    {
        cout << "- " << i << endl;
    }
    system("pause");
}

// Print all the values smaller and pair than number1

void Algorithm::valuesSmallerPairsThanNumber1()
{
    system("cls");
    cout << "---------------- Values Smaller and Pair than Number1 ----------------" << endl;
    cout << "-- Please enter the value for Number1: " << endl;
    cin >> number1;
    cout << "-- These values are smaller and pair than Number1" << endl;
    for (int i = 0; i < number1; i++)
    {
        if (i % 2 == 0)
        {
            cout << "- " << i << endl;
        }
    }
    system("pause");
}

// Ways to order x people in rows equally
void Algorithm::waysToOrderInRowsPeople()
{
    system("cls");
    // Variable to save how many ways we can order the people
    int ways = 1;
    cout << "---------------- Order People In Rows Equally ----------------" << endl;
    cout << "-- Please enter the number of people that you want to order: " << endl;
    cin >> number2;
    cout << "-- These are the ways that you can order the people" << endl;
    for (int i = 1; i < number2; i++)
    {
        if (number2 % i == 0)
        {
            cout << ways << ". " << i << " Rows with " << (number2 / i) << " people" << endl;
            ways++;
        }
    }
    system("pause");
}

// Check if a number is perfect
void Algorithm::checkNumberIsPerfect()
{
    system("cls");
    int value = 0;
    cout << "---------------- Check if a number is perfect ----------------" << endl;
    cout << "-- Please enter the number that you want to verify: " << endl;
    cin >> number2;
    int i = 1;
    while (i < number2)
    {
        if (number2 % i == 0)
        {
            value += i;
        }
        i++;
    }

    if (value == number2)
    {
        cout << "The number " << number2 << " is perfect" << endl;
    }
    else
    {
        cout << "The number " << number2 << " is not perfect" << endl;
    }

    system("pause");
}

// Check if two numbers are friends
void Algorithm::checkAreFriends()
{
    system("cls");
    cout << "---------------- Check if two numbers are friends ----------------" << endl;
    cout << "-- Please enter the first number that you want to verify: " << endl;
    cin >> number1;
    cout << "-- Please enter the second number that you want to verify: " << endl;
    cin >> number2;

    int value1 = 0;
    int value2 = 0;

    for (int i = 1; i < number1 || i < number2; i++)
    {
        if ((number1 % i == 0) && (i < number1))
        {
            value1 += i;
        }
        if ((number2 % i == 0) && (i < number2))
        {
            value2 += i;
        }
    }

    if (value2 == number1 && value1 == number2)
    {
        cout << "The numbers are friends" << endl;
    }
    else
    {
        cout << "The numbers are not friends" << endl;
    }

    system("pause");
}

// Verify if a number is prime
void Algorithm::checkPrimeNumber()
{
    system("cls");
    cout << "---------------- Check if number is prime ----------------" << endl;
    cout << "-- Please enter the number that you want to verify: " << endl;
    cin >> number1;
    bool isPrime = true;
    for (int i = 1; (i < number1 && isPrime == true); i++)
    {
        if ((i != 1) && (number1 % i == 0))
        {
            isPrime = false;
        }
    }
    if ((isPrime) && (number1 != 1))
    {
        cout << "The number " << number1 << " is prime" << endl;
    }
    else
    {
        cout << "The number " << number1 << " is not prime" << endl;
    }

    system("pause");
}

// Verify if a number is Armstrong
void Algorithm::checkArmstrong()
{
    system("cls");
    cout << "---------------- Check if a number is Armstrong ----------------" << endl;
    cout << "-- Please enter the number that you want to verify: " << endl;
    cin >> number1;
    int quantityOfDigits = to_string(number1).length(); // Save the Original Quantity of Digits
    int value = 0;                                      // Save the value that we are creating
    int digit = 0;                                      // Save the actual digit
    int originalNumber = number1;                       // Saving the original number
    while (to_string(number1).length() != 1)
    {
        digit = number1 % 10;                  // Getting the digit
        number1 /= 10;                         // Updating the number without the previous digit
        value += pow(digit, quantityOfDigits); // Elevating the digit to the total of digits
    }
    value += pow(number1, quantityOfDigits); // Updating the value for the one digit

    if (value == originalNumber)
    {
        cout << "The number " << originalNumber << " is Armstrong" << endl;
    }
    else
    {
        cout << "The number " << originalNumber << " is not Armstrong" << endl;
    }
    system("pause");
}

// Verify if a number is Armstrong Recursive
bool Algorithm::checkArmstrongRecursive(int Number1, int SumOfValues, int NewNumber1)
{
    if (to_string(NewNumber1).length() == 1)
    {
        SumOfValues += pow(NewNumber1, to_string(Number1).length());
        if (SumOfValues == Number1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        SumOfValues += pow(NewNumber1 % 10, to_string(Number1).length());
        NewNumber1 /= 10;
        return checkArmstrongRecursive(Number1, SumOfValues, NewNumber1);
    }
}

// Verify ULAM Conjecture
void Algorithm::getUlamConjecture()
{
    system("cls");
    cout << "---------------- ULAM Conjecture ----------------" << endl;
    cout << "-- Please enter the value to get the conjecture: " << endl;
    cin >> number1;
    cout << "Here is your ULAM Conjecture : \n " << checkUlam(number1) << endl;
    system("pause");
}

// Get ULAM Conjecture Recursive
string Algorithm::checkUlam(int Value)
{
    if (Value == 1)
    {
        return "1";
    }
    else
    {
        if (Value % 2 == 0)
        {
            return to_string(Value) + " - " + checkUlam(Value / 2);
        }
        else
        {
            return to_string(Value) + " - " + checkUlam((Value * 3) + 1);
        }
    }
}

// Verify Factorial
void Algorithm::getFactorial()
{
    system("cls");
    cout << "---------------- Factorial ----------------" << endl;
    cout << "-- Please enter the value to get the factorial (!): " << endl;
    cin >> number1;
    cout << "Here is factorial : \n " << checkFactorialNPE() << endl;
    system("pause");
}

// Check Factorial Recursive with Parameter
int Algorithm::checkFactorial(int Value)
{
    if (Value <= 1)
    {
        return 1;
    }
    else
    {
        return Value * checkFactorial(Value - 1);
    }
}

// Check Factorial Recursive without Parameter and Using Two Variables
int Algorithm::checkFactorialNP()
{
    if (number1 <= 1)
    {
        return 1;
    }
    else
    {
        number2 = number1;
        number1 -= 1;
        return number2 * checkFactorialNP();
    }
}

// Check Factorial Recursive without Parameter and Using One Variable
int Algorithm::checkFactorialNPE()
{
    if (number1 <= 1)
    {
        return 1;
    }
    else
    {
        return number1-- * checkFactorialNP();
    }
}

// Request Fibonacci Value
void Algorithm::getFibonacci()
{
    system("cls");
    cout << "---------------- Fibonacci ----------------" << endl;
    cout << "-- Please enter the value to get the fibonacci: " << endl;
    cin >> number1;
    cout << "Here is fibonacci: \n " << checkFibonacci(number1) << endl;
    system("pause");
}

// Get Fibonacci Value
int Algorithm::checkFibonacci(int Value)
{
    if (Value <= 1)
    {
        return Value;
    }
    else
    {
        return checkFibonacci(Value - 1) + checkFibonacci(Value - 2);
    }
}

void Algorithm::getDiscover()
{
    system("cls");
    cout << "---------------- To Discover ----------------" << endl;
    cout << "-- Please enter the value to get the output: " << endl;
    cin >> number1;
    cout << "Here is output: \n " << checkDiscover() << endl;
    system("pause");
}

float Algorithm::checkDiscover()
{

    int i = 1, s = 0, n = 0;
    while (i <= number1)
    {
        if ((i % 2 == 0) && (number1 % i == 0))
        {
            n = n + 1;
            s = s + i;
        }
        i++;
    }
    return s / n;
}
