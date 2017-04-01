//
// Created by Samuel on 2017/4/1.
//

#ifndef ASSIGNMENT_0302_DATECLASS_H
#define ASSIGNMENT_0302_DATECLASS_H
#include "monthClass.h"

class Date
{
private:
    int date;
    enum month{JAN=1,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC};
public:
    Date(char *month, int date);

};

Date::Date(char *month, int date)
{

}


#endif //ASSIGNMENT_0302_DATECLASS_H
