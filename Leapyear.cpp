#include<bits/stdc++.h>
using namespace std;
bool Checkleap(int year)
{
    if(year%4==0)
    {
        return true;
    }
    else
    {
        return false;
    }
} 
int main()
{
    int year;
    cin>>year;
    bool check = Checkleap(year);
    if(check == true)
    {
        cout<<"Leap Year"<<endl;
    }
    else
    {
        cout<<"Not a Leap Year"<<endl;
    }
    return 0;
}