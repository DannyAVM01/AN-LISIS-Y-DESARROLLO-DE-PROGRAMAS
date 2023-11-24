#include <iostream>
#include <windows.h>
using namespace std;
#include "celular.h"

int main()
{
    Celular s22 ("5500112233", 50);  //se almacena espacio para el vector
            int opc;
	do
            {
                cout<<"Que desea hacer? \n1.LLamar\n2.Mandar mensaje\n3.Ver saldo\n4.Salir"<<endl;
                cin>>opc;
                switch (opc)
                {
                    case 1: s22.llamar();
                        break;
                    case 2: s22.mandar_msg();
                        break;
                    case 3: s22.verSaldo(); break;
                    case 4: break;
                    default: cout<<"Opcion no valida"<<endl;
                        break;
                }
                system("pause"); 
                system("cls");
            } while (opc != 4);

    return 0;

}