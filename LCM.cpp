#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int mul = n1*n2;
    int lcm = 1;
    for(int i=1;i<=mul;i++)
    {
        if(i%n1==0 && i%n2==0)
        {
            lcm = i;
            break;
        }
    }
    cout<<"LCM: "<<lcm<<endl;
    return 0;
}