#include "Subscriber.h"
#include <iostream>

Subscriber::Subscriber(int userID)
{
    this->userID = userID;
}

void Subscriber::notify(const std::string &msg)
{
    std::cout<<"Msg received by userID "<<userID<<" is : "<<msg<<std::endl;
}