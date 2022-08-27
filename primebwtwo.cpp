#include<bits/stdc++.h>
using namespace std;
bool checkprime(int n1)
{
    int i,c=0; 
    for(i=2;i<n1;i++)
    {
        if(n1%i==0)
        {
            return(false);
            c=1;
            break;
        }
        else
        {
            return(true);
            break;
        }
    }
}
int main()
{
    int i,a,b;
 cin>>a>>b;
 for(i=a;i<=b;i++)
 {
    if(checkprime(i))
    {
        cout<<i<<endl;
    }
 }

}
