//
// Created by della on 26/01/17.
//

#ifndef EX2TESTS_THREADMANAGEMENT_H
#define EX2TESTS_THREADMANAGEMENT_H

#include "TaxiCenter.h"
#include "../sockets/Tcp.h"

class ThreadManagement {
public:
    TaxiCenter* tc;
    Tcp *socket;
    int clientDescriptor;
    list <string> *serCabs;
    list <string> *serLocation;

    ThreadManagement(TaxiCenter* t, Tcp* sock , int clientDesc,
                     list <string> *sercabs, list <string> *serLocations);

    ~ThreadManagement();
};
#endif //EX2TESTS_THREADMANAGEMENT_H
