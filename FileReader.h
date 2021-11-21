#ifndef FILEREADER_H_INCLUDED
#define FILEREADER_H_INCLUDED
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "TikTokData.h"

class FileReader {

    public:
        FileReader(); // construtor
        ~FileReader(); // destrutor
        std::vector<TikTokData> readTikTok(std::string tikTokFile); // função que lê o arquivo .csv e passa as informações para um vector
        void writeInBinFile(std::vector<TikTokData> &data); //pega as informações do vector e escreve no arquivo .bin

    private:
};

#endif // FILEREADER_H_INCLUDED
