#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map <string, int> phoneBook;
    string name;
    for (int i=0; i<n; i++){
        cin >> name;
        cin >> phoneBook[name];
    }
    while(cin >> name){
        if(phoneBook.find(name) != phoneBook.end())
            cout << name << "=" << phoneBook.find(name)->second << endl;
        else 
            cout << "Not found" << endl;
    }
    return 0;
}
