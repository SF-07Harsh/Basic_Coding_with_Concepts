#include<iostream>
#include<math.h>
using namespace std;
double SquareRoot(int x)
{
    double sq;
    sq=sqrt(x);
    return sq;
}
double CubeRoot(int x)
{
    double cb;
    cb=cbrt(x);
    return cb;
}

int main()
{
    cout<<SquareRoot(49)<<"\n";
    cout<<CubeRoot(8)<<"\n";
    return 0;
}