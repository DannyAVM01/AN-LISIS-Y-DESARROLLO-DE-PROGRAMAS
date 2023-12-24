#ifndef CASARENTADA_H
#define CASARENTADA_H

#include "Casa.h"

class CasaRentada : public Casa {
public:
    CasaRentada(std::string ubicacion, int numHabitaciones, int numHuespedes,
                std::string fechaLlegada, std::string fechaSalida)
        : Casa(ubicacion, numHabitaciones, numHuespedes, fechaLlegada, fechaSalida) {}

};

#endif
