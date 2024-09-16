#include<iostream>
using namespace std;

float Area(float Radious , float PI = 3.14)
{
    float Ans = 0.0f;
    Ans = PI * Radious * Radious;
    return Ans;
}
int main()
{
    float Ret = 0.0f;

    Ret = Area (5.8 , 7.20);
    cout<<"Area is :"<<Ret<<"\n";

    Ret = Area (5.8);
    cout<<"Area is :"<<Ret<<"\n";


    return 0;
}