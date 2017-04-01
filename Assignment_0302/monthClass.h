//
// Created by Samuel on 2017/4/1.
//

#ifndef ASSIGNMENT_0302_MONTHCLASS_H
#define ASSIGNMENT_0302_MONTHCLASS_H
#include <iostream>
using namespace std;
class Month
{
public:
    Month (char fir_letter, char sen_letter, char thr_letter);
    Month (int monthNumber);
    Month ();
    void inputNumber();
    void inputChar();
    void outputNumber();
    void outputChar();
    Month nectMonth();
private:
    int month;
};

Month::Month(char fir_letter, char sen_letter, char thr_letter)
{
    if ((fir_letter =='j') && (sen_letter =='a') && (thr_letter =='n'))
        month = 1;
    else if ((fir_letter == 'f') && (sen_letter == 'e') && (thr_letter == 'b'))
        this->month = 2;
    else if ((fir_letter == 'm') && (sen_letter == 'a') && (thr_letter == 'r'))
        this->month = 3;
    else if ((fir_letter == 'a') && (sen_letter == 'p') && (thr_letter == 'r'))
        this->month = 4;
    else if ((fir_letter == 'm') && (sen_letter == 'a') && (thr_letter == 'y'))
        this->month = 5;
    else if ((fir_letter == 'j') && (sen_letter == 'u') && thr_letter == 'n')
        this->month = 6;
    else if ((fir_letter == 'j') && (sen_letter == 'u') && (thr_letter == 'l'))
        this->month = 7;
    else if ((fir_letter == 'a') && (sen_letter == 'u') && (thr_letter == 'g'))
        this->month = 8;
    else if ((fir_letter == 's')&&(sen_letter == 'e')&&(thr_letter == 'p'))
        this->month = 9;
    else if ((fir_letter == 'o') && (sen_letter == 'c') && (thr_letter == 't'))
        this->month = 10;
    else if ((fir_letter == 'n') && (sen_letter == 'o') && (thr_letter == 'v'))
        this->month = 11;
    else if ((fir_letter == 'd') && (sen_letter == 'e') && (thr_letter == 'c'))
        this->month = 12;

}

Month::Month(int monthNumber)
{
    this->month = monthNumber;
}

Month::Month()
{
    this->month = 4; // as a default
}

void Month::inputNumber()
{
    int numb;
    cout << "Enter the number of month: ";
    cin >> numb;
    this->month = numb;
}

void Month::inputChar()
{
    char c1,c2,c3;
    cout << "Enter the first three letters of month: ";
    cin  >> c1 >> c2 >> c3;
    Month cha(c1,c2,c3);    // its awaird to use a new Month class
    this->month = cha.month;
}

void Month::outputNumber()
{
    cout << this->month << endl;
}

void Month::outputChar()
{
    if (month == 1)
    {cout << "January" << endl;}
    else if (month == 2)
    {cout << "February" << endl;}
    else if (month == 3)
    {cout << "March" << endl;}
    else if (month == 4)
    {cout << "April" << endl;}
    else if (month == 5)
    {cout << "May" << endl;}
    else if (month == 6)
    {cout << "June" << endl;}
    else if (month == 7)
    {cout << "July" << endl;}
    else if (month == 8)
    {cout << "August" << endl;}
    else if (month == 9)
    {cout << "September" << endl;}
    else if (month == 10)
    {cout << "October" << endl;}
    else if (month == 11)
    {cout << "November" << endl;}
    else if (month == 12)
    {cout << "December" << endl;}
}

Month Month::nectMonth() {
    if (this->month < 12)
    {this->month++;}
    else if (this->month == 12)
    {this->month = 1;}
    return Month();
}

#endif //ASSIGNMENT_0302_MONTHCLASS_H
