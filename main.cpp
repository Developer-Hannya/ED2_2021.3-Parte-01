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
    std::cout<< "leitor criado" << std::endl;
    std::vector<TikTokData> cringe;
    cringe = r.readTikTok("teste de arquivo csv ed2.csv");
    std::cout<< "informaçoes passadas para a memoria" << std::endl;
    cringe.getData();
    //std::cout<< cringe << std::endl;
    return 0;
}
