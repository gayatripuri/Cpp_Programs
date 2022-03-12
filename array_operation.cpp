//here we are doing add, sub, mul operation on arrays

#include <iostream>
using namespace std;
int main()
{
   int A[3];
   int B[3];
   int add[3],sub[3], mul[3];
   
   cout<<"enter 3 integer for array A"<<endl;
   for(int i=0; i<3; i++)
   {
       cin>>A[i];
   }
   cout<<"enter 3 integer for array B"<<endl;
   for(int i=0; i<3; i++)
   {
       cin>>B[i];
   }
   cout<<"the addition of array A and B is"<<endl;
   for(int i=0;i<3;i++)
   {
       add[i]=A[i]+B[i];
       cout<<add[i]<<" ";
   }
   return 0;
}
