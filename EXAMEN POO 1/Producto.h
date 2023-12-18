/**
 * @file PRODUCTO.cpp
 * @author Victorio Medina Danny Alejandro (dvictoriom1700@alumno.ipn.mx)
 * @brief ARCHIVO CABECERA DE LA CLASE PADRE "PRODUCTO"
 * @version 0.1
 * @date 2023-12-18
 */

#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
#include <string>

using namespace std;

class Producto {
private:
    string codigo;
    string descripcion;
    float precio;
    int cantidad;

public:
    Producto(string cod, string desc, float prec, int cant)
        : codigo(cod), descripcion(desc), precio(prec), cantidad(cant) {}

    void mostrar_datos() const {
        cout << "Codigo: " << codigo << endl;
        cout << "Descripcion: " << descripcion << endl;
        cout << "Precio: " << precio << endl;
        cout << "Cantidad: " << cantidad << endl;
    }

    string get_codigo() const { return codigo; }
    string get_descripcion() const { return descripcion; }
    float get_precio() const { return precio; }
    int get_cantidad() const { return cantidad; }
};

#endif
