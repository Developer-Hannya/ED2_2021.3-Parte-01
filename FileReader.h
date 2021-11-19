#ifndef FILEREADER_H_INCLUDED
#define FILEREADER_H_INCLUDED
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

class FileReader {

    public:
        FileReader(); // construtor
        ~FileReader(); // destrutor
        std::vector<std::string> readTikTok(std::string tikTokFile); // fun��o que l� o arquivo .csv e passa as informa��es para um vector
        //void writeInBinFile(vector<cringeData> &data); //pega as informa��es do vector e escreve no arquivo .bin

    private:
};

#endif // FILEREADER_H_INCLUDED
