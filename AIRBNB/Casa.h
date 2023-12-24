#ifndef CASA_H
#define CASA_H

#include <string>
#include <iostream>

class Casa {
private:
    std::string ubicacion;
    int numHabitaciones;
    int numHuespedes;
    std::string fechaLlegada;
    std::string fechaSalida;
    bool estaRentada;

public:
    Casa(std::string ubicacion, int numHabitaciones, int numHuespedes,
         std::string fechaLlegada = "", std::string fechaSalida = "")
        : ubicacion(ubicacion), numHabitaciones(numHabitaciones),
          numHuespedes(numHuespedes), fechaLlegada(fechaLlegada),
          fechaSalida(fechaSalida), estaRentada(false) {}

    void mostrarInformacion() const {
        std::cout << "Ubicacion: " << ubicacion << std::endl;
        std::cout << "Numero de habitaciones: " << numHabitaciones << std::endl;
        std::cout << "Numero de huespedes: " << numHuespedes << std::endl;
        if (estaRentada) {
            std::cout << "Fecha de llegada: " << fechaLlegada << std::endl;
            std::cout << "Fecha de salida: " << fechaSalida << std::endl;
        }
    }

    void setFechaLlegada(std::string fecha) {
        fechaLlegada = fecha;
    }

    void setFechaSalida(std::string fecha) {
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
