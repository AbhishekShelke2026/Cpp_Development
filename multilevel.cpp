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
class DerivedX : public Derived
{
    public:
        int P;
        DerivedX()
        {
            cout<<"inside DerivedX constructor\n";
            P = 111;
        }
        ~DerivedX()
        {
            cout<<"inside DerivrdX Destructor\n";
        }
        void sun()
        {
            cout<<"inside DerivedX Sun\n";
        }
};
int main()
{
    DerivedX dobj;   //constructor of derivedX
    cout<<"Size of object is :"<<sizeof(dobj)<<"\n";  //20

    cout<<dobj.A<<"\n";  //11
    cout<<dobj.B<<"\n";  //21
    cout<<dobj.X<<"\n";  //51
    cout<<dobj.Y<<"\n";  //101
    cout<<dobj.P<<"\n";  //111

    dobj.fun();  //base fn
    dobj.Gun();  //derivrd gun
    dobj.sun();  //derivedX sun

    
    return 0;
}