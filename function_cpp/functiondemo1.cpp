#include<iostream>
using namespace std;
int maximum(int a,int b);
int main()
{
	int a,b;
	cout<<"enter two num: "<<endl;
	cin>>a>>b;
	
	int c= maximum(a,b);
	cout<<"greater num is: "<<c<<endl;
    return 0;
}
 int maximum(int x,int y)
 {
 	if(x>y)
 	return x;
 	else
 	return y;
 }
