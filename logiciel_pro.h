#ifndef LOGICIEL_PRO_H
#define LOGICIEL_PRO_H

#include "logiciel.h"

class logiciel_pro : public logiciel
{
public:
    logiciel_pro(string, string, date, string);
    ~logiciel_pro();

    string getCSS();

private:
    const string CSS;
};

#endif

