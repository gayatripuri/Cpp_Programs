//here we use function overloading it means we take two functions with same name
//area of rectangle and circle using function
#include <iostream>

using namespace std;
int area(int ,int);
float area(int);
int main()
{
    int r;
    cout<<"enter radius of circle "<<endl;
    cin>>r;
    float A=area(r);
    cout<<"area of circle is "<<A<<endl;
    int l,b,a;
    cout<<"enter length and breadth of rectangle "<<endl;
    cin>>l>>b;
    a=area(l,b);
    cout<<"area of rectangle is: "<<a;
    return 0;
}
int area(int x, int y)
{
    return(x*y);
}
float area(int R)
{
    return(3.14*R*R);
}
