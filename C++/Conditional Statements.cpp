#include <bits/stdc++.h>
using namespace std;

int main() {
    int input;
    string num[10] = {"Greater than 9", "one", "two", "three", "four", 
                        "five", "six","seven", "eight", "nine"};
    cin >> input;

    if(input > 9)
        cout << num[0];
    else
        cout << num[input];
        
    return 0;
}
