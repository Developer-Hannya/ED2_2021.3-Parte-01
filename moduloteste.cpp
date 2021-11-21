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

void moduloteste::acessaRegistro(int i,vector<TikTokData> dados)
{
    cout << "Id: " << dados.at(i).getId() << endl;
    cout << "Review: " << dados.at(i).getReview() << endl;
    cout << "UpVotes: " << dados.at(i).getUpVotes() << endl;
    cout << "AppVersion: " << dados.at(i).getAppVersion() << endl;
    cout << "PostDate: " << dados.at(i).getPostDate() << endl;
}  

}
void moduloteste::testeImportacao(vector<TikTokData> dados)
{
    FILE *dados;
    int i,cout;

    cout << "[1] exibir saida" << endl << "[2] salvar em arquivo texto" << endl ;
    cin >> i;

    if(i == 1)
    {
        int ale;

        for(cout = 0,cout < 10,cout++)
        {
           srand (time(NULL));
           ale = rand() % 3500000;
           cout << "Registro " << cout+1 << ": " << endl;
           cout << "Id: " << dados.at(i).getId() << endl;
           cout << "Review: " << dados.at(i).getReview() << endl;
           cout << "UpVotes: " << dados.at(i).getUpVotes() << endl;
           cout << "AppVersion: " << dados.at(i).getAppVersion() << endl;
           cout << "PostDate: " << dados.at(i).getPostDate() << endl;   
        }

    }
    else if(i == 2)
    {
        ofstream wr;
        wr.open("data.bin",ios::binary);
        if(!wr.is_open())
        {
            cout << "ERRO:Arquivo nao aberto." << endl;
            return 1;
        }

        for(cout = 0,cout < 100,cout++)
        {
            
        }
    }
    else
    {
        cout << "ERRO:Operacao invalida."<< endl;
        return; 
    }
}

