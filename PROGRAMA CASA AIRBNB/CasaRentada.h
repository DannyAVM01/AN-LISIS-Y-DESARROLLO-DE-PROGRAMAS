#ifndef CASARENTADA_H
#define CASARENTADA_H

#include "casa.h"

class CasaRentada : public Casa {
public:
    CasaRentada(string ubicacion, int numHabitaciones, int numHuespedes,
                string fechaLlegada, string fechaSalida)
        : Casa(ubicacion, numHabitaciones, numHuespedes, fechaLlegada, fechaSalida) {}

    void mostrarInformacion() const override {
        Casa::mostrarInformacion();
        cout << "Esta ocupada para esas fechas" << endl;
    }
};

#endif
