<<<<<<< HEAD
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
        void setUpVotes(int upVotes);
        void setAppVersion(std::string appVersion);
        void setPostDate(std::string postDate);
        void setInfo(std::string id, std::string review, int upvotes, std::string appVersion, std::string postDate);

        std::string getId();
        std::string getReview();
        int getUpVotes();
        std::string getAppVersion();
        std::string getPostDate();
        void getData();

    private:
        std::string id;
        std::string review;
        int upVotes;
        std::string appVersion;
        std::string postDate;
};

#endif // TIKTOKDATA_H_INCLUDED
=======
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
        void setUpVotes(int upVotes);
        void setAppVersion(std::string appVersion);
        void setPostDate(std::string postDate);
        void setInfo(std::string id, std::string review, int upvotes, std::string appVersion, std::string postDate);

        std::string getId();
        std::string getReview();
        int getUpVotes();
        std::string getAppVersion();
        std::string getPostDate();
        void getData();

    private:
        std::string id;
        std::string review;
        int upVotes;
        std::string appVersion;
        std::string postDate;
};

#endif // TIKTOKDATA_H_INCLUDED
>>>>>>> a2b75a3865cb04313952330278106bf06d4791cf
