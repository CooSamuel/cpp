#include <iostream>
#include "monthClass.h"
using namespace std;

//int outputsome(int a, int b)
//{
//    return (a + b);
//    cout << "a = " << a << endl;
//    cout << "b = " << b << endl;
//}

//void sum(int *pp1, int *pp2);
void sum(int &rf1, int &rf2);

int main()
{

    int x, y;
    cout<< "Please input an integer\n";
    cin>>x;
    sum(x,y);   // used this kinds of function to change the value of attributes
    cout<< "The sum from 1 to "<<x<< " is " <<y<<endl;
    return 0;
}
void sum(int &rf1, int &rf2)
{

    rf2 = 0;
    for (int k = 1; k <= rf1 +1; k++) {
        rf2+=k;
    }
}
