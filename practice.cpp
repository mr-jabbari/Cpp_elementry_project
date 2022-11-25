#include <iostream>
#include <math.h>

using namespace std;

//Q8 write a program using AMALGARHAY BITY
int main()
{
    int num1, num2;
    cout << "I want 2 number: ";
    cin >> num1;
    cin >> num2;
    cout<<endl<<(num1<<)<<endl;
    cout<<(num1>>num2)<<endl;
    cout<<endl<<(num1&num2)<<endl;
    cout<<(num1|num2)<<endl;
    cout<<(num1^num2)<<endl;
    cout<<(~num2)<<endl;
    cout<<(~num1);
    return 0;
}


//Q9 ????
int main()
{
    int num1, num2;
    cout << "I want 2 number: ";
    cin >> num1;
    cin >> num2;
    cout<< int num3 = num1 > num2 ? num2 :num1;
    return 0;
}


//Q10 take 2 num, if num1>num2 print num1 otherwise print num2
int main()
{
    int num1, num2, num3;
    cout << "I want 2 number: ";
    cin >> num1;
    cin >> num2;
    num3 = num1 > num2;
    cout<< (num3 ? num3);
    cout<< (~num2 ? num3);
    return 0;
}


Q11 take SHOAA of circle give back the MASAHAT
int main()
{
    float num1;
    cout << "I want GHOTR: ";
    cin >> num1;
    cout<< "MASAHAT:  " << (3.14*(num1*num1/4));
    return 0;
}



// Q12 num1=10 , num2=8 , num3=6   =>   (~num1 & ~num2)  ,  (~num1 ^ num2)  ,  (~num1 || ~num2)
int main()
{
    int num1=10;
    int num2=8;
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    cout << "(~num1 & ~num2): " << (~num1 & ~num2) << endl;
    cout << "(~num1 ^ num2): " << (~num1 ^ num2) << endl;
    cout << "(~num1 || ~num2): " << (~num1 || ~num2) << endl;
    return 0;
}


//Q13 avrege of 2 number convert to float
int main()
{
    int num1,num2;
    cin >> num1;
    cin >> num2;
    cout << "num1 / num2 " << (float)num1/num2 << endl;

    return 0;
}


// Q14 draw
int main()
{
    cout << "_ 5 _ _ _ _ _ _ _" << endl;
    cout << "_ / 5 _ _ _ _ _ _" << endl;
    cout << "_ / / 5 _ _ _ _ _" << endl;
    cout << "_ / / / 5 _ _ _ _" << endl;
    cout << "      * * *      " << endl;
    cout << "        *        " << endl;
    cout << "                 " << endl;
    cout << "% % % % % % % % %" << endl;
    cout << "          *      " << endl;
    cout << "           *     " << endl;
    cout << "*           *    " << endl;
    cout << " *           *   " << endl;
    cout << "  * * * * * * * *" << endl;
    cout << " *           *   " << endl;
    cout << "*           *    " << endl;
    cout << "           *     " << endl;
    cout << "          *      " << endl;

    return 0;
}


// Q16 
int main()
{
    int num1,num2;
    cout << "give me num1 and num2: " << endl;
    cin >> num1;
    cin >> num2;
    cout << "power (num1, num2): " << pow(num1, num2) << endl;
    cout << "BAGHI MANDE (num1, num2): " << fmod(num1, num2) << endl;
    cout << "BAGHI MANDE (num1, -num2): " << fmod(num1, -num2) << endl;
    cout << "GHADR MOTLAG (num1, num2): " << fabs(num1) << endl;
    cout << "GHADR MOTLAG (num1, num2): " << abs(num1) << endl;
    
    
    return 0;
}


//Q17 (num1**num2)**num3       (num1%num2)%num3    print High and lowerNumber     Basic GUI
int main()
{
    double num1, num2, num3;
    cout << "HI" << endl << "WELCOME!!" << endl;
    cout << "give me your 3 number with SPACE between I Want to suprise you with my genus:" << endl;
    cin >>   num1;
    cin >>   num2;
    cin >>   num3;
    cout << "I BET I'M SMARTER THAN YOU, TRY ME WITH BIGER NUMBER IT'S JUST ESEY!!!" << endl;

    double power, per;
    long power_rou_high, power_rou_low, per_rou_high, per_rou_low;

    power = pow(pow(num1, num2) ,num3);
    per = fmod(fmod(num1, num2) , num3);
    power_rou_low = int(power);
    power_rou_high = power_rou_low + 1;
    per_rou_low = int(per);
    per_rou_high = per_rou_low + 1;
    cout << "___________________________" << endl;
    cout << "I khow how power works: " << endl;
    cout << "(" << num1 << "**" << num2 << ")**" << num3 << ": " << power << endl;
    cout <<"___________________________" << endl;
    cout << "I also khow how to calculate rest in division: " << endl;
    cout << "(" << num1 << "%" << num2 << ")%" << num3 << ": " << per << endl;
    cout <<"___________________________" << endl;
    cout << "round power up: " << power_rou_high << endl;
    cout << "round power down: " << power_rou_low << endl;
    cout << "round per up: " << per_rou_high << endl;
    cout << "round per down: " << per_rou_low << endl;
    return 0;
}



// Q18 some functions
main()
{
    cout << "log10 num1: " << log10(400) << endl;
    cout << "log neper num2: " << log(2.7) << endl;
    cout << "A lower: " << islower('A') << endl;
    cout << "b upper: " << isupper('b') << endl;
    cout << "to Aski: " << int('a') << endl;
    cout << "from Aski: " << char(97) << endl;
    return 0;
}


// Q 19 odd or even using if
main()
{
    cout << "give me a number to tell it's odd or even: " << endl;
    int num1;
    cin >> num1;

    if(num1 % 2 == 0){
        cout << "your number is EVEN" << endl;
    }else{
        cout << "your number is ODD" << endl;
    }
    return 0;
}


// Q20 take 2 number and if num1%num2=0 print "you can divid them" 
int main()
{
    cout << "give me a number to tell it's odd or even: " << endl;
    int num1, num2;
    cin >> num1;
    cin >> num2;
    if(num1 % num2 == 0){
        cout << "you can divid them" << endl;
    }else{
        cout << "you can't divid them" << endl;
    }
    return 0;
}


// Q21 take 2 number and print smaler one 
int main()
{
    cout << "give me 2 number to tell witch is smaller : " << endl;
    int num1, num2;
    cin >> num1;
    cin >> num2;
    if(num1 > num2){
        cout << num1 << endl;
    }else{
        cout << num2 << endl;
    }
    return 0;
}


// Q22 take one number and if num1=40 *2 other *3  
int main()
{
    cout << "give me 2 number to tell witch is smaller : " << endl;
    int num1;
    cin >> num1;
    if(num1 == 40){
        cout << 80 << endl;
    }else{
        cout << num1 *3 << endl;
    }
    return 0;
}


// // Try
// int main() {
//     std::cout << sizeof(int) << std::endl;
//     std::cout << sizeof(float) << std::endl;
//     std::cout << sizeof(double) << std::endl;
//     std::cout << sizeof(char) << std::endl;
//     return 0;
// }


// Power =>  pow(2,4)
// 
// 