#include<bits/stdc++.h>
using namespace std;
int HexatoDec(string n)
{
    int answer = 0;
    int x = 1,y;
    int s = n.size();
    for(int i=s-1;i>=0;i--)
    {
       if(n[i]>='0' && n[i]<='9')
       {
        answer = answer + x*(n[i]- '0');
       }
       else if(n[i]>='A' && n[i]<='F')
       {
        answer = answer + x*(n[i]-'A'+10);
       }
       x = x*16;
    }
    return(answer);
}
int main()
{
    string n;
    cin>>n;
    cout<<HexatoDec(n)<<endl;
    return(0);
}