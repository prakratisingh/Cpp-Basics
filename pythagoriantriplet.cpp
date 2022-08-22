#include<bits/stdc++.h>
using namespace std;
int Max(int n1,int n2,int n3)
{
    if(n1>n2 && n1>n3 )
    {
        return n1;
    }
    else if(n2>n1 && n2>n3)
    {
        return n2;
    }
    else
    {
        return n3;
    }
}
int main()
{
    int a,b,c,square=0;
    cin>>a>>b>>c;
    int max = Max(a,b,c);
    cout<<max<<endl;
    if(max==a)
    {
        square = (b*b)+(c*c);
    }
    else if(max==b)
    {
        square = (a*a)+(c*c);
    }
    else
    {
       square = (a*a)+(b*b); 
    }
    if((max*max)==square)
    {
        cout<<"Pythagorian Triplet"<<endl;
    }
    else
    {
        cout<<"Not Pythagorian Triplet"<<endl;
    }
}