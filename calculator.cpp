#include <iostream>
#include <math.h>

int main() { 
    int num1, num2;   
    char operador;    

  
    std::cout << "Ingrese el primer numero: ";
    std::cin >> num1;

    
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> num2;

   
    std::cout << "Ingrese el operador(+, -, *, /): ";
    std::cin >> operador;

    
    switch(operador) {
        case '+':
            std::cout << "El resultado es: " << num1 + num2 << std::endl;
            break;

        case '-':
            std::cout << "El resultado es: " << num1 - num2 << std::endl;
            break;

        case '*':
            std::cout << "El resultado es: " << num1 * num2 << std::endl;
            break;

        case '/':
            if (num2 != 0) {
                std::cout << "El resultado es: " << num1 / num2 << std::endl;
            } else {
                std::cout << "No se puede dividir entre cero." << std::endl;
            }
            break;

        default:
            std::cout << "Operador invalido." << std::endl;
    } 

    return 0;
}
