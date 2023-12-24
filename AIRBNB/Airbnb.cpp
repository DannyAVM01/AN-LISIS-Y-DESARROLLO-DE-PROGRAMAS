#include <iostream>
#include <vector>
#include "Casa.h"
#include "CasaRentada.h"

using namespace std;

int main() {
    Casa casa1("Ubicacion 1", 3, 6);
    Casa casa2("Ubicacion 2", 4, 8);
    CasaRentada casa3("Ubicacion 3", 2, 4, "01/01/2023", "10/01/2023");

    vector<Casa*> casasRentadas;

    int opcion;
    do {
        cout << "MENU:" << endl;
        cout << "1. Ver casas disponibles" << endl;
        cout << "2. Ver casas rentadas" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese su opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                int subopcion;
                do {
                    cout << "SUBMENU - Casas Disponibles:" << endl;
                    cout << "1. Ver informacion" << endl;
                    cout << "2. Rentar casa" << endl;
                    cout << "3. Regresar" << endl;
                    cout << "Ingrese su opcion: ";
                    cin >> subopcion;

                    switch (subopcion) {
                        case 1:
                            casa1.mostrarInformacion();
                            casa2.mostrarInformacion();
                            break;
                        case 2:
                            int seleccion;
                            cout << "Seleccione la casa a rentar: ";
                            cin >> seleccion;
                            if (seleccion == 1) {
                                string fechaLlegada, fechaSalida;
                                cout << "Ingrese la fecha de llegada (dd/mm/yyyy): ";
                                cin >> fechaLlegada;
                                cout << "Ingrese la fecha de salida (dd/mm/yyyy): ";
                                cin >> fechaSalida;

                                casa1.setFechaLlegada(fechaLlegada);
                                casa1.setFechaSalida(fechaSalida);
                                casa1.setRentada(true);

                                cout << "La casa ha sido rentada para las fechas seleccionadas." << endl;
                            } else if (seleccion == 2) {
                                // Lógica para la casa 2
                            } else {
                                cout << "Seleccion no valida." << endl;
                            }
                            break;
                        case 3:
                            break;
                        default:
                            cout << "Opcion no valida." << endl;
                            break;
                    }
                } while (subopcion != 3);
                break;
            case 2:
                cout << "Casas rentadas:" << endl;
                if (casa1.getRentada()) {
                    casasRentadas.push_back(&casa1);
                    cout << "- Casa 1" << endl;
                }
                if (casa2.getRentada()) {
                    casasRentadas.push_back(&casa2);
                    cout << "- Casa 2" << endl;
                }
                if (casa3.getRentada()) {
                    casasRentadas.push_back(&casa3);
                    cout << "- Casa 3" << endl;
                }

                cout << "Detalles de las casas rentadas:" << endl;
                for (Casa* casa : casasRentadas) {
                    casa->mostrarInformacion();
                    cout << endl;
                }
                break;
            case 3:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no valida." << endl;
                break;
        }
    } while (opcion != 3);

    return 0;
}

