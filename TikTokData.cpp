#include <string>
#include <iostream>
#include "TikTokData.h"

TikTokData::TikTokData() {
    this->id = "";
    this->review = "";
    this->upVotes = 0;
    this->appVersion = "";
    this->postDate = "";
}

TikTokData::~TikTokData() {

}

void TikTokData::setId(std::string id) {
    this->id = id;
}

void TikTokData::setReview(std::string review) {
    this->review = review;
}

void TikTokData::setUpVotes(int upVotes) {
    this->upVotes = upVotes;
}

void TikTokData::setAppVersion(std::string appVersion) {
    this->appVersion = appVersion;
}

void TikTokData::setPostDate(std::string postDate) {
    this->postDate = postDate;
}

void TikTokData::setInfo(std::string id, std::string review, int upVotes, std::string appVersion, std::string postDate) {
    setId(id);
    setReview(review);
    setUpVotes(upVotes);
    setAppVersion(appVersion);
    setPostDate(postDate);
}


std::string TikTokData::getId() {
    return this->id;
}

std::string TikTokData::getReview() {
    return this->review;
}

int TikTokData::getUpVotes() {
    return this->upVotes;
}

std::string TikTokData::getAppVersion() {
    return this->appVersion;
}

std::string TikTokData::getPostDate() {
    return this->postDate;
}

void TikTokData::getData() {
    std::cout<< getId();
    std::cout<< getReview();
    std::cout<< getUpVotes();
    std::cout<< getAppVersion();
    std::cout<< getPostDate();
    std::cout<< std::endl;
}
