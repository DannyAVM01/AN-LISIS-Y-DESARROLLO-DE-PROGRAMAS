#ifndef CASA_H
#define CASA_H

#include <string>
#include <iostream>

using namespace std;

class Casa {
private:
    string ubicacion;
    int numHabitaciones;
    int numHuespedes;
    string fechaLlegada;
    string fechaSalida;
    bool estaRentada;

public:
    Casa(string ubicacion, int numHabitaciones, int numHuespedes,
         string fechaLlegada = "", string fechaSalida = "")
        : ubicacion(ubicacion), numHabitaciones(numHabitaciones),
          numHuespedes(numHuespedes), fechaLlegada(fechaLlegada),
          fechaSalida(fechaSalida), estaRentada(false) {}

    virtual void mostrarInformacion() const {
        cout << "Ubicacion: " << ubicacion << endl;
        cout << "Numero de habitaciones: " << numHabitaciones << endl;
        cout << "Numero de huespedes: " << numHuespedes << endl;
        if (estaRentada) {
            cout << "Fecha de llegada: " << fechaLlegada << endl;
            cout << "Fecha de salida: " << fechaSalida << endl;
        }
    }

    void setFechaLlegada(string fecha) {
        fechaLlegada = fecha;
    }

    void setFechaSalida(string fecha) {
        fechaSalida = fecha;
    }

    void setRentada(bool estado) {
        estaRentada = estado;
    }

    bool getRentada() const {
        return estaRentada;
    }
};

#endif
