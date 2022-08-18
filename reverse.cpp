#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int reverse=0;
    while(num>0)
    {
        int l = num%10;
        reverse = (reverse*10)+l;
        num=num/10;
    }
    cout<<reverse;
}