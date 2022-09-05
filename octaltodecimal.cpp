#include<bits/stdc++.h>
using namespace std;
int OctaltoDec(int n)
{
    int ans = 0;
    int x=1,y;
    while(n>0)
    {
        y=n%10;
        ans = ans + (x*y);
        x = x*8;
        n=n/10;
    }
    return(ans);
}
int main()
{
    int n;
    cin>>n;
    cout<<OctaltoDec(n)<<endl;
    return(0);
}