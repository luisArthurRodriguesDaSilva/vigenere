#include <iostream>
#include "koé.h"
using namespace std;

int main() {
    koé a;
    char metodo;
    int turnos=0;
    char descarteProBug[50];
    while (1)
    {
        cout << endl;
       /* if (turnos > 0) {
            cout << "||"; cin >> descarteProBug;
        }*/

        cout << "descrip ou crip" << endl;
        cout << "    d   ou c" << endl;
        turnos++;
        cin.get(metodo);
        // system("cls");
        
        cin.getline(descarteProBug, sizeof(descarteProBug));
        cout << "entrada:";   cin.getline(a.palavra,sizeof(a.palavra));    cout << endl;  //char input[100];    cin.getline(input, sizeof(input));
        cout << "chave:";     cin.getline(a.chave, sizeof(a.chave));      cout << endl;
        
        a.verTamP();
        a.verTamC();

        a.processoP();
        a.processoC();
        
       
        if (metodo == 'c')a.misturar();
        else a.misturarD();

        cout << "________________________________________" << endl;

    }
}
//falta o espaço duen