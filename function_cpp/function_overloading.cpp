//function overloading 

#include<iostream>
using namespace std;
 
int add(int a,int b)
{   cout<<"function 1"<<endl;
    return(a+b);
	
}

double add(double a, double b)
{cout<<"function 2"<<endl;
	return(a+b);
	
}

int add(int a,int b,int c)
{
		cout<<"function 3"<<endl;
	return(a+b+c);
//	cout<<"function 3"<<endl;
}
 
 int main()
 {
 	cout<<"the addition is: "<<add(1,2)<<endl;
 	
 	cout<<"the addition is: "<<add(1.3,2.5)<<endl;
 	
 	cout<<"the addition is: "<<add(1,2,3)<<endl;
 	return 0;
 }

