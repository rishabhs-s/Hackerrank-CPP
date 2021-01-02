#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	stringstream ss(str);
    vector<int> x;
    int s;
    char ch;
    while(ss>>s){ //till there are numbers left in the stream
        x.push_back(s);//push the elementsin array
        ss>>ch; //ignore the commas
    }
    return x;
   }

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
