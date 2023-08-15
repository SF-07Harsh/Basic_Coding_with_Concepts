#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
//main program
int main()
{
    double base;
    int exp;
    
    cout<<"Enter base: "; cin>>base;
 
    cout<<"Enter Exponent: "; cin>>exp;
 
    double result = 1;
    
    // can use this loop too
    // for(int i = 0; i < exp; ++i)
    //     result *= base;
       
    // can use this loop too
    // for(int i = 1; i <= exp; ++i)
    //         result *= base;
    
    // can use this loop too
    // for (; exp!= 0; --exp)
    //     result = result * base;
        
    while (exp != 0)
    {
        result = result * base;
        --exp;
    }
 
    //printing result
    cout <<  " answer = " << result;

    return 0;
}