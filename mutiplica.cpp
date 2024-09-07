#include<iostream>
using namespace std;
int multiplica(int n, int m)
{
    if(m==0)
    {
        return 0;
    }
    else
    {
        return n+multiplica(n, m-1);
    }
}
int main()
{
    int n, m;
    cout<<"ingresa n:"; cin>>n;
    cout<<"ingresa m:"; cin>>m;
    cout<<"resultado:"<<multiplica(n, m);
    return 0;
}