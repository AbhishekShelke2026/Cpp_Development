#include<iostream>
using namespace std;

class Demo
{
    public:
        int A;
        Demo()
        {
            A = 10;
            cout<<"indise demo constructoe\n";
        }
    ~Demo()
    {
        cout<<"inside Demo Destructor\n";
    }
    void fun()
    {
        cout<<"indise fun of demo\n";
    }

};

class hello
{
    public:
        int B;
        hello()
        {
            B = 20;
            cout<<"indide hello constructor\n";
        }
        ~hello()
        {
            cout<<"inside hello Destructor\n";
        }
        void gun()
        {
            cout<<"inside gun of hello\n";
        }

};

class marvellous : public Demo , public hello
{
    public:
        int C;

        marvellous()
        {
            C = 30;
            cout<<"inside marvellous constructor\n";
        }
        ~marvellous()
        {
            cout<<"inside marvellous destructor\n";
        }
        void sun()
        {
            cout<<"indise sun of marvellous\n";
        }

};

int main()
{
    marvellous mobj;

    mobj.fun();
    mobj.gun();
    mobj.sun();

    cout<<A<<"\n";
    cout<<B<<"\n";
    cout<<C<<"\n";
   
    cout<<mobj.A<<"\n";
    cout<<mobj.B<<"\n";
    cout<<mobj.C<<"\n";

    return 0;
}