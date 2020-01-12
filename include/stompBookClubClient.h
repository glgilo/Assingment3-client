//
// Created by igale@wincs.cs.bgu.ac.il on 08/01/2020.
//

#ifndef ASSIGNMENT3_CLIENT_STOMPBOOKCLUBCLIENT_H
#define ASSIGNMENT3_CLIENT_STOMPBOOKCLUBCLIENT_H


class StompBookClubClient {
    private:
    const std::string host_;
    const short port_;
    std::vector myBooks;
    std::vector booksBorrowed;
    boost::asio::io_service io_service_;   // Provides core I/O functionality
    tcp::socket socket_;
};


#endif //ASSIGNMENT3_CLIENT_STOMPBOOKCLUBCLIENT_H
