#include<iostream>
using namespace std;

class marvellous
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
class Demo : public marvellous
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

class hello : public marvellous
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

int main()
{
    Demo dobj;
    hello hobj;

    return 0;
}