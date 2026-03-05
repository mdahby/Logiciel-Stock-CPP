#include "date.h"

date::date(int jj, int mm, int aa)
{
    j = jj;
    m = mm;
    a = aa;
}

date::~date() {}

int date::getj() 
{ 
	return j; 
}
int date::getm() 
{ 	
	return m;
}
int date::geta() 
{ 
	return a; 
}

void date::setj(int x) 
{ 
	j = x; 
}
void date::setm(int x) 
{ 
	m = x; 
}
void date::seta(int x) 
{ 
	a = x; 
}

