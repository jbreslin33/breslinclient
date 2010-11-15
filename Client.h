/*
-----------------------------------------------------------------------------
Filename:    Client.h
*/
#ifndef __Client_h_
#define __Client_h_

#include <stdio.h>
#include <stdlib.h>
#include <string>


class Client;

class Client
{

public:
    Client();
    virtual ~Client(void);
    void setUsername(std::string username) { mUsername = username; }

protected:
std::string mUsername;
};

#endif


