/*
Asignación 2: Suma de dos fracciones
Nombre: Jorge Suris Zayas - jorgesz25
Núm. Est: 401-24-8161
Colaboraciones:
xxx
*/

// Este programa suma dos fracciones entrado por el usario. 

#include<iostream>

int main(){
  // Proposito + instrucciones
  std::cout << "Este programa suma dos fracciones.\n"
   << "Entre las fracciones en el formato a/b." << std::endl;

int a, b, c, d;

// Pedier fracciones 
std::cout << "Entre la primera fracción: ";
std::cin >> a; std::cin.ignore(); std::cin >> b; // a ignore("/") b

std::cout << "Entre la segunda fracción: ";
std::cin >> c; std::cin.ignore(); std::cin >> d;  // c ignore("/") d


// Suma = (ad+bc)/bd
// suma = num/den
// num = ad+bc, den = bd
int num, den;
num = a*d + b*c; den = b*d;

//Desplegar "Suma"
std::cout << "La suma de (" << a << "/" << b << " + "
  << c << "/" << d << ") es " << num << "/" << den << std::endl;

  return 0;
}
