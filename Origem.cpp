#include <iostream>
#include "koé.h"
using namespace std;

int main() {
    koé a;

    while (1)
    {
        cout << endl;
        cout << "palavra:";   cin >> a.palavra;    cout << endl;
        cout << "chave:";     cin >> a.chave;      cout << endl;
        a.verTamP();
        a.verTamC();

        a.processoP();
        a.processoC();
        a.misturar();

        cout << "________________________________________" << endl;

    }
}
//teste