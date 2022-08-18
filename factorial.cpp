#include<bits/stdc++.h>
using namespace std;
int factorial(int num)
{
    int i;
    int prod=1;
    for(i=1;i<=num;i++)
    {
      prod = prod*i;
    }
    return(prod);
}
int main()
{
    int n;
    cin>>n;
int ans = factorial(n);
cout<<ans<<endl;
}