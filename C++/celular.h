#include <iostream>
#include <windows.h>
using namespace std;

class Celular{
    public:
             string mi_numero;
             float saldo;
             Celular ();
            Celular (string n, float s);
            void mandar_msg();
            void llamar();
            void verSaldo();
            
};

Celular::Celular() // CONSTRUCTOR POR DEFECTO O PREDETERMINADO QUE NO RESIVE PARAMETROS
    {
    mi_numero = "5512345678";
    saldo = 100;
    }

Celular::Celular (string n, float s) // CONSTRUCTOR POR PARAMETROS
    {
        mi_numero = n;
        saldo = s;
    }
     void Celular::mandar_msg() {
                  string msg, numero;

                  cout<<"Introduce el destinatario: "<<endl;
                  cin>>numero;
                  fflush(stdin);
                  cout<<"introduce el mensaje"<<endl;
                  getline(cin, msg);

                  if(saldo >= 1.0){
                     cout<<"Mensaje enviado"<<endl;
                     Sleep(2000);
                     saldo--;
                  }else
                      cout<<"Saldo insuficiente :("<<endl;
             }

             void Celular::llamar(){
                  string numero;

                  cout<<"Introduce el numero: "<<endl;
                  cin>>numero;

                  if(saldo >= 2.0){
                     cout<<"Lamando...";
                     Sleep(3000);
                     saldo-=2;
                     }
                  else{
                     cout<<"El saldo de tu amigo se agotado"<<endl;
                     }
             }
        void Celular::verSaldo(){
            cout<<"Saldo: "<<saldo<<endl;
            cout<<"Mi numero: "<<mi_numero<<endl;
        }