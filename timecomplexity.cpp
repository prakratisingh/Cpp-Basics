//Time complexity of an algorithm tells the time taken by the algorithm as a function of the length of the input.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a=0;
    cin>>n;
    for(i=0;i<=n;i++)
    {
        a=a+i;
    }
    cout<<a; 
//Time complexity of this algorithm will be T(n) as there is only single loop which is running n times.(linear proportional)
int n1,i,a1=0;
    cin>>n1;
    for(i=0;i<=n1;i++)
    {
        for(int j=0;j<=n;j++)
        {
        a1=a1+i;
        }
    }
    cout<<a1; 
//Time complexity for ith loop as it will run (n*n) times will be T(n^2). (quadratic proportional) 
}
