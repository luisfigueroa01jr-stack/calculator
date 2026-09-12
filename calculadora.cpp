#include "calculadora.h"


double Calculator::suma(double a, double b) {
    return a + b;
}

double Calculator::resta(double a, double b){
    return a - b;
    }

double Calculator::multiplicacion(double a, double b){
    return a * b;
}

double Calculator::division(double a, double b){
    if (b == 0) {
        throw std::invalid_argument("Error: Division by zero");
    }
    return a / b;
}