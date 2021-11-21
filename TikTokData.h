#ifndef TIKTOKDATA_H_INCLUDED
#define TIKTOKDATA_H_INCLUDED
#include <string>
#include <vector>

class TikTokData {

    public:
        void setId(std::string id);
        void setReview(std::vector<char> review);
        void setUpVotes(std::string upVotes);
        void setAppVersion(std::string appVersion);
        void setPostDate(std::string postDate);
        void setInfo(std::string id, std::vector<char> review, std::string upvotes, std::string appVersion, std::string postDate);

        std::string getId();
        std::vector<char> getReview();
        std::string getUpVotes();
        std::string getAppVersion();
        std::string getPostDate();

    private:
        std::string id;
        std::vector<char> review;
        std::string upVotes;
        std::string appVersion;
        std::string postDate;
};


#endif // TIKTOKDATA_H_INCLUDED
