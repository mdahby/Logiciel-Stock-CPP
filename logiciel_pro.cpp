#include "logiciel_pro.h"

logiciel_pro::logiciel_pro(string s1, string s2, date s3, string s4): logiciel(s1, s2, s3), CSS(s4)
{
	
}

logiciel_pro::~logiciel_pro() 
{

}

string logiciel_pro::getCSS()
{
    return CSS;
}

