// call by reference 
//here in memeory location firstly value of a nd b is stored bt when function is call then x is a new name given to a 
// and y is a new name given to b 

#include <iostream>

using namespace std;

int callbyreference(int &x, int &y)
{
    return(x+y);
}
int main()
{
    int a=3, b=5;
    int c=callbyreference(a,b);
    cout<<"sum is "<<c<<endl;
    return 0;
}


