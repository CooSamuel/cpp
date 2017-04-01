#include <iostream>
//#include "monthClass.h"
using namespace std;

enum month{
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};

class DateClass {
private:
//public:
    int day;
    month mon;
public:
    DateClass(int d, month m);
    DateClass(int d, int m);
    void outputDate();
    void operator = (DateClass dateClass);
    void operator ++ ();
    bool operator < (DateClass dateClass);
    bool operator > (DateClass dateClass);
    bool operator == (DateClass dateClass);
    virtual ~DateClass ();

};

int main() // here is the main function of the file
{
    DateClass date1(31, 1);
    DateClass date2(3, 4);
    DateClass date3(18, 4);
    bool d = true;
    cout << "\n" <<d << endl;
    cout << "date1 =>";
    date1.outputDate();
    cout << "date2 =>";
    date2.outputDate();

//    cout << "d2 mon =>" << date2.mon << endl;
//    cout << "d1 mon =>" << date1.mon << endl;

    if (date1 < date2)
    {
        cout << "d1 < d2" << endl;
    } else{
        cout << "d1 > d2" << endl;
    }
    if (date3 > date2)
    {
        cout << "d3 > d2" << endl;
    } else{
        cout << "d3 < d2" << endl;
    }
    DateClass date4(34,11);
    if (date1 == date4)
    {cout << "same day" << endl;}
//    if (date1.mon < date2.mon)
//    {
//        cout << "d1mon < d2mon" << endl;
//    } else{
//        cout << "d1mon > d2mon" << endl;
//    }
//    date2 = date1;
//    ++date2;
    ++date1;
    date1.outputDate();
    date2.outputDate();
    date3.outputDate();
    date4.outputDate();
    return 0;
}

DateClass::DateClass(int d, month m)
{
    day = d;
    mon = m;
}

void DateClass::outputDate()
{
    string strMonth;
    if (mon == 1)
        strMonth = "JAN";
    else if (mon == 2)
        strMonth = "FEB";
    else if (mon == 3)
        strMonth = "MAR";
    else if (mon == 4)
        strMonth = "APR";
    else if (mon == 5)
        strMonth = "MAY";
    else if (mon == 6)
        strMonth = "JUN";
    else if (mon == 7)
        strMonth = "JUL";
    else if (mon == 8)
        strMonth = "AUG";
    else if (mon == 9)
        strMonth = "SEP";
    else if (mon == 10)
        strMonth = "OCT";
    else if (mon == 11)
        strMonth = "NOV";
    else if (mon == 12)
        strMonth = "DEC";

    if (mon == 1 && day == 32)
    {mon = month(2); day = day-31;}
    else if (mon == 2 && (day >= 30))
    {mon = month(3); day = day-29;}
    else if (mon == 3 && (day >= 32))
    {mon = month(4); day = day-31;}
    else if (mon == 4 && (day >= 31))
    {mon = month(5); day = day-30;}
    else if (mon == 5 && (day >= 32))
    {mon = month(6); day = day-31;}
    else if (mon == 6 && (day >= 31))
    {mon = month(7); day = day-30;}
    else if (mon == 7 && (day >= 32))
    {mon = month(8); day = day-31;}
    else if (mon == 8 && (day >= 32))
    {mon = month(9); day = day-31;}
    else if (mon == 9 && (day >= 31))
    {mon = month(10); day = day-30;}
    else if (mon == 10 && (day >= 32))
    {mon = month(11); day = day -31;}
    else if (mon == 11 && (day >= 31))
    {mon = month(12); day = day-30;}
    else if (mon == 12 && (day >= 32))
    {mon = month(1); day = day-31;}

    cout << strMonth << "-" << day << endl;
}

DateClass::~DateClass() { }

DateClass::DateClass(int d, int m)
{
    day = d;
    mon = month(m); // to use enumution to decide the month with int numbers;
}

void DateClass::operator ++ () {
    day++;
    if (mon == 1 && day == 32)
    {mon = month(2); day = day-31;}
    else if (mon == 2 && (day >= 30))
    {mon = month(3); day = day-29;}
    else if (mon == 3 && (day >= 32))
    {mon = month(4); day = day-31;}
    else if (mon == 4 && (day >= 31))
    {mon = month(5); day = day-30;}
    else if (mon == 5 && (day >= 32))
    {mon = month(6); day = day-31;}
    else if (mon == 6 && (day >= 31))
    {mon = month(7); day = day-30;}
    else if (mon == 7 && (day >= 32))
    {mon = month(8); day = day-31;}
    else if (mon == 8 && (day >= 32))
    {mon = month(9); day = day-31;}
    else if (mon == 9 && (day >= 31))
    {mon = month(10); day = day-30;}
    else if (mon == 10 && (day >= 32))
    {mon = month(11); day = day -31;}
    else if (mon == 11 && (day >= 31))
    {mon = month(12); day = day-30;}
    else if (mon == 12 && (day >= 32))
    {mon = month(1); day = day-31;}
}

void DateClass::operator=(DateClass dateClass) {
    day = dateClass.day;
    mon = dateClass.mon;
}

bool DateClass::operator < (DateClass dateClass)
{
    if (mon < dateClass.mon) {
        return true;
    } else if (mon == dateClass.mon)
    {
        return day < dateClass.day;
    } else { return false;}

}
bool DateClass::operator > (DateClass dateClass)
{
    if (mon > dateClass.mon) {
        return true;
    } else if (mon == dateClass.mon)
    {
        return day > dateClass.day;
    } else { return false;}

}

bool DateClass::operator==(DateClass dateClass) {
    return mon == dateClass.mon && day == dateClass.day;
}

