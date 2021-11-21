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
    cringe = r.readTikTok("teste de arquivo csv ed2.csv");
    std::cout << "informaçoes passadas para a memoria" << std::endl;
    for (int i = 0; i < cringe.size(); i++) {
        //std::cout << cringe[i].getData;
        cringe[i].getData();
    }
    std::cout << cringe[0].getReview() << std::endl;
    return 0;
}
