#include <iostream>
#include <stdio.h>
#include <time.h>

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
    double Vet[n];
   
    
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
void moduloteste::testeImportacao()
{
    int i;

    cout << "[1] exibir saida" << endl << "[2] salvar em arquivo texto" << endl ;
    cin >> i;

    if(i == 1)
    {
        FILE *dados;
        int ale,cout;

        for(cout = 0,cout < 10,cout++)
        {
           srand (time(NULL));
           ale = rand() % 3500000;

        }
    }
    else if(i == 2)
    {

    }
    else
    {
        cout << "ERRO:Operacao invalida."<< endl;
        return; 
    }
}
