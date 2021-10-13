/*

Author: Felipe Castro
Class: Array.h
Information: Class to Manage and Implement and:

Static array with primitive data.
Dynamic array with dynamic objects.

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

// Methods for the Animals Array

void Array::initializeArrayA()
{
    system("cls");
    cout << "------------------------ Initializing the Animals Array ------------------------" << endl;
    cout << "Please indicate the quantity of animals that you want to have on the array" << endl;
    cout << "Enter the number:" << endl;
    cin >> sizeA;
    animals = new Animal *[sizeA];
    bool insert = true;
    while (insert)
    {
        cout << "Do you want to insert an animal?" << endl;
        cout << "Enter 0(No) and 1(Yes):" << endl;
        cin >> insert;
        if (insert && (quantityA != sizeA))
        {
            insertAnimal();
        }
    }
}
const int Array::getSizeA()
{
    return sizeA;
}
const int Array::getQuantityA()
{
    return quantityA;
}
void Array::setSizeA(int SizeA)
{
    sizeA = SizeA;
}
void Array::setQuantityA(int QuantityA)
{
    quantityA = QuantityA;
}

void Array::insertAnimal()
{
    int option = 0;
    system("cls");
    cout << "------------------------ Inserting an Animal ------------------------" << endl;
    cout << "Please indicate if you want to insert a Dog or a Shark" << endl;
    cout << "Enter 0(Dog) or 1(Shark):" << endl;
    cin >> option;
    if (option == 1)
    {
        insertShark();
    }
    else
    {
        insertDog();
    }
    system("pause");
    system("cls");
}

void Array::insertShark()
{
    system("cls");
    string tempS = "";
    int tempI = 0;
    bool tempB = false;
    Shark *shark1 = new Shark();
    cout << "------------------------ Inserting a Shark ------------------------" << endl;
    cout << "Please enter the Id for the shark" << endl;
    cin >> tempS;
    shark1->setId(tempS);
    cout << "Please enter the Name for the shark" << endl;
    cin >> tempS;
    shark1->setName(tempS);
    cout << "Please enter the BirthDate for the shark" << endl;
    cin >> tempS;
    shark1->setBirthDate(tempS);
    cout << "Please enter the Sex for the shark" << endl;
    cin >> tempS;
    shark1->setSex(tempS);
    cout << "Please enter the age for the shark" << endl;
    cin >> tempI;
    shark1->setAge(tempI);
    cout << "Please enter if the shark is under captivity" << endl;
    cin >> tempB;
    shark1->setUnderCaptivity(tempB);
    cout << "Please enter the years under captivity" << endl;
    cin >> tempI;
    shark1->setYearsUnderCaptivity(tempI);
    cout << "Please enter if the shark is aggresive" << endl;
    cin >> tempB;
    shark1->setIsAgressive(tempB);
    cout << "Please enter if the shark is poisonous" << endl;
    cin >> tempB;
    shark1->setUnderCaptivity(tempB);
    cout << endl;

    //Inserting the Shark
    animals[quantityA] = shark1;
    quantityA++;

    cout << "Animal inserted sucessfully to the array!" << endl;
    cout << "Information about the animal inserted:" << endl;
    animals[quantityA - 1]->information();
}
void Array::insertDog()
{
    system("cls");
    string tempS = "";
    int tempI = 0;
    double tempD = 0;
    bool tempB = false;
    Dog *dog1 = new Dog();
    cout << "------------------------ Inserting a Dog ------------------------" << endl;
    cout << "Please enter the Id for the dog" << endl;
    cin >> tempS;
    dog1->setId(tempS);
    cout << "Please enter the Name for the dog" << endl;
    cin >> tempS;
    dog1->setName(tempS);
    cout << "Please enter the BirthDate for the dog" << endl;
    cin >> tempS;
    dog1->setBirthDate(tempS);
    cout << "Please enter the Sex for the dog" << endl;
    cin >> tempS;
    dog1->setSex(tempS);
    cout << "Please enter the age for the dog" << endl;
    cin >> tempI;
    dog1->setAge(tempI);
    cout << "Please enter if the dog has an owner" << endl;
    cin >> tempB;
    dog1->setHasAnOwner(tempB);
    cout << "Please enter if the dog is under adoption" << endl;
    cin >> tempB;
    dog1->setUnderAdoption(tempB);
    cout << "Please enter the price for the dog" << endl;
    cin >> tempD;
    dog1->setPrice(tempD);
    cout << "Please enter the race of the dog" << endl;
    cin >> tempS;
    dog1->setRace(tempS);
    cout << endl;

    //Inserting the Dog1
    animals[quantityA] = dog1;
    quantityA++;
    cout << "Animal inserted sucessfully to the array!" << endl;
    cout << "Information about the animal inserted:" << endl;
    animals[quantityA - 1]->information();
}

void Array::printArrayA()
{
    system("cls");
    cout << "------------------------ Print Animals Array ------------------------" << endl;
    cout << "Size of the Array " << sizeA << endl;
    cout << "Quantity of the Array " << quantityA << endl;
    cout << "Animals on the Array: " << endl;
    for (int i = 0; i < quantityA; i++)
    {
        cout << endl;
        cout << "Animal[" << i << "]" << endl;
        animals[i]->information();
    }
    system("pause");
}

void Array::deleteElementA()
{
    system("cls");
    int position = 0;
    cout << "------------------------ Delete Animal ------------------------" << endl;
    cout << "Please enter the position of the animal that you want to delete" << endl;
    cin >> position;
    if (animals[position] == nullptr)
    {
        cout << "The position entered is already empty" << endl;
    }
    else
    {
        animals[position] = nullptr;
        cout << "The object on the position entered was deleted" << endl;
        quantityA--;
    }
    system("pause");
}