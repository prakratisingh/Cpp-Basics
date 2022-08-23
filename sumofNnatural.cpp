#include<bits/stdc++.h>
using namespace std;
int Sum(int num)
{
    int i;
    int result = 0;
    for(i=1;i<=num;i++)
    {
        result = result + i;
    }
    return(result);
}
int main()
{
    int n;
    cin>>n;
    int sum = Sum(n);
    cout<<sum<<endl;
    return(0);
}