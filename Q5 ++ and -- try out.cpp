#include <iostream>
#include <math.h>

using namespace std;


//Q5 solve fowlloing quoestion  (++a/--b), (a++*b--), (a++/--b),(b-- + a--)
int main() {
    float num1, num2;
    cout << "I want 2 number from you to show you some interesting stuff about ++ and --: " << endl;
    cin >> num1;
    cin >> num2;
    cout <<"(++a/--b): "<<((++num1)/(--num2))<<endl;
            num1--;num2++;
    cout<<"(a++*b--): "<<((num1++)*(num2--))<<endl;
            num1--;num2++;
    cout<<"(a++/--b): "<<((num1++)/(--num2))<<endl;
            num1--;num2++;
    cout<<"(b--+a--): "<<((num1--)+(num2--))<<endl;
    return 0;
}