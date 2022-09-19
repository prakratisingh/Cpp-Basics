#include<bits/stdc++.h>
using namespace std;
int assign0(int arr[])
{
    for(int i=0;i<26;i++)
    {
        arr[i] = 0;
    }
}
bool anagram(int arr1[26],int arr2[26])
{
    for(int i=0;i<26;i++)
    {
        if(arr1[i]!=arr2[i])
        {
            return false;
            break;
        }
        else
        {
            return true;
        }
    }
}
int main()
{
    string str1,str2;
    cout<<"Enter first string: "<<endl;
    cin>>str1;
    cout<<"Enter second: "<<endl;
    cin>>str2;
    int arr1[26],arr2[26];
    assign0(arr1);
    assign0(arr2);

    for(int i=0;i<str1.length();i++)
    {
        str1[i]=tolower(str1[i]);
    }
    for(int i=0;i<str2.length();i++)
    {
        str2[i]=tolower(str2[i]);
    }

    if(anagram(arr1,arr2)==true)
    {
        cout<<"Anagram"<<endl;
    }
    else
    {
        cout<<"Not Anagram"<<endl;
    }
}