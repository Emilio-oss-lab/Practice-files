include <iostream>
#include <string> 

int main(){
    std::string nombre;
    std::string correo;
    int pin;
    int edad;

    
    std::cout << "Introduce tu nombre: ";
    std::getline(std::cin, nombre); 

    
    std::cout << "¡Hola! " << nombre << " Por favor, introduce tu edad: ";
    std::cin >> edad;

    if (edad >= 18) { 
        std::cout << "Por favor completa este campo para registrarse" << std::endl;
    } else {
        std::cout << "¡No eres mayor de edad, vuelve cuando cumplas con nuestros requisitos!" << std::endl;
        return 0; 
    }

    
    std::cout << "Introduce tu correo: ";
    std::cin.ignore(); 
    std::getline(std::cin, correo); 

    
    std::cout << "Ingresa un pin para la cuenta: ";
    std::cin >> pin;

    std::cout << "¡Bienvenido! " << nombre << ". Tu cuenta ha sido creada correctamente." << std::endl;

    return 0;
}
