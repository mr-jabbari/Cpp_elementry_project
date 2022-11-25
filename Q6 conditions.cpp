#include <iostream>
#include <math.h>

using namespace std;


//Q6 for every conditions write a programm (< , > , == , !=)
int main() {
    int num1, num2;
    std::cout << "I want 2 number from you to show you some interesting stuff about >, <, ==, !=: " << std::endl;
    cin >> num1;
    cin >> num2;
    std::cout << "(a>b): "<<(num1>num2)<<endl<<
                 "(a<b): "<<(num1<num2)<<endl<<
                 "(a==b): "<<(num1==num2)<<endl<<
                 "(b!=a): "<<(num1!=num2);
    return 0;
}