//callbyreference or pass by reference

#include <iostream>

using namespace std;
void callbyvalue(int &x,int &y)
{
    int z=x;
    x=y;
    y=z;
}
int main()
{   
    int a=2,b=4;
    cout<<"value before swap is: "<<a<<" "<<b<<endl;
    callbyvalue(a,b);
    cout<<"value after swap is: "<<a<<" "<<b<<endl;
    return 0;
}
