#include<iostream>
using namespace std;
//JUMPS IN LOOPS
//To control flow of loops in meeting specified condition.

//Statements used are - break, continue
//continue  - used to skip to the next iteration
//break - used to terminate a loop


//Can go out on odd days and only until pocket money remains. 

// int main()
// {
//     int pocketm = 3000;
//     for(int date = 1;date<=30;date++)
//     {
//         if(date%2==0)
//         {
//             continue;
//         }
//         if(pocketm==0)
//         {
//             break;
//         }
//             cout<<"Go out today"<<endl;
//             pocketm = pocketm -300;
//     }
// }

//Prime number
// int main()
// {
//     int n,i;
//     cin>>n;
//     for(i=2;i<n;i++)
//     {
//         if(n%i==0)
//         {
//             cout<<"Non Prime"<<endl;
//             break;
//         }
//     }
//     if(i==n){
//     cout<<"Prime"<<endl;}
//     return 0;
// }

//Print prime b/w a and b
int main()
{
    int a,b,i;
    cin>>a>>b;
    for(int num = a ;num<=b;num++)
    {
        for(i=2;i<num;i++)
        {
          if(num%i==0) {
            break;
          }
        }
        if(i==num)
        {
            cout<<num<<endl;
        }
    }
}