#include "ko�.h"
#include<iostream>

using namespace std;



void ko�::verTamP()
{
    i = 0;
    while (palavra[i] != '\0') { i++;   /*cout << i << endl;*/ }
    tamPalavra = i;
}

void ko�::verTamC()
{
    i = 0;
    while (chave[i] != '\0') { i++;   /*cout << i << endl;*/ }
    tamChave = i;
}

void ko�::processoP()
{
    for (j = 0; j < tamPalavra; j++) {
        for (i = 0; i < 26; i++) {
            if (palavra[j] == tabelado[i]) {
                palavraN[j] = i;
                /*cout << "palavraN[" << j << "]=" << i << endl;*/
            }

        }
    }
}

void ko�::processoC()
{
    for (j = 0; j < tamChave; j++) {
        for (i = 0; i < 26; i++) {
            if (chave[j] == tabelado[i]) {
                chaveN[j] = i;
                /* cout << "chaveN[" << j << "]=" << i << endl;*/
            }
        }
    }
}


void ko�::misturar() {
    cout << "resultado:";
    v = 0;
    for (j = 0; j < tamPalavra; j++) {
        resultadoN[j] = (palavraN[j] + chaveN[ (j-v)% tamChave]) % 26;
        if (palavra[j] == ',') { cout << " ";    v++; }
        else cout << tabelado2[resultadoN[j]];
    }
    cout << endl;
}