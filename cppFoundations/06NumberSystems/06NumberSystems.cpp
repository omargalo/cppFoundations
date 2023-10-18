/*
- All data is represented by a bunch of grouped cells of 0's and 1's in memory
- As the range of your data grows, so will the number of digits you need to
  represent the data in memory
- Hexadecimal system makes it a little easier for humans to handle streams of
  data with 0's and 1's
- Octal has the same goal as Hexadecimal, but it's almost no longer used in
  modern times.
*/

#include<iostream>

int main() {

	/*
	Integers (int)
		- Stores decimals
		- Typically occupies 4 bytes or more in memory
	*/

	/*
	General form for declaring and initialize a variable:
	
		typename variable_name {initializer_value};
	
	*/

	int numero1 = 15; //Decimal
	int numero2 = 017; //Octal
	int numero3 = 0x0F; //Hexadecimal
	int numero4 = 0B00001111; //Binario desde C++14

	std::cout << "15 en Decimal es: " << numero1 << std::endl;
	std::cout << "017 en Octal es: " << numero2 << std::endl;
	std::cout << "0x0F en Hexadecimal es: " << numero3 << std::endl;
	std::cout << "0B00001111 en Binario es: " << numero4 << std::endl;

	// Inicialización de variables
	int contador1;		// Inicializa la variable con valores random
	int contador2{};	// Inicializa la variable en 0
	int contador3{10};	// Inicializa la variable en 10
	int contador4{7};	// Inicializa la variable en 7
	int contador5 = 13; // Assignment Initialization

	// Podemos usar una expresión como inicializador
	int contadores{ contador3 + contador4 };

	// Size of a type in memory
	std::cout << "Size of int in memory in bytes: " << sizeof(int) << std::endl;
		
	return 0;
}
