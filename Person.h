//Mission Marcus
//Person.h file.
#pragma once
#include <string>


class Person
{
public:
	static std::string className;
	void sayName();
	Person();
	Person(std::string firstName, std::string lastName);
	Person(const Person &pers);
	~Person();
	Person(Person &&other);
	Person & operator=(Person && other);
	 static int totalPopulation();
	 static void changeName(std::string);

private:
	std::string firstName;
	std::string lastName;
	static int population;
};

