#include "FileReader.h"

FileReader::FileReader(){

}

FileReader::~FileReader(){

}

vector<string> FileReader::readTikTok(string tikTokFile) {

    ifstream file;
    string info;
    vector<string> data;

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
                cringeData element;
                element.setData(id, review, upvotes, appVersion, postDate);
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
