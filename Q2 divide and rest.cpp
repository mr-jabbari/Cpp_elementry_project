#include <iostream>
#include <math.h>

using namespace std;


//Q2 get 2 number a and b: print divid and rest(baghi mande & khareg ghesmat)
int main()
{
    int num1,num2;
    cout << "just give me 2 number"  << std::endl;
    cin >> num1;
    cin >> num2;
    cout << "answer: ";
    cout << num1/num2  << std::endl;
    cout << "rest :";
    cout << num1%num2;


    return 0;
}