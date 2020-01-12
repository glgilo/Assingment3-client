cmake_minimum_required(VERSION 3.15)
project(Assingment3-client)

set(CMAKE_CXX_STANDARD 11)

add_executable(untitled main.cpp
        include/connectionHandler.h
        include/ReadFromKeyboard.h
        include/stompBookClubClient.h
        include/stompEncoderDecoder.h
        src/connectionHandler.cpp
        src/echoClient.cpp
        src/ReadFromKeyboard.cpp
        src/stompBookClubClient.cpp
        src/stompEncoderDecoder.cpp)