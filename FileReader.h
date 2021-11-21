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
        std::vector<TikTokData> readTikTok(std::string tikTokFile); // fun��o que l� o arquivo .csv e passa as informa��es para um vector
        void writeInBinFile(std::vector<TikTokData> &data); //pega as informa��es do vector e escreve no arquivo .bin

    private:
};

#endif // FILEREADER_H_INCLUDED
