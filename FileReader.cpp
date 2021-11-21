#include "FileReader.h"

FileReader::FileReader(){

}

FileReader::~FileReader(){

}

vector<TikTokData> FileReader::readTikTok(string tikTokFile) {

    ifstream file;
    string info;
    vector<TikTokData> data;

    file.open(tikTokFile);
    getline(file, info);

    if(file.is_open()) {
        while(getline(file, info)) {
            if (info == "") {
                continue;
            }
            else {
                istringstream dataFromLine(info);
                string id, review, upvotes, appVersion, postDate;
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
        std::cout << "Não foi possível abrir o arquivo." << std::endl;
    }
    return data;
}

void FileReader::writeInBinFile(std::vector<TikTokData> &data) {

}
