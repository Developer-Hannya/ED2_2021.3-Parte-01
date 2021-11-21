#include "TikTokData.h"

TikTokData::TikTokData() {
    this.id = "";
    this.review = "";
    this.upVotes = "";
    this.appVersion = "";
    this.postDate = "";
}

TikTokData::~TikTokData() {

}

void TikTokData::setId(std::string id) {
    this.id = id;
}

void TikTokData::setReview(std::vector<char> review) {
    this.review = review;
}

void TikTokData::setUpVotes(std::string upVotes) {
    this.upVotes = upVotes;
}

void TikTokData::setAppVersion(std::string appVersion) {
    this.appVersion = appVersion;
}

void TikTokData::setPostDate(std::string postDate) {
    this.postDate = postDate;
}

void TikTokData::setInfo(std::string id, std::vector<char> review, std::string upVotes, std::string appVersion, std::string postDate) {
    setId(id);
    setReview(review);
    setUpVotes(upVotes);
    setAppVersion(appVersion);
    setPostDate(postDate);
}


std::string TikTokData::getId() {
    return this.id;
}

std::vector<char> TikTokData::getReview() {
    return this.review;
}

std::string TikTokData::getUpVotes() {
    return this.upVotes;
}

std::string TikTokData::getAppVersion() {
    return this.appVersion;
}

std::string TikTokData::getPostDate() {
    return this.postDate;
}
