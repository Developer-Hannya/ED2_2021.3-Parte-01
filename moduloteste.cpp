#include <iostream>
#include <fstream>
#include <time.h>
#include <stdio.h> 
#include <stdlib.h>
#include <vector>

#include "moduloteste.h"
#include "TikTokData.h"


using namespace std;

moduloteste::moduloteste()
{
};

void moduloteste::acessaRegistro(int i)
{
    ifstream r;
    r.open("data.bin",ios::binary);

    if(!r.is_open())
    {
        cout << "Nao foi possivel abrir o arquivo." << endl;
        return exit(EXIT_FAILURE);
    }

    TikTokData elemento;
    r.read((char*) &elemento, i*sizeof(TikTokData));

    cout << "Id :" << elemento.getId() << endl << "Review :" << elemento.getReview() << endl << "Upvotes :" << elemento.getUpVotes() << endl << "AppVersion :" << elemento.getAppVersion() << endl << "date :" << elemento.getPostDate() << endl
};  

void moduloteste::testeImportacao()
{
    int i,N;

    cout << "[1] exibir saida" << endl << "[2] salvar em arquivo texto" << endl ;
    cin >> i;

    if(i == 1)
    {
        int ale;

        for(N = 0;N < 10;N++)
        {
            ifstream r;
            r.open("data.bin",ios::binary);

            if(!r.is_open())
            {
                cout << "Nao foi possivel abrir o arquivo." << endl;
                return exit(EXIT_FAILURE);
            }

            TikTokData elemento;
            srand (time(NULL));
            ale = rand() % 3500000;

            r.read((char*) &elemento,ale*sizeof(TikTokData));

            cout << "Registro " << N+1 << ": " << endl;
            cout << "Id: " << elemento.getId() << endl;
            cout << "Review: " << elemento.getReview() << endl;
            cout << "UpVotes: " << elemento.getUpVotes() << endl;
            cout << "AppVersion: " << elemento.getAppVersion() << endl;
            cout << "PostDate: " << elemento.getPostDate() << endl << endl;   
        }

    }
    else if(i == 2)
    {
        int ale;
        ofstream wr;
        ifstream r;

        wr.open("teste.txt");
        r.open("data.bin",ios::binary);

        if(!wr.is_open() && r.is_open())
        {
            cout << "ERRO:Arquivo nao aberto." << endl;
            return exit(EXIT_FAILURE);
        }

        for(cout = 0;cout < 100;cout++)
        {
            srand (time(NULL));
            ale = rand() % 3500000;
            TikTokData elemento;

            r.read((char*) &elemento,ale*sizeof(TikTokData));
            wr.write((char *) &elemento,sizeof(TikTokData));
        }
        wr.close();
    }
    else
    {
        cout << "ERRO:Operacao invalida."<< endl;
        return; 
    }
};
