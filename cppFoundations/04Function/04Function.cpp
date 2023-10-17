#include <iostream>

/*
- Functions are reusable pieces of code, statements grouped
  together to acomplish a goal
*/

// Funcion funcionSumar
int funcionSumar(int primer_numero, int segundo_numero) {
    int variableSuma = primer_numero + segundo_numero;
    return variableSuma;
}

int main(int argc, char **argv)
{
    int primerNumero {2};
    int segundoNumero {3};

    int sumar = primerNumero + segundoNumero;

    std::cout << "Suma desde main variable sumar: " << sumar << std::endl;
        
    sumar = funcionSumar(primerNumero, segundoNumero);
    std::cout << "Suma asignando valores de las variables en main a funcionSumar: " << sumar << std::endl;
    
    sumar = funcionSumar(3,6);
    std::cout << "Suma usando parametros en funcionSumar dentro de main: " << sumar << std::endl;
    
    std::cout << "Suma asignando valores de parametros al llamar la funcionSumar: " << funcionSumar(5,5) << std::endl;

    sumar = funcionSumar(12, 12);
    std::cout << "Suma asignando valores de parametros a la funcionSumar y asignandolos a variable sumar:" << sumar << std::endl;
    
    return 0;
}
