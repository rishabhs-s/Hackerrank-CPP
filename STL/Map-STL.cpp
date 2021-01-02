#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
      map<string,int>m;
      int n,x,marks;
      string s;
      
      cin>>n;
      for(int i=0;i<n;i++){
          cin>>x>>s;
          switch(x){
              case 1:
              {
                  cin>>marks;
                m[s]+=marks;
                break;
              }
              case 2:
              {
                  m.erase(s);
                  break;
              }
              case 3:
              {
                cout<<m[s]<<endl;
                break;   
                }
          }
      }
    return 0;
}

