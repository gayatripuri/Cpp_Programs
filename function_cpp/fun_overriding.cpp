//function overriding
#include <iostream>
using namespace std;
class Animal{
    public:
    void makesound()
    {
    cout<<"animal sounds"<<endl;}
};

class dog : public Animal{
    public:
      void makesound(){
    cout<<"dogs bark"<<endl;}
};
class cat : public Animal{
    public:
      void makesound(){
    cout<<"cats meow"<<endl;}
};

int main()
{   
    Animal a; //here we create object a for class Animal
    a.makesound();
    dog d;   //here we create objecte d for class dog
    d.makesound();
    cat c;  //here we create object c for class cat
    c.makesound();
    return 0;
}

