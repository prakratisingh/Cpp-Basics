#include<iostream> //preposessor directive (used to include files)
using namespace std;
int main() //Execution starts from main function. (Mandatory for every program)
{
    cout<<"Hello"<<endl;
    cout<<"Hello World\n";
    // return 0; //exit status of a function
    //INPUT FROM USER
    int amount1;
    cin>>amount1;
    int amount2;
    cin>>amount2;
    int sum = amount1+amount2;
    cout<<sum<<endl;
    return 0;
    
}