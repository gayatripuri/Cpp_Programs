#include<iostream>
using namespace std;
int main()
{
	int arr[2]= {1,2};
	double myarr[1];
	myarr[0]=2.333;
	int array[3];
	
	cout<<"enter three integer variable"<<endl;
	for(int i=0; i<3; i++)
	{
		cin>>array[i];
	} 
	cout<<"the values u entered"<<endl;
	for(int i=0; i<3; i++)
	{
		cout<<array[i]<<endl;
	}
}
