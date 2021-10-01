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

int Array::getQuantitySP()
{
    return quantitySP;
}
void Array::setQuantitySP(int QuantitySP)
{
    quantitySP = QuantitySP;
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
            cout << "The position is already empy" << endl;
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

void Array::arraysTests()
{
    cout << "------------------------ Arrays ------------------------" << endl;
    cout << "-- Stactic Array with Primite Values (in this case int)" << endl;
    cout << "a. Initialized array with size 9 (0 to 8) and entering 4 values" << endl;
    fillArraySP(4, 9);
    cout << "b. Printing the array" << endl;
    printArraySP();
    cout << "c. Inserting 540 at position 0" << endl;
    insertElementAtPositionSP(0, 540);
    cout << "d. Inserting 222 at position 8" << endl;
    insertElementAtPositionSP(8, 222);
    printArraySP();
    cout << "e. Inserting 45235 at the first empty place" << endl;
    insertElementAtEmptyPlaceSP(45235);
    printArraySP();
    cout << "f. Inserting 3333 at the first empty place" << endl;
    insertElementAtEmptyPlaceSP(3333);
    cout << "g. Inserting 45654 at the first empty place" << endl;
    insertElementAtEmptyPlaceSP(45654);
    printArraySP();
    cout << "h. Inserting 93243 at the first empty place" << endl;
    insertElementAtEmptyPlaceSP(93243);
    cout << "i. Inserting 120 at position 8" << endl;
    insertElementAtPositionSP(8, 120);
    cout << "j. Inserting 243 at position 2" << endl;
    insertElementAtPositionSP(2, 243);
    cout << "k. Inserting 243 at position 2" << endl;
    insertElementAtPositionSP(2, 243);
    cout << "l. Inserting 56546 at the first empty place" << endl;
    insertElementAtEmptyPlaceSP(56546);
    printArraySP();
    cout << "m. Deleting value at position 20" << endl;
    deleteElementPositionSP(20);
    cout << "n. Deleting value at position 4" << endl;
    deleteElementPositionSP(4);
    cout << "l. Deleting value at position 2" << endl;
    deleteElementPositionSP(2);

    printArraySP();
}
