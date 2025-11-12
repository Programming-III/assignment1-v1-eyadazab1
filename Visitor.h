#ifndef VISITOR_H
#define VISITOR_H

#include <string>
#include <iostream>
using namespace std;

class Visitor {
private:
    string visitorName;
    int ticketsBought;

public:
    Visitor();
    Visitor(string name, int tickets);
    ~Visitor();

    void setVisitorName(string name);
    string getVisitorName();

    void setTicketsBought(int tickets);
    int getTicketsBought();

    void displayInfo();
};

#endif
