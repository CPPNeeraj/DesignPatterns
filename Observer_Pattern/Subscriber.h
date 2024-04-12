#ifndef SUBSCRIBER_H
#define SUBSCRIBER_H

#include "ISubscriber.h"
#include <string>

class Subscriber : public ISubscriber
{
    private:
        int userID;
    public:
        Subscriber(int userID);
        void notify(const std::string &msg);
};

#endif // SUBSCRIBER_H