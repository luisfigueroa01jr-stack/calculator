#ifndef CALCULADORA_H
#define CALCULADORA_H
#include <iostream>


class Calculator {
    public:
    double suma(double a, double b);
    double resta(double a, double b);
    double multiplicacion(double a, double b);
    double division(double a, double b);

};

class IngresarValores {
    public:
    double ingresarValor() {
        double valor;
        std::cout << "Ingrese un valor: ";
        std::cin >> valor;
        return valor;
    }
};

#endif