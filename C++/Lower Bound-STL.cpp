#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int size,temp;
    cin >> size;
    vector<int> v;
    for(int i=0; i<size; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    cin >> size;
    for(int i=0; i<size; i++){
        cin >> temp;
        vector<int>::iterator low = lower_bound(v.begin(),v.end(),temp);
        if(v[low-v.begin()]==temp)
            cout << "Yes " << (low-v.begin())+1 << endl;
        else
            cout << "No " << (low-v.begin())+1 << endl;
    }

    return 0;
}
