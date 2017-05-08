// MyOwn-string_Class.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <cstring>
#include "string_.h"


int main()
{
	string_ s1("Merry Christmas! "); // uses constratctor 2 (one argument)
	string_ s2 = "Seasons Greating!"; // alternate from of constructor 2
	string_ s3; // uses constracor 1

	std::cout << "s1 = "; 
	s1.display(); //display them all
	std::cout << std::endl;
	std::cout << "s2 = "; 
	s2.display();
	std::cout << std::endl;
	std::cout << "s3 = "; 
	s3.display();
	std::cout << " <-  Before asigment" << std::endl;


	s3 = s1; // assigment
	std::cout << "s1 + s3= "; 
	s3.display(); // display s3
	std::cout << std::endl;

	s3.concat(s2); // concatenation
	std::cout << "s3 + s2= ";
	s3.display(); // display s3
	std::cout << std::endl;
	 
	system("pause");
    return 0;
}

