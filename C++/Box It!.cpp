#include<bits/stdc++.h>
using namespace std;

class Box{
    public:
        int l,b,h;
        Box(){
            l=0;
            b=0;
            h=0;
        }
        Box(int l,int b,int h){
            this->l = l;
            this->b = b;
            this->h = h;
        }
        Box(const Box &B) {
            l = B.l;
            b = B.b;
            h = B.h;
        }

        int getLength(){
            return l;
        }
        int getBreadth(){
            return b;
        }
        int getHeight(){
            return h;
        }
        long long CalculateVolume(){
           long long volume = l;
            volume *= b;
            volume *= h;
            return volume;
        }
        bool operator < (Box &b){
            if(this->l < b.l){
                return true;
            }
            else if(this->l == b.l && this->b < b.b){
                return true;
            }
            else if(this->h < b.h && this->l == b.l && this->b == b.b){
                return true;
            }
            return false;
        }
        friend ostream& operator <<(ostream& out, const Box& b){
            out << b.l << " " << b.b << " " << b.h;
            return out;
        }
};

void check2(){
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++){
		int type;
		cin>>type;
		if(type ==1){
			cout<<temp<<endl;
		}
		if(type == 2){
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3){
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp){
				cout<<"Lesser\n";
			}
			else{
				cout<<"Greater\n";
			}
		}
		if(type==4){
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5){
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}
	}
}

int main(){
	check2();
}
