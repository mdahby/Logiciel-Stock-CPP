#ifndef LOGICIEL_H
#define LOGICIEL_H
#include <string>
#include "date.h"
using namespace std;


class logiciel
{
public:
    logiciel(string, string, date);
    ~logiciel();

    string getIDU();
    string getversion();
    date getDP();

    void setversion(string);
    void setDP(date);

private:
    const string IDU;
    string version;
    date DP;
};

#endif

