#pragma once
class ko�
{
public:
	int x, i, j, v, tamChave, tamPalavra;

	char palavra[1000];
	char chave[100];
	int  chaveN[100], palavraN[1000], resultadoN[1000];
	char tabelado[26]{ 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',};
	char tabelado2[26]{ 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',};

	void verTamP();
	void verTamC();
	void processoP();
	void processoC();
	void misturar();
	void misturarD();
};

