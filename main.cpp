#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include <vector>
#include <stdio.h> 
#include <stdlib.h>

#include "TikTokData.h"

using namespace std;

vector<TikTokData> importacao(int n)
{
    ifstream r;
    r.open("data.bin",ios::binary);

    if(!r.is_open())
    {
        cout << "Nao foi possivel abrir o arquivo." << endl;
        return exit(EXIT_FAILURE);
    }
    
    int count = 0;
    vector<TikTokData> importados;

    srand(time(NULL)); 

    while(count < n)
    {
        int ale = rand() % 3500000;
        TikTokData elemento;
        r.read((char*) &elemento,ale*sizeof(TikTokData));
        importados.push_back(elemento);
    }

    return importados;
};

int main()
{
    
}


