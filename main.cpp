#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include <vector>

#include "TikTokData.h"

using namespace std;

vector<TikTokData> importacao(vector<TikTokData> registros,int n)
{
    int i;
    vector<TikTokData> arranjo;
    
     for(i=0,i<n,i++)
     {
        int ale;
        srand (time(NULL));
        ale = rand() % 3500000;
        arranjo.push_back(registros.at(ale));
     }
    
    return arranjo;
};

int main()
{
    
}


