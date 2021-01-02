#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<int> s;
    int n;
    cin>>n;
    int y,x;
    for(int i=0;i<n;i++){
        cin>>y>>x;
        if(y==1){
            s.insert(x);
        }
        else if(y==2){
            s.erase(x);
        }
        else{
            auto itr=s.find(x);
            if(itr!=s.end()){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
            
        }
        
        
    }
    return 0;
}



// using switch statements
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<int> s;
    int n;
    cin>>n;
    int y,x;
    for(int i=0;i<n;i++){
        cin>>y>>x;
        switch(y){     
        case 1:
        {
            s.insert(x);
            break;
        }
        case 2:
        {
            s.erase(x);
             break;
        }
        case 3:
        {
            auto itr=s.find(x);
            if(itr!=s.end()){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
             break;
            
        }
        
        
    }
    }
    return 0;
}




