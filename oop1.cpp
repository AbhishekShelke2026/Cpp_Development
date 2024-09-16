#include<iostream>
using namespace std;

//class deceleration
class Demo
{

    public:         //Access specifire
        int no1;    //charactristic
        int no2;    //charactristic

        Demo()      //Constructor
        {
            cout<<"inside constructor\n";
            no1 = 11;
            no2 = 21;
        }

        ~Demo()     //Destructor
        {
            cout<<"Inside Destructor\n";
        }
        void fun()  //Behavior
        {
            cout<<"Inside fun of Demo class\n";
        }

};

int main()
{
    cout<<"Inside main\n";
    Demo obj1;
    cout<<"Size of object is :"<<sizeof(obj1)<<"\n";
    cout<<"valude of no1 : "<<obj1.no1<<"\n";
    cout<<"valude of no2 : "<<obj1.no2<<"\n";

    obj1.fun();


    return 0;
}