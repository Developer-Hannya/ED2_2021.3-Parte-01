#include "FileReader.h"

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
                std::string id, review, upVotes, appVersion, postDate;
                getline(dataFromLine, id, ',');
                getline(dataFromLine, review, ',');
                getline(dataFromLine, upVotes, ',');
                getline(dataFromLine, appVersion, ',');
                getline(dataFromLine, postDate, ',');
                TikTokData element;
                element.setInfo(id, review, atoi(upVotes.c_str()), appVersion, postDate);
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
    std::ofstream bin("tiktok_app_reviews.bin", std::ios::out | std::ios::binary);
    for(int i = 0; i < data.size(); i++) {
        bin << data[i].getId() << ", " << data[i].getReview() << ", " << data[i].getUpVotes() << ", " <<
        data[i].getAppVersion() << ", " << data[i].getPostDate() << std::endl;
    }
    bin.close();
}
