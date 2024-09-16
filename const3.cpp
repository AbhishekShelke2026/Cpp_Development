#include<iostream>
using namespace std;

class Demo
{
    public:
        int X , Y;
        Demo()
        {
            X = 10;
            Y = 21;
        }
        void Fun()
        {
            cout<<"inside Fun\n";  //non conatat funstion
            X++;
            Y++;
        }
        void Gun() const
        {
            cout<<"inside Gun\n";  //constant funstion
            //X++;
            //Y++;
        }
};

int main()
{
    Demo obj1;
    const Demo obj2;

    obj1.Fun();  //Noarmal object normal function
    obj1.Gun();  //Noarmal object constant funstion

    obj2.Fun();  //conatant object normal function
    obj2.Gun();  //constant object conatsnt function

     return 0;
}