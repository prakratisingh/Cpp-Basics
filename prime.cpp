#include<iostream>
using namespace std;
int main()
{
    int num,c;
    cin>>num;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
        cout<<"Not Prime"<<endl;
        c=1;
        break;
        }
    else
    {
        cout<<"Prime"<<endl;
        break;
    }
    }
return 0;
}