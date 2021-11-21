#include <iostream>
#include "moduloteste.h"

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
    arq = fopen("Tiktok.bin", "rb");
    if (arq == NULL)  // Se houve erro na abertura
    {
       cout<<"Problemas na abertura do arquivo\n"<<endl;
        return;
    }
    result = fread (&Vet[0], sizeof(double), 100, arq);
    cout<<"Nro de elementos lidos:"<< result<< endl;

    for (i=0; i<result; i++)
        cout<< Vet[i]<< endl;

    fclose(arq);
};

void moduloteste::testeImportacao()
{

}
