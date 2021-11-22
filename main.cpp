#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include <iomanip>
#include <vector>
#include "FileReader.h"
#include "TikTokData.h"
#include "moduloteste.h"

using namespace std;

vector<string> importacao(vector<string> registros,int n)
{
    int i;
    vector<string> arranjo;
    
     for(i=0,i<n,i++)
     {
        int ale;
        srand (time(NULL));
        ale = rand() % 3500000;
        arranjo.push_back(resgistros.at(ale));
     }
    
    return arranjo;
};

int main()
{
    FileReader r;
    std::cout << "leitor de arquivo criado" << std::endl;
    std::vector<TikTokData> cringe;
    std::cout << "TAD criado" << std::endl;
    std::cout << "lendo informacoes do arquivo .csv e passando para o TAD" << std::endl;
    cringe = r.readTikTok("tiktok_app_reviews.csv");
    std::cout << "informaçoes passadas para o TAD com sucesso" << std::endl;
    std::cout << "criando o arquivo .bin" << std::endl;
    std::cout << "passando as informacoes do TAD para o arquivo .bin" << std::endl;
    r.writeInBinFile(cringe);
    std::cout << "dados escritos no arquivo .bin" << std::endl;
}

