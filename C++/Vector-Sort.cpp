#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int size,temp;
    vector<int> v;
    cin >> size;
    while(size--){
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    for( auto x = v.begin(); x!= v.end(); ++x){
        cout << *x << " ";
    }
    cout << endl;

    return 0;
}
