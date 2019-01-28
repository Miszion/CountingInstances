//Mission Marcus
// Person.cpp : This file contains basic functionality for the person class.
//
#pragma
#include "Person.h"
#include <iostream>
#include <vector>

int Person::population = 0; // static variables class name and population
std::string Person::className = "Person";


void Person:: sayName() // says the name of the character
{
	std::cout << firstName << " " << lastName << "\n";
}

Person::Person(std::string fN, std::string lN) // standard person constructor
{
	
	firstName = fN;
	lastName = lN;
	population++;
}



Person::Person() // default constructor
{
	firstName = "Mission";
	lastName = "Marcus";
	population++;
}

void Person::changeName(std::string changed) // change the name
{
	className = changed;
}

Person::~Person() //deconstructor.
{
	population--;
	
}

Person::Person(Person && other):firstName(std::move(other.firstName)), lastName(std::move(other.lastName)) // move constructor
{
	population++;
}

Person &Person::operator=(Person &&other) // operator method to set first name and last name.
{
	firstName = std::move(other.firstName);
	lastName = std::move(other.lastName);
	return *this;
}




Person::Person(const Person &pers) // copy constructor
{
		population++;

		firstName = pers.firstName;
		lastName = pers.lastName;

}

int Person::totalPopulation() // return the population
{
	return population;
}



