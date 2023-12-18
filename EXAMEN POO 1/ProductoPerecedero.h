/**
 * @file PRODUCTO PERECEDERO.cpp
 * @author Victorio Medina Danny Alejandro (dvictoriom1700@alumno.ipn.mx)
 * @brief ARCHIVO CABECERA DE LA CLASE HIJA "PRODUCTO PERECEDERO"
 * @version 0.1
 * @date 2023-12-18
 */

#ifndef PRODUCTOPERECEDERO_H
#define PRODUCTOPERECEDERO_H

#include <iostream>
#include <string>
#include "Producto.h"

using namespace std;

class ProductoPerecedero : public Producto {
private:
    string fecha_caducidad;

public:
    ProductoPerecedero(string cod, string desc, float prec, int cant, string fecha)
        : Producto(cod, desc, prec, cant), fecha_caducidad(fecha) {}

    void mostrar_datos() const {
        Producto::mostrar_datos();
        cout << "Fecha de caducidad: " << fecha_caducidad << endl;
    }

    string get_codigo() const { return Producto::get_codigo(); }
    string get_descripcion() const { return Producto::get_descripcion(); }
    float get_precio() const { return Producto::get_precio(); }
    int get_cantidad() const { return Producto::get_cantidad(); }
    string get_fecha_caducidad() const { return fecha_caducidad; }
};

#endif