#ifndef SELECCION_H_INCLUDED
#define SELECCION_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

class SeleccionFutbol
{
    protected:
        int id;
        string nombre;
        string apellidos;
        int edad;

    public:
    SeleccionFutbol() {}
    SeleccionFutbol(int i, string n, string a, int e);

    void concentarse();
    void viajar();
};

SeleccionFutbol::SeleccionFutbol(int i, string n, string a, int e)
{
    id = i;
    nombre = n;
    apellidos = a;
    edad = e;
}

void SeleccionFutbol::concentarse()
{
    cout << "El equipo esta concentrandose." << endl;
}

void SeleccionFutbol::viajar()
{
    cout << "El equipo esta viajando." << endl;
}

#endif