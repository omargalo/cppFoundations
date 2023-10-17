/*
- A statement is a basic unit of computation in a C++ program
- Every C++ program is a collection of statements organized in
  a certain way to achieve some goal
- In C++ statements end with a semicolon (;)
- Statements are executed in order from top to bottom when the
  program runs
- Execution keeps going until there is a statement causing the
  program to terminate or run another sequence of statements
*/
#include<iostream>

int main(int argc, char** argv)
{
	int primerNumero = 13;
	int segundoNumero = 23;

	int suma = primerNumero + segundoNumero;

	std::cout << "La suma de ambos números es: " << suma << std::endl;

	return 0;
}
