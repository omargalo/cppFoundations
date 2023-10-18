/*
std::cout		Printing data to the console(terminal)
std::cin		Reading data from the terminal
std::cerr		Printing errors to the console
std::clog		Printing log messages to the console
*/

#include<iostream>
#include<string>

int main() {
	// Mostrando datos al usuario
	std::cout << "¡Hola Evelyn!" << std::endl;

	int age{ 9 };
	std::cout << "Edad: " << age << std::endl;

	std::cerr << "Mensaje de error: Algo ha salido mal" << std::endl;
	std::clog << "Mensaje Log: Algo ha pasado" << std::endl;

	// Obteniendo datos del usuario
	int edad;
	std::string nombre;

	std::cout << "Ingresa tu nombre y tu edad:" << std::endl;

	//std::cin >> nombre;
	//std::cin >> edad;
	/*
	// A better way
	std::cin >> nombre >> edad;
	// std::cin Does not accept spaces
	*/

	// Data with spaces

	std::getline(std::cin, nombre);
	std::cin >> edad;
	
	std::cout << "¡Hola " << nombre 
			<< ", tienes " << edad << " años!" << std::endl;

	return 0;
}
