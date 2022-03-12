//call by value or pass by value in function
// here no swaping is done because callbyvalue function only take value of actual arguments
//and here actual argument are a and b and formal argument are x and y


#include <iostream>

using namespace std;
void callbyvalue(int x,int y)
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
