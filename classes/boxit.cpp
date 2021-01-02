#include<bits/stdc++.h>

using namespace std;

class Box{
  private:
  int l;  
  int b;
  int h;
  public:
  Box(){
      l=0;
      b=0;
      h=0;
  }
  Box(int a,int br,int c){
      l=a;
      b=br;
      h=c;
  }
  Box(Box &B){
      l=B.l;
      b=B.b;
      h=B.h;
  }
  int getlength(){
      return l;
  }
  int getbreadth(){
      return b;
  }
  int getheight(){
      return h;
  }
  long long CalculateVolume(){
  //    return getlength()*getheight()*getbreadth();
  return (long long)(l)*b*h;
    }
    bool operator<(Box &B) {
    if (l < B.l) {
      return true;
    } else if (l == B.l) {
      if (b < B.b) {
        return true;
      } else if (b == B.b) {
        if (h < B.h) {
          return true;
        }
      }
    }

    return false;
  }
};
ostream &operator<<(ostream &out,Box &B){
    out << B.getlength() << " " << B.getbreadth() << " " << B.getheight();
  return out;
};

// already given
void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
