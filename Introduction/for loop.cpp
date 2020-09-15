//for loop
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b;
    cin>>a;
    cin>>b;
    string arr[]={"zero","one","two","three","four","five","six","seven","eight","nine"};//make a string type array and store values according to index and calldirectly instead of switch or if else
    for(int i=a;i<=b;i++)
    if(i>9)
    {
        if(i%2==0)
        cout<<"even"<<endl;
        else
        cout<<"odd"<<endl;
    }
    else
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
