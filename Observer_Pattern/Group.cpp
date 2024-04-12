#include "Group.h"

void Group::Register(ISubscriber *user)
{
    users.push_back(user);
}

void Group::UnRegister(ISubscriber *user)
{
    users.remove(user);
}

void Group::NotifyAll(const std::string &msg)
{
    for(auto user:users)
    {
        user->notify(msg);
    }
}