#include "logiciel.h"

logiciel::logiciel(string s1, string s2, date s3):IDU(s1),DP(s3)
{
    version = s2;
}

logiciel::~logiciel() 
{
	
}

void logiciel::setversion(string a) 
{ 
	version = a; 
}
void logiciel::setDP(date a) 
{ 
	DP = a; 
}

string logiciel::getIDU() 
{ 
	return IDU; 
}
string logiciel::getversion() 
{ 
	return version; 
}
date logiciel::getDP() 
{ 
	return DP; 
}


