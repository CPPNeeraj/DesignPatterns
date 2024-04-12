#ifndef GROUP_H
#define GROUP_H

#include <list>
#include <string>
#include "ISubscriber.h"

class Group
{
    private:
        std::list<ISubscriber*> users;
    public:
        void Register(ISubscriber *user);
        void UnRegister(ISubscriber *user);
        void NotifyAll(const std::string &msg);
};

#endif // GROUP_H