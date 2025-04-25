// Calculadora.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    double x = 0;
    double y = 0;

    cout << "Ingrese el valor de x: ";
    cin >> x;

    cout << "Ingrese el valor de y: ";
    cin >> y;

    if (y==0){ 
        cout << "Error, no se puede dividir por 0";
    }else {
        double suma = x + y;
        double resta = x - y;
        double mult = x * y;
        double div = x / y;

        cout << "\nLa suma es: " << suma;
        cout << "\nLa resta es: " << resta;
        cout << "\nLa multiplicacion es: " << mult;
        cout << "\nLa division es: " << div;

    }

    std::cout << "\nHello World!\n";
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
