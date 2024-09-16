#include<iostream>
using namespace std;

template <class T>
T Addition(T no1 , T no2)
{
    T Ans;
    Ans = no1 + no2;

    return Ans;
}

template <class T>
T Maximum(T no1 , T no2)
{
    if(no1 > no2)
    {
        return no1;
    }
    else
    {
        return no2;
    }
}

int main()
{
    int A = 11 , B = 21;
    int Ans = 0;

    Ans = Addition(A,B);
    cout<<"Addition is : "<< Ans <<"\n";
    Ans = Maximum(A,B);
    cout<<"largest no : "<< Ans <<"\n";

    float X = 90.78f , Y = 60.9f, Ret = 0.0f;

    Ret = Addition(X,Y);
    cout<<"Addition is : "<< Ret <<"\n";
    Ret = Maximum(X,Y);
    cout<<"largest no : "<< Ret <<"\n";

    return 0;
}