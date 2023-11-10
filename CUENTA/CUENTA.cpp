/**
 * @file CUENTA.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-11-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>

using namespace std;

class Cuenta
{
public:
    float saldo = 0.0;

    void depositar()
    {
        float depositar;
        cout << "\t\t DEPOSITAR " << endl;
        cout << "Ingrese la cantidad que desea depositar: " << endl;
        cin >> depositar;
        saldo = saldo + depositar;
        cout << "Su saldo es de:  " << saldo << endl;
    }

    void retirar()
    {
        float retirar;
        cout << "Cuanto desea retirar?" << endl;
        cin >> retirar;

        if (saldo < retirar)
        {
            cout << "No tiene el saldo suficiente." << endl;
        }
        else
        {
            saldo = saldo - retirar;
            cout << "Su saldo es de: " << saldo << endl;
        }
    }

    void obtener_saldo()
    {
        cout << "\t\tSALDO" << endl;
        cout << "Su saldo actual es de: " << saldo << endl;
    }
};

int main()
{
    int opcion;
    Cuenta C1;

    do
    {
        cout << "\t\tMENU " << endl;
        cout << "1.- Depositar" << endl;
        cout << "2.- Retirar" << endl;
        cout << "3.- Consultar saldo" << endl;
        cout << "4.- Salir" << endl;
        cout << "Ingrese su opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            C1.depositar();
            break;
        case 2:
            C1.retirar();
            break;
        case 3:
            C1.obtener_saldo();
            break;
        case 4:
            cout << "Usted ha salido." << endl;
            break;
        default:
            cout << "No es una opcion valida." << endl;
            break;
        }
    } while (opcion != 4);

    return 0;
}
