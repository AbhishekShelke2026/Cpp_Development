#include<iostream>

namespace Marvellous
{
    class Demo
    {
        //logic
    };
}

namespace PPA
{
    class Hello
    {
        //logic
    };
}

using namespace Marvellous;

int main()
{
    std :: cout<<"inside main\n";

    Demo dobj;
    PPA :: Hello hobj;


    return 0;
}
