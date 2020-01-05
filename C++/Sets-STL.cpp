#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    set<int> s;
    cin >> q;
    while(q--){
        int first, sec;
        cin>> first >> sec;
        if(first==1)
            s.insert(sec);
        else if(first==2)
            s.erase(sec);
        else if(first==3){
            set<int>::iterator itr;
            itr=s.find(sec);
            if(itr!=s.end())
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}
