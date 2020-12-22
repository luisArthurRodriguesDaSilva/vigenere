#include <iostream>
using namespace std;


char resultado[100];
char tabelado[26]{ 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };/*','*/
//enum letras {a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z};


int x, i,j, tamChave, tamPalavra;

char palavra[100];
char chave[100];
int  chaveN[100], palavraN[100],resultadoN[100];



void verTamP();
void verTamC();
void processoP();
void processoC();
void misturar();

int main() {
    while (1)
    {
        cout << endl;
        cout << "palavra:";   cin >> palavra;    cout << endl;
        cout << "chave:";     cin >> chave;      cout << endl;
        verTamP();
        verTamC();

        processoP();
        processoC();
        misturar();

    }
}


void verTamP() {
    i = 0;
    while (palavra[i] != '\0') { i++;   /*cout << i << endl;*/ }
    tamPalavra = i;
}
void verTamC() {
    i = 0;
    while (chave[i] != '\0') { i++;   /*cout << i << endl;*/ }
    tamChave = i;

}

void processoC() {
    for (j = 0; j < tamChave; j++) {
       for(i=0;i<26;i++) {
            if (chave[j] == tabelado[i]) {
                chaveN[j] = i;
              /* cout << "chaveN[" << j << "]=" << i << endl;*/
            }
        }
    }
}

void processoP(){
    for (j = 0; j < tamPalavra; j++) {
        for(i=0;i<26;i++) {
            if (palavra[j] == tabelado[i]) {
                palavraN[j] = i;
                /*cout << "palavraN[" << j << "]=" << i << endl;*/
            }

        }
    }
}

void misturar(){
    cout << "resultado:";
    for (j = 0; j < tamPalavra; j++) {
        resultadoN[j] = (palavraN[j] + chaveN[j % tamChave]) % 26;
        cout<< tabelado[resultadoN[j]];
    }
    cout << endl;
}