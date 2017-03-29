#include<iostream>

class complexClass
{
    double x;
    double y;
public:
    void operator = (complexClass a);
    complexClass operator + (complexClass a);
    complexClass operator - (complexClass a);

};
int main(int argc, char const *argv[]) {
    std::cout << "Hello world" << '\n';
    return 0;
}
