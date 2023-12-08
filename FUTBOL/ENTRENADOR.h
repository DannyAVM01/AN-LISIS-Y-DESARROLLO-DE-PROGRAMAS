#ifndef ENTRANDOR_H_INCLUDED
#define ENTRANDOR_H_INCLUDED

#include "SELECCION.h"

class Entrenador:
    public SeleccionFutbol
    {
        protected:
        int IDFederacion;

        public:

        Entrenador(){}
        Entrenador(int i, string n, string a, int e);
        
        void dirigirPartido();
        void dirigirEntrenamiento();

    };

Entrenador::Entrenador(int i, string n, string a, int e, int Id):SeleccionFutbol(i, n, a, e)
{
    IDFederacion = i;

}

void Entrenador::dirigirPartido()
{
    cout << "Esta dirigiendo el partido" << endl;

}

void Entrenador::dirigirEntrenamiento()
{
    cout << "Esta dirigiendo el entrenamiento" << endl;

}

#endif