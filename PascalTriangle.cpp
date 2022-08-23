// 1                   0C0
// 1 1                1C0 1C1
// 1 2 1             2C0 2C1 2C2
// 1 3 3 1          3C0 3C1 3C2 3C3
// 1 4 6 4 1

#include<bits/stdc++.h>
using namespace std;
int fact(int num)
{
    int prod = 1;
    for(int i=1;i<=num;i++)
    {
        prod = prod*i;
    }
    return(prod);
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int k=n-i;k>0;k--)
        cout<<" ";
        for(int j=0;j<=i;j++)
        {
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}