// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int num;
//     cin>>num;
//     int sum = 0;
//     int orinum=num;
//     int l;
//     while(num!=0)
//     {
//         l = num%10;
//         sum+= pow(l,3);
//         num=num/10;
//     }
//     if(sum==orinum)
//     {
//         cout<<sum;
//         cout<<"Armstrong"<<endl;
//     }
//     else
//     {
//         cout<<sum;
//         cout<<"Not Armstrong"<<endl;
//     }
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     int result = 0;
//     int temp = n;
//     while(temp>0)
//     {
//         result = result + pow((temp%10),3);
//         temp = temp/10;
//     }

//     if(result == n)
//     {
//         cout<<"Armstrong..!"<<endl;
//     }
//     else
//     {
//         cout<<"Not Armstrong..!"<<endl;
//     }
// }

#include<iostream>
#include<math.h>
using namespace std;
bool Armstrong(int i)
{
    bool flag=false;
    int temp=i,arm=0;
    int temp2;
    while(temp!=0)
    {
        temp2 = temp % 10;
        arm = arm + (temp2*temp2*temp2);
        temp=temp/10;
    }
    if(arm==i)
    {
        flag=true;
    }
    return flag;
}
int main()
{
    //armstrong number
    //an integer such that the sum of the cubes of its digits is equal to the number itself.
    //printing armstrong numbers under 1000
    for(int i=0;i<1000;i++)
    {
        bool c = Armstrong(i);
        if(c==true)
        {
            cout<<i<<"  ";
        }
    }
    return 0;
}