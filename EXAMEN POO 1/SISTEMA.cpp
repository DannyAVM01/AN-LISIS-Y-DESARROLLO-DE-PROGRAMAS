/**
 * @file SISTEMA.cpp
 * @author Victorio Medina Danny Alejandro (dvictoriom1700@alumno.ipn.mx)
 * @brief SISTEMA QUE GENERA LA FACTURA DE LOS PRODUCTOS Y PRODUCTOS PERECEDEROS
 * @version 0.1
 * @date 2023-12-18
 */

#include <iostream>
#include <string>
#include <vector>
#include "Producto.h"
#include "ProductoPerecedero.h"
#include "Factura.h"

using namespace std;

int main() 
{
    int cantidad_productos, cantidad_productos_perecederos;

    cout << "Ingrese la cantidad de productos no perecederos que va a llevar: ";
    cin >> cantidad_productos;

    cout << "Ingrese la cantidad de productos perecederos que va a llevar: ";
    cin >> cantidad_productos_perecederos;

    vector<Producto> productos;
    vector<ProductoPerecedero> productos_perecederos;


    for (int i = 0; i < cantidad_productos; ++i) 
    {
        string codigo, descripcion;
        float precio;
        int cantidad;

        cout << "\nIngrese los datos del producto no perecedero #" << i + 1 << ":\n";
        cout << "Codigo: ";
        cin >> codigo;
        cout << "Descripcion: ";
        cin.ignore();
        getline(cin, descripcion);
        cout << "Precio unitario: ";
        cin >> precio;
        cout << "Cantidad: ";
        cin >> cantidad;

        Producto producto(codigo, descripcion, precio, cantidad);
        productos.push_back(producto);
    }


    for (int i = 0; i < cantidad_productos_perecederos; ++i) 
    {
        string codigo, descripcion, fecha_cad;
        float precio;
        int cantidad;

        cout << "\nIngrese los datos del producto perecedero #" << i + 1 << ":\n";
        cout << "Codigo: ";
        cin >> codigo;
        cout << "Descripcion: ";
        cin.ignore();
        getline(cin, descripcion);
        cout << "Precio unitario: ";
        cin >> precio;
        cout << "Fecha de caducidad (dd/mm/aaaa): ";
        cin >> fecha_cad;
        cout << "Cantidad: ";
        cin >> cantidad;

        ProductoPerecedero producto_perecedero(codigo, descripcion, precio, cantidad, fecha_cad);
        productos_perecederos.push_back(producto_perecedero);
    }

    // Generar factura
    Factura factura("18/12/2023", cantidad_productos, cantidad_productos_perecederos);

    cout << "\n************ FACTURA ************\n";
    cout << "Codigo   Descripcion    Cantidad    Precio_Unitario    Precio\n";
    cout << "-------------------------------------------------------------\n";

    float subtotal = 0.0;
    for (const auto& producto : productos) {
        cout << producto.get_codigo() << "     " << producto.get_descripcion() << "       "
             << producto.get_cantidad() << "            " << producto.get_precio() << "           "
             << producto.get_cantidad() * producto.get_precio() << endl;
        subtotal += producto.get_cantidad() * producto.get_precio();
    }

    // Mostrar detalles de productos perecederos en la factura
    for (const auto& producto : productos_perecederos) {
        cout << producto.get_codigo() << "     " << producto.get_descripcion() << " - Caducidad: "
             << producto.get_fecha_caducidad() << "       "
             << producto.get_cantidad() << "            " << producto.get_precio() << "           "
             << producto.get_cantidad() * producto.get_precio() << endl;
        subtotal += producto.get_cantidad() * producto.get_precio();
    }

    float iva = subtotal * 0.16; // Se asume un IVA del 16%
    float total = subtotal + iva;

    cout << "-------------------------------------------------------------\n";
    cout << "Subtotal: " << subtotal << endl;
    cout << "IVA (16%): " << iva << endl;
    cout << "Total: " << total << endl;

    return 0;
}
