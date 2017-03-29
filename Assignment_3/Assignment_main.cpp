#include<iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    enum Month{Jan=1,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
    enum Month month;
    month = Feb;
    cout << month;
    cout << 2;
    return 0;
}
