/**
 * @file FACTURA.cpp
 * @author Victorio Medina Danny Alejandro (dvictoriom1700@alumno.ipn.mx)
 * @brief ARCHIVO CABECERA DE LA CLASE "FACTURA"
 * @version 0.1
 * @date 2023-12-18
 */

#ifndef FACTURA_H
#define FACTURA_H

#include <iostream>
#include <string>

using namespace std;

class Factura 
{
    private:
        string fecha;
        int no_producto;
        int no_producto_perecedero;
        float total;

    public:

        Factura(string _fecha, int _no_producto, int _no_producto_perecedero)
            : fecha(_fecha), no_producto(_no_producto), no_producto_perecedero(_no_producto_perecedero) {}


    float calcular_total() 
    {
        
        float precio_producto = 50.0f;
        float precio_producto_perecedero = 70.0f;
        total = (no_producto * precio_producto) + (no_producto_perecedero * precio_producto_perecedero);
        return total;
    }
};

#endif
