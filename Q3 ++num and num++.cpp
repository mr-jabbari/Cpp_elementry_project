#include <iostream>
#include <math.h>

using namespace std;


// Q3 Take 2 number 8 and 3 for ++ before and after()
int main() {
    int num1 = 8;
    int num2 = 3;
    std::cout << num1++ * ++num2 << std::endl;
    return 0;
}