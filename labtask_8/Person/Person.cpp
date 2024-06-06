#include "Person.h"
#include <iostream>
#include <string>

using namespace std;

// Default constructor
Person::Person()
{
    mWeight = 0.0f;
    mFirstName = "";
    mAge = 0;
}

Person::Person(string newName, float newWeight, int newAge)
{
    mWeight = newWeight;
    mFirstName = "";
    mAge = 0;
}

// Destructor
Person::~Person(){}

float Person::operator+(const Person& otherPerson)
{

    return mWeight + otherPerson.mWeight;
}