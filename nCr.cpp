//nCr = n!/(n-r)! * r! 
//where n = objects , r = samples
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
    int n,r;
    cin>>n>>r;
    int nCr = factorial(n)/(factorial(n-r)*factorial(r));
    cout<<nCr<<endl;
}