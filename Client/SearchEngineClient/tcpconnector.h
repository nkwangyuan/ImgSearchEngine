//
//  tcpconnector.h
//  SearchEngineClient
//
//  Created by 貔貅妞 on 3/24/15.
//  Copyright (c) 2015 Yuan Wang. All rights reserved.
//

#ifndef __tcpconnector_h__
#define __tcpconnector_h__

#include <netinet/in.h>
#include "tcpstream.h"

class TCPConnector
{
public:
    TCPStream* connect(const char* server, int port);
    TCPStream* connect(const char* server, int port, int timeout);
    
private:
    int resolveHostName(const char* host, struct in_addr* addr);
};

#endif