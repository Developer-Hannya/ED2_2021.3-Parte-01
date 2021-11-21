#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>
#include "FileReader.h"
#include "TikTokData.h"

using namespace std;

int main()
{
    FileReader r;
    std::cout << "leitor criado" << std::endl;
    std::vector<TikTokData> cringe;
    std::cout << "TAD criado para armazenar os dados do arquivo.csv" << std::endl;
    std::cout << "lendo informacoes do arquivo .csv e passando para o TAD" << std::endl;
    cringe = r.readTikTok("tiktok_app_reviews.csv");
    std::cout << "informaçoes passadas para o TAD com sucesso" << std::endl;
    /*
    for (int i = 0; i < cringe.size(); i++) {
        //std::cout << cringe[i].getData;
        cringe[i].getData();
    }
    */
    std::cout << "criando o arquivo .bin" << std::endl;
    std::cout << "passando as informacoes do TAD para o arquivo .bin" << std::endl;
    r.writeInBinFile(cringe);
    std::cout << "dados escritos no arquivo .bin" << std::endl;
    return 0;
}
