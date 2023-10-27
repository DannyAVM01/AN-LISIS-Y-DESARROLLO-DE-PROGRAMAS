/**
 * @file FACTURA.cpp
 * @author Victorio Medina Danny Alejandro (dvictoriom1700@alumno.ipn.mx)
 * @boleta: 2023640637
 * @brief FACTURA
 * @version 1.0
 * @date 2023-10-27
 * @copyright Copyright (c) 2023
 */

#include <iostream>

using namespace std;

int main ()
{
    string codigo1, codigo2, descripcion1, descripcion2;
    int cantidad1 = 0, cantidad2 = 0;
    float PU1, PT1, PU2, PT2, SUBT, T, IVA;

    cout << "FACTURA" << endl;
    cout << "Ingrese el codido del producto 1: " << endl;
    getline (cin, codigo1);
    cout << "Ingrese la descripcion del producto 1: " << endl;
    getline (cin, descripcion1);
    cout << "Ingrese la cantidad del producto 1: " << endl;
    cin >> cantidad1;
    cout << "Ingrese la el precio unitario del producto 1: " << endl;
    cin >> PU1;

    getchar ();

    PT1 = (cantidad1)*(PU1);
    
    cout << "Ingrese el codido del producto 2: " << endl;
    getline (cin, codigo2);
    cout << "Ingrese la descripcion del producto 2: " << endl;
    getline (cin, descripcion2);
    cout << "Ingrese la cantidad del producto 2: " << endl;
    cin >> cantidad2;
    cout << "Ingrese la el precio unitario del producto 2: " << endl;
    cin >> PU2;

    PT2 = (cantidad2)*(PU2);
    SUBT = PT1 + PT2;
    IVA = SUBT * 0.16;
    T = (SUBT)+(IVA);

    cout << "Codigo \t Descripcion \t Cantidad \t Precio Unitario \t Precio \t" << endl;
    cout << codigo1 << "\t" << descripcion1 << "\t" << cantidad1 << "\t" << PU1 << "\t" << PT1 << endl;
    cout << codigo2 << "\t" << descripcion2 << "\t" << cantidad2 << "\t" << PU2 << "\t" << PT2 << endl;
    cout << "\t\t El subtotal es: " << SUBT << endl;
    cout << "\t\t El IVA es: " << IVA << endl;
    cout << "\t\t El total es: " << T << endl;

    return 0;
}