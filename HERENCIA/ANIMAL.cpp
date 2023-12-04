/**
 * @file ANIMAL.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-12-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "HERVIVORO.h"

int main()
{
    class Hervivoro jirafa;
    jirafa.color = "Amarillo y Cafe";
    jirafa.peso = 200;
    cout << "El color de la jirafa es: " << jirafa.color << "\nEl peso de la jirafa es: " << jirafa.peso << "Kg\n" << endl;
    jirafa.esconderse();
    jirafa.dormir();

    class Carnivoro leon;
    leon.color = "Amarillo y Cafe";
    leon.peso = 500;
    cout << "El color del leon es: " << leon.color << "\nEl peso del leon es: " << leon.peso << "Kg\n" << endl;
    leon.Cazar();
    leon.correr();
}