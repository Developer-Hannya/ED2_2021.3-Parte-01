#include <iostream>
#include <stdio.h>
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
    int i,n;
    double Vet[n];
    cout << "[1] exibir saida" << endl << "[2] salvar em arquivo texto" << endl ;
    cin >> i;
    if(i == 1)
    {
        n = 10;
        
    }
    else if(i == 2)
    {
        FILE *arq;

        n = 100;
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
    }
    else
    {
        cout << "ERRO:Operacao invalida."<< endl;
        return;
    };
};

void moduloteste::testeImportacao()
{

}
