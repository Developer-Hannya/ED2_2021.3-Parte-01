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
        printf("Problemas na abertura do arquivo\n");
        return;
    }
    result = fread (&Vet[0], sizeof(double), 100, arq);
    printf("Nro de elementos lidos: %d\n", result);

    for (i=0; i<result; i++)
        printf("%lf\n", Vet[i]);

    fclose(arq);
};

void moduloteste::testeImportacao()
{

}
