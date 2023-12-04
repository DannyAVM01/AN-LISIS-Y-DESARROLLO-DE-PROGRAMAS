#include "ANIMALES.h"

class Hervivoro:
    public Animal
    {
        public:
        void esconderse();
    };

void Hervivoro::esconderse()
{
    cout << "Este animal esta escondido" << endl;
}

class Carnivoro:
    public Animal
    {
        public:
        void Cazar();
    };

void Carnivoro::Cazar()
{
    cout << "Este animal esta cazando" << endl;
}