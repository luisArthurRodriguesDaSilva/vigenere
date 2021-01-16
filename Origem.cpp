#include <iostream>
#include "ko�.h"
using namespace std;

int main() {
    ko� a;

    while (1)
    {
        cout << endl;
        cout << "palavra:";   cin.getline(a.palavra,sizeof(a.palavra));    cout << endl;  //char input[100];    cin.getline(input, sizeof(input));
        cout << "chave:";     cin.getline(a.chave, sizeof(a.chave));      cout << endl;
        a.verTamP();
        a.verTamC();

        a.processoP();
        a.processoC();
        a.misturar();

        cout << "________________________________________" << endl;

    }
}
//falta o espaço duen