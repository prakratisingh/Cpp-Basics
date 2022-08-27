//Strong number is a special number whose sum of the factorial of digits is equal to the original number. 
//For Example: 145 is strong number. Since, 1! + 4! + 5!
#include<bits/stdc++.h>
using namespace std;
int factorial(int n1)
{
    int i;
    int prod=1;
    for(i=1;i<=n1;i++)
    {
      prod = prod*i;
    }
    return prod;
}
int main()
{
    int n;
    cin>>n;
    int orig = n;
    int sum = 0;
    while(n!=0)
    {
        int l = n%10;
        sum = sum + factorial(l);
        n = n/10;
    }
    if(sum==orig)
    {
        cout<<sum<<endl;
        cout<<orig<<endl;
        cout<<"Strong Number"<<endl;
    }
    else
    {
        cout<<sum<<endl;
        cout<<orig<<endl;
        cout<<"Not Strong Number"<<endl;
    }
    return 0;
}