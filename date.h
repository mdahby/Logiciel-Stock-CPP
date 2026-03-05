#ifndef DATE_H
#define DATE_H

class date
{
public:
    date(int, int, int);
    ~date();

    int getj();
    int getm();
    int geta();

    void setj(int);
    void setm(int);
    void seta(int);

private:
    int j, m, a;
};

#endif

