#include<bits/stdc++.h>
using namespace std;
int CountDig(int n)
{
    int l,c=0;
    while(n!=0)
    {
    c++;
    n=n/10;
    }
    return c;
}
int main()
{
    int num;int dig = 0;
    cin>>num;
    dig = CountDig(num);
    cout<<"NoOfDigits: "<<dig<<endl;
    return 0;
}