//with a third temporary variable
#include<bits/stdc++.h>
using namespace std;
// void Swap(int n1,int n2)
// {
//     int temp;
//     temp = n1;
//     n1 = n2;
//     n2 = temp;
//     cout<<n1<<" "<<n2;
// }
// int main()
// {
//     int n1,n2;
//     cin>>n1>>n2;
//     Swap(n1,n2);
//     return 0;
// }

//without a third variable
void Swap(int n1,int n2)
{
    n1 = n1+n2;
    n2 = n1-n2;
    n1 = n1-n2;
    cout<<n1<<" "<<n2;
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    Swap(n1,n2);
    return 0;
}