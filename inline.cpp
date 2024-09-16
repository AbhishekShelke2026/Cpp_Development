#include<iostream>
using namespace std;

inline int Addition(int A , int  B)
{
    return A + B;
}
int main()
{
    int No1 = 10 , No2 = 20 , Ans = 0;

    Ans = Addition(No1 , No2);

    cout<<"Addition is :"<<Ans<<"\n";

    return 0;
}