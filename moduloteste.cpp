#include <iostream>
#include "moduloteste.h"
#include <stdio.h>

using namespace std;

moduloteste::moduloteste()
{
};

moduloteste::~moduloteste()
{
};

void moduloteste::acessaRegistro(int i)
{
      FILE *arq;
    double Vet[100];
    int result;
    arq = fopen("ArqTeste.dat", "rb");// Abre um arquivo BINÁRIO para LEITURA
    if (arq == NULL)  // Se houve erro na abertura
    {
        cout<<"Problemas na abertura do arquivo"<<endl;
        return;
    }
    result = fread (&Vet[0], sizeof(double), 100, arq);
    cout<<"Nro de elementos lidos:"<< result<<endl;
    cout<<Vet[i]<<endl;

    fclose(arq);
};

void moduloteste::testeImportacao()
{

}
