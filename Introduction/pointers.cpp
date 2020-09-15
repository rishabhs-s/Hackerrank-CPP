#include<iostream>
#include<stdlib.h>
using namespace std;
void update(int *a,int *b) {
	int sum=*a + *b;
	int sub=abs(*a-*b);
	*a=sum;
	*b=sub;

    
        
}

int main(){
	int a, b;
	cin>>a>>b;
	int *ptra=&a;
	int *ptrb=&b;
	update(ptra,ptrb);
	cout<<a<<endl<<b;
}
