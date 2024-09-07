#include<iostream>
using namespace std;
int combinatoria(int n, int k)
{
    if(n==k)
    {
        return 1;
    }
    else
    {
        if(k==1)
        {
            return n;
        }
        else
        {
            return combinatoria(n-1, k-1)+combinatoria(n-1, k);
        }
    }
}
int main()
{
    int n, k;
    do
    {
        cout<<"ingrese n:"; cin>>n;
        cout<<"ingrese k:"; cin>>k;
        if(n>k)
        {
            cout<<"resultado:"<<combinatoria(n, k);
        }
        else
        {
            cout<<"incorrecto"<<endl;
            cout<<"n debe ser mayor que k"<<endl;
        }
    } while (n<k);
    return 0;
}