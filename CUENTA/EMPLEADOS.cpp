#include <iostream>

using namespace std;

class Empleado
{
public:
    string nombre;
    string apellido;
    float Sueldo_Mensual;

    void asignar(int i)
    {
        cout << "Ingrese los datos del empleado: " << i << endl;
        cout << "Nombre:" << endl;
        cin >> nombre;
        cout << "Apellido:" << endl;
        cin >> apellido;
        cout << "Salario Mensual:" << endl;
        cin >> Sueldo_Mensual;
    }

    void calcular_anual()
    {
        float Suledo_anual;
        Suledo_anual = Sueldo_Mensual * 12;
        cout << "el sueldo anual del empleado " << nombre << " " << apellido << " es " << Suledo_anual << endl;
    }

    void aumento()
    {
        Sueldo_Mensual = (Sueldo_Mensual * .10) + (Sueldo_Mensual);
        float Suledo_anual;
        Suledo_anual = Sueldo_Mensual * 12;
        cout << "el nuevo sueldo mensual del empleado " << nombre << " " << apellido << " es " << Sueldo_Mensual << endl;
        cout << "el nuevo sueldo anual del empleado " << nombre << " " << apellido << " es " << Suledo_anual << endl;
    }
};

int main()
{
    Empleado Empleado1, Empleado2;
    int opcion = 0, i = 0;

    while (i == 0)
    {
        cout << ("1.-Asignar empleados\n2.-Calcular salario anual\n3.-Amento de salario\n4.-Salir") << endl;
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            Empleado1.asignar(1);
            Empleado2.asignar(2);
            break;
        case 2:
            Empleado1.calcular_anual();
            Empleado2.calcular_anual();
            break;
        case 3:
            Empleado1.aumento();
            Empleado2.aumento();
            break;

        case 4:
            i = 1;
            break;
        }
    }

    return 0;
}