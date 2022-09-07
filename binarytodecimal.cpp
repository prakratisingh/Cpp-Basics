#include<bits/stdc++.h>
using namespace std;
int BintoDec(int n)
{
    int ans = 0;
    int x=1,y;
    while(n>0)
    {
        y=n%10;
        ans = ans + (x*y);
        x = x*2;
        n=n/10;
    }
    return(ans);
}
int main()
{
    int n;
    cin>>n;
    cout<<BintoDec(n)<<endl;
    return(0);
}