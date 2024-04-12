cmake_minimum_required(VERSION 3.22.1)

project(ObserverDesignPattern)

add_executable(${PROJECT_NAME} main.cpp
                               Group.cpp
                               Subscriber.cpp
                               ISubscriber.h
                               Group.h
                               Subscriber.h
)           