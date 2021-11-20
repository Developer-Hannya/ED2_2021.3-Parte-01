#include <iostream>
#include <fstream>
#include <string>
#include <time.h>

using namespace std;

vector<string> importacao(vector<string> registros,int n)
{
    int i;
    fstream file;
    vector<string> arranjo;

    file.open(registros,ios::in | ios::out | ios::binary)

    if(file.is_open())
    {
        for(i=0,i<n,i++)
        {
            int ale;
            srand (time(NULL));
            ale = rand() % 3500000;
            arranjo.push_back(resgistros.at(ale));
        }
    }    
    return arranjo;
};

int main()
{
    
}

