#include "calculadora.h"

int main() {
    Calculator calc;
    IngresarValores ingresar;

    double a, b;
    int opcion;

    std::cout << "Seleccione una operacion:" << std::endl;
    std::cout << "1. Suma" << std::endl;
    std::cout << "2. Resta" << std::endl;
    std::cout << "3. Multiplicacion" << std::endl;
    std::cout << "4. Division" << std::endl;

    std::cin >> opcion;

    switch (opcion) {

        case 1:
            a = ingresar.ingresarValor();
            b = ingresar.ingresarValor();

            std::cout << "Suma: "
                      << calc.suma(a, b)
                      << std::endl;
            break;

        case 2:
            a = ingresar.ingresarValor();
            b = ingresar.ingresarValor();

            std::cout << "Resta: "
                      << calc.resta(a, b)
                      << std::endl;
            break;

        case 3:
            a = ingresar.ingresarValor();
            b = ingresar.ingresarValor();

            std::cout << "Multiplicacion: "
                      << calc.multiplicacion(a, b)
                      << std::endl;
            break;

        case 4:
            a = ingresar.ingresarValor();
            b = ingresar.ingresarValor();

            if (b != 0) {
                std::cout << "Division: "
                          << calc.division(a, b)
                          << std::endl;
            } else {
                std::cout << "No se puede dividir entre cero."
                          << std::endl;
            }
            break;

        default:
            std::cout << "Opcion no valida." << std::endl;
    }

    return 0;
}