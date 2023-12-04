#include <iostream>
using namespace std; 

class Animal // CLASE PADRE
{
    public:
    string color;
    float tamanio;
    float peso;

    void correr();
    void dormir();
};

void Animal::correr()
{
    cout <<"Este animal esta corriendo." << endl;
}

void Animal::dormir()
{
    cout <<"Este animal esta momido."<< endl;
}

class Hervivoro:
    public Animal //HERERNCIA
        {
            public:
            void esconderse();
        };

void Hervivoro::esconderse()
{
    cout << "Este animal se esta escondiendo." << endl;
}

class Carnivoro: // CLASE HIJA
    public Animal //HERERNCIA
        {
            public:
            void Cazar();
        };

void Carnivoro::Cazar()
{
    cout << "Este animal se esta cazando." << endl;
}

