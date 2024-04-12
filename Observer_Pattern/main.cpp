#include "Group.h"
#include "Subscriber.h"

int main()
{
    Group* group = new Group;
    Subscriber* user1 = new Subscriber(1);
    Subscriber* user2 = new Subscriber(2);
    Subscriber* user3 = new Subscriber(3);

    group->Register(user1);
    group->Register(user2);
    group->Register(user3);

    group->NotifyAll("New message Received");

    group->UnRegister(user3);

    group->NotifyAll("New New message Received");


}