//Space complexity - Space complexity refers to the total amount of memory space used by an algorithm/program, 
//including the space of input values for execution.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a=0;
    cin>>n;
    for(i=0;i<=n;i++)
    {
        a=a+i;
    }
    cout<<a; 
    
//This code has three variables defined (n,i,a). Each of them is of integer data type. Hence the space occupied by this code 
//will be (4*3 = 12bytes).
//If we are making an array of size n, then space complexity will be directly proportional to the size 'n' of the array.
}
