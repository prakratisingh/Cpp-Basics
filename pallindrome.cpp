#include<bits/stdc++.h>
using namespace std;
int Reverse(int n)
{
    int reverse = 0; 
    while(n>0)
    {
        int l = n%10;
        reverse = (reverse*10)+l;
        n=n/10;
    }
    cout<<reverse<<endl;
    return reverse;
}
int main()
{
    int n;
    cin>>n;
    int orig = n;
    int reverse = Reverse(n);
    if(orig==reverse)
    {
        cout<<"Pallindrome"<<endl;
    }
    else
    {
        cout<<"Not Pallindrome"<<endl;
    }
return 0;
}