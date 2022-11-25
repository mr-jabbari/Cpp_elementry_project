#include <iostream>
#include <math.h>

using namespace std;


//Q4 take 2 number write if a>b or a<b 
int main() {
    int num1, num2;
    std::cout << "I want 2 number from you to tell you which one is bigger: " << std::endl;
    cin >> num1;
    cin >> num2;
    std::cout << "first number is bigger than second ";
    std::cout << (num1 > num2) << std::endl;
    std::cout << "second number is bigger than first ";
    std::cout << (num1 < num2) << std::endl;
    return 0;
}