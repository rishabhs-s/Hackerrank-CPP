#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    cin>>a>>b;
    int lena=a.size();
    int lenb=b.size();
    cout<<lena<<" ";
    cout<<lenb<<endl;
    cout<<a+b<<endl;
    swap(a[0],b[0]);
    cout<<a<<" "<<b;
    return 0;
}
