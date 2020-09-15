//Basic Data Types

#include <iostream>
#include <cstdio>
#include <iomanip> 
using namespace std;

int main() {
    int n1;
    long n2;
    char n3;
    float n4;
    double n5;
    cin>>n1>>n2>>n3>>n4>>n5;
    cout<<n1<<endl<<n2<<endl<<n3<<endl<< fixed <<setprecision(3)<<n4<<endl<< fixed <<setprecision(5)<<n5<<endl;
    return 0;
}
