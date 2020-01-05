#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    map<string,int> m;
    cin >> q;
    while(q--){
        int choice, marks;
        string s;
        cin>> choice >> s;
        if(choice==1){
            cin >> marks;
            m[s]+=marks;
        }
        else if(choice==2)
            m.erase(s);
        else if(choice==3){
            cout << m[s] << endl;
        }
    }
    return 0;
}
