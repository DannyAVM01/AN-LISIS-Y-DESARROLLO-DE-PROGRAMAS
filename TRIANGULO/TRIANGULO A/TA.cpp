#include <iostream>

using namespace std;

class Triangulo
{
    public:
    float base;
    float altura;
    float lado1;
    float lado2;

    void calcular_perimetro()
    {
        float res = base + lado1 + lado2;
        cout << "Perimetro: " << res << endl;
    }

    void calcular_area()
    {
        float res = (base*altura)/2;
        cout << "El area es: " << res << endl;
    }
};

int main ()
{
    Triangulo T1;
    T1.altura = 10.5f;
    T1.base = 7.4f;
    T1.lado1 = 8.9f;
    T1.lado2 = 9.0f;

    cout << "Triangulo 1: " << endl;
    T1.calcular_perimetro ();
    T1.calcular_area ();

    Triangulo T2;
    cout << "Introduce la altura, la base, el lado3 y el lado4: " << endl;
    cin >> T2.altura >> T2.base >> T2.lado1 >> T2.lado2;
    T2.calcular_perimetro ();
    T2.calcular_area ();
    return 0;
}