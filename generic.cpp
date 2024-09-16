#include<iostream>
using namespace std;

int Addition(int no1 , int no2)
{
    int Ans;
    Ans = no1 + no2;

    return Ans;
}

int Maximum(int no1 , int no2)
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

    return 0;
}