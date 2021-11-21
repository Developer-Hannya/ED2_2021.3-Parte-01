#include "FileReader.h"
#include <vector>

FileReader::FileReader(){

}

FileReader::~FileReader(){

}

std::vector<TikTokData> FileReader::readTikTok(std::string tikTokFile) {

    std::ifstream file;
    std::string info;
    std::vector<TikTokData> data;

    file.open(tikTokFile);
    getline(file, info);

    if(file.is_open()) {
        while(getline(file, info)) {
            if (info == "") {
                continue;
            }
            else {
                std::istringstream dataFromLine(info);
                std::string id, review, upvotes, appVersion, postDate;
                getline(dataFromLine, id, ',');
                getline(dataFromLine, review, ',');
                getline(dataFromLine, upvotes, ',');
                getline(dataFromLine, appVersion, ',');
                getline(dataFromLine, postDate, ',');
                TikTokData element;
                element.setInfo(id, review, upvotes, appVersion, postDate);
                data.push_back(element);
            }
        }
        file.close();
    }
    else {
        std::cout << "N�o foi poss�vel abrir o arquivo." << std::endl;
    }
    return data;
}

void FileReader::writeInBinFile(std::vector<TikTokData> &data) {

}
