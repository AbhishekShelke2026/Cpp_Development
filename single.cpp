#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;
        Base()
        {
            cout<<"inside Base constructor\n";
            A = 11;
            B = 21;
        }
        ~Base()
        {
            cout<<"inside Base Detructor\n";
        }
        void fun()
        {
            cout<<"inside Base fun\n";
        }
};

class Derived : public Base
{
    public:
        int X,Y;
        Derived()
        {
            cout<<"Insude Derived Constructor\n";
            X = 51;
            Y = 101;
        }
        ~Derived()
        {
            cout<<"Inside Derived Destructor\n";
        }
        void Gun()
        {
            cout<<"inside Derived Gun\n";
        }
};
int main()
{
    Derived dobj;
    cout<<"Size of object is :"<<sizeof(dobj)<<"\n";

    cout<<dobj.A<<"\n";
    cout<<dobj.B<<"\n";
    cout<<dobj.X<<"\n";
    cout<<dobj.Y<<"\n";

    dobj.fun();
    dobj.Gun();
    
    return 0;
}