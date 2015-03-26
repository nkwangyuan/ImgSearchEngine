//
//  tcpacceptor.h
//  SearchEngineServer
//
//  Created by 貔貅妞 on 3/24/15.
//  Copyright (c) 2015 Yuan Wang. All rights reserved.
//

#ifndef __tcpacceptor_h__
#define __tcpacceptor_h__

#include <string>
#include <netinet/in.h>
#include "tcpstream.h"

using namespace std;

class TCPAcceptor
{
    int    m_lsd;
    int    m_port;
    string m_address;
    bool   m_listening;
    
public:
    TCPAcceptor(int port, const char* address="");
    ~TCPAcceptor();
    
    int        start();
    TCPStream* accept();
    
private:
    TCPAcceptor() {}
};

#endif