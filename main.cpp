//Mission Marcus
// CS478: HW1
//Main.cpp: This file depicts how the main program is run. We first create a namevector, and output
// totalPopulation and className, then we push back a person object named 'ada' back into the vector
// we do it in this way to avoid creating copies. We then iterate the vector using reference.
//output totalpop and change the name to homo sapiens. add alan and iterate again. made a new object lynn,
// and dereference it and output population changes.
#pragma
#include "Person.h"
#include <vector>
#include <iostream>
#include <string>

int main()
{
	std::vector<Person> nameVector;

	std::cout << Person::totalPopulation() << "\n";
	std::cout << Person::className << "\n";

	nameVector.push_back(Person("Ada", "Lovelace")); // we do it this way, to avoid making unnecessary copies.

	for ( Person &a : nameVector) // iterate by reference.
	{
		a.sayName();
	}

	std::cout << Person::totalPopulation() << "\n";

	Person::changeName("Homo Sapiens");

	nameVector.push_back(Person("Alan", "Turing"));

	for ( Person &a : nameVector)
	{
		a.sayName();
	}

	std::cout << Person::totalPopulation() << "\n";
	std::cout << Person::className << "\n";

	Person *newP3 = new Person("Lynn", "Conway");
	newP3->sayName();
	std::cout << Person::totalPopulation() << "\n";
	delete newP3;
	std::cout << Person::totalPopulation() << "\n";

}
