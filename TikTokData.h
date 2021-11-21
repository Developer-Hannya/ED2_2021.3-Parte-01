#ifndef TIKTOKDATA_H_INCLUDED
#define TIKTOKDATA_H_INCLUDED
#include <string>
#include <vector>

class TikTokData {

    public:

        TikTokData();
        ~TikTokData();

        void setId(std::string id);
        void setReview(std::string review);
        void setUpVotes(std::string upVotes);
        void setAppVersion(std::string appVersion);
        void setPostDate(std::string postDate);
        void setInfo(std::string id, std::string review, std::string upvotes, std::string appVersion, std::string postDate);

        std::string getId();
        std::string getReview();
        std::string getUpVotes();
        std::string getAppVersion();
        std::string getPostDate();
        void getData();

    private:
        std::string id;
        std::string review;
        std::string upVotes;
        std::string appVersion;
        std::string postDate;
};

#endif // TIKTOKDATA_H_INCLUDED
