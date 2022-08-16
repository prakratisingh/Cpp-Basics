#include<iostream>
using namespace std;
//Switch - substitutes for long if-else statements. 
//compairing a variable against multiple values. 

//Hello in diff languages using switch

// int main()
// {
//     char ch;
//     cout<<"Enter a button"<<endl;
//     cin>>ch;

//     switch(ch){
//     case 'a':
//         cout<<"Hello"<<endl;
//         break;
//     case 'b':
//         cout<<"Namaste"<<endl;
//         break;
//     case 'c':
//         cout<<"Hola"<<endl;
//         break;
//     case 'd':
//         cout<<"Ciao"<<endl;
//         break;
//     default:
//         cout<<"Im still learning"<<endl;
//     }
// return 0;
// }

//Simple Calculator

int main()
{
    char ch;
    float a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"Enter a mathematical symbol"<<endl;
    cin>>ch;
    switch(ch)
    {
case '+': 
    cout<<a+b<<endl;
    break;
case '-':
    cout<<a-b<<endl;
    break;
case '*':
    cout<<a*b<<endl;
    break;
case '/':
    cout<<a/b<<endl;
    break;
default:
     cout<<"I do not understand this"<<endl;
    }
return 0;
}