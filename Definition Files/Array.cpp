/*

Author: Felipe Castro
Class: Array.h
Information: Class to Manage and Implement a Static Container with Primitive Data

*/

// Including the Classes
#include "../Header Files/Array.h"

Array::Array()
{
    quantitySP = 0;
    sizeSP = 9;
    for (int i = 0; i < sizeSP; i++)
    {
        arraySP[i] = 0;
    }
}
Array::Array(int QuantitySP, int SizeSP)
{
    fillArraySP(QuantitySP, SizeSP);
}

int Array::getQuantitySP()
{
    return quantitySP;
}
void Array::setQuantitySP(int QuantitySP)
{
    quantitySP = QuantitySP;
}

// Methods to Handle and Modify the ArraySP

void Array::fillArraySP(int QuantitySP, int SizeSP)
{
    int value = 2;
    quantitySP = 0;
    sizeSP = SizeSP;
    for (int i = 0; (i < SizeSP) && (quantitySP < QuantitySP); i++)
    {
        arraySP[i] = value;
        quantitySP++;
        value += 2;
    }
}
void Array::printArraySP()
{
    cout << "- Printing the Array : " << endl;
    for (int i = 0; i < sizeSP; i++)
    {
        cout << "arraySP[" << i << "]:" << arraySP[i] << endl;
    }
    cout << "- Size of the Array: " << sizeSP << " and Quantity: " << quantitySP << endl;
    system("pause");
    cout << endl;
}
void Array::insertElementAtEmptyPlaceSP(int ValueSP)
{
    bool inserted = false;
    if (!(quantitySP >= sizeSP))
    {
        for (int i = 0; (i < sizeSP) && (inserted == false); i++)
        {
            if (!(arraySP[i]))
            {
                arraySP[i] = ValueSP;
                setQuantitySP(quantitySP + 1);
                inserted = true;
                cout << "Inserted value on the array";
            }
        }
        if (!(inserted))
        {
            cout << "There are no empty places on the array" << endl;
        }
    }
    else
    {
        cout << "The value can't be inserted, the array is full" << endl;
    }
}

void Array::insertElementAtPositionSP(int PositionSP, int ValueSP)
{
    if (!(PositionSP >= sizeSP)) // Checking if the position is bigger than the size of the array
    {
        if (!(arraySP[PositionSP]))
        { // Checking if the position is empty
            quantitySP++;
        }
        arraySP[PositionSP] = ValueSP;
        cout << "Inserted the value at the position correctly" << endl;
    }
    else
    {
        cout << "The position that you are trying to insert is bigger than the size of the array" << endl;
    }
}

void Array::deleteElementPositionSP(int PositionSP)
{
    if (PositionSP < sizeSP)
    { // Checking if the position is bigger than the array size
        if (arraySP[PositionSP])
        { // Checking if the array is empty at that position
            arraySP[PositionSP] = 0;
            quantitySP--;
        }
        else
        {
            cout << "The position is already empty" << endl;
        }
    }
    else
    {
        cout << "The position is bigger than the size of the array" << endl;
    }
    system("pause");
}
void Array::deleteElementValueSP(int ValueSP)
{
    int found = 0;
    for (int i = 0; i < sizeSP; i++)
    {
        if (arraySP[i] == ValueSP)
        {
            arraySP[i] = 0;
            quantitySP--;
            found++;
        }
    }
    cout << "Removed the value on the array " << found << " times" << endl;
}

// Methods to Request the Information and Make the Changes

void Array::initArraySP()
{
    system("cls");
    int values = 0;
    cout << "------------------------ Initializing the Array ------------------------" << endl;
    cout << "How many initial values do you want the array to have?" << endl;
    cin >> values;
    fillArraySP(values, 9);
    printArraySP();
}

void Array::insertValueAtSpecificPosition()
{
    system("cls");
    int specificPosition = 0;
    int value = 0;
    cout << "------------------------ Inserting Value At Specific Position ------------------------" << endl;
    cout << "Enter the position of the value that you want to enter (0 to 9)" << endl;
    cin >> specificPosition;
    cout << "Please enter the value:" << endl;
    cin >> value;
    insertElementAtPositionSP(specificPosition, value);
    printArraySP();
}

void Array::insertValueAtEmptyPlace()
{
    system("cls");
    int value = 0;
    cout << "------------------------ Inserting Value At Empty Place ------------------------" << endl;
    cout << "Please enter the value:" << endl;
    cin >> value;
    insertElementAtEmptyPlaceSP(value);
    printArraySP();
}

void Array::removeValueAtSpecificPosition()
{
    system("cls");
    int specificPosition = 0;
    cout << "------------------------ Removing Value at Specific Position ------------------------" << endl;
    cout << "Enter the position of the value that you want to delete (0 to 9)" << endl;
    cin >> specificPosition;
    deleteElementPositionSP(specificPosition);
    printArraySP();
}

void Array::removeValueOnTheArray()
{
    system("cls");
    int value = 0;
    cout << "------------------------ Removing Specific Value ------------------------" << endl;
    cout << "Please enter the value that you want to remove on the array:" << endl;
    cin >> value;
    deleteElementValueSP(value);
    printArraySP();
}