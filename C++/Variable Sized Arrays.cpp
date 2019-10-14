#include <iostream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    int** array = new int*[n];
    for (int i = 0; i < n; i++){
        int k;
        cin >> k;
        array[i] = new int[k];
        for (int j = 0; j < k; j++){
            cin >> array[i][j];
        }
    }
    for (int s = 0; s < q; s++){
        int i, j;
        cin >> i >> j;
        cout << array[i][j] << endl;
    }
    for (int i = 0; i < n; i++){
        delete[] array[i];
    }
    delete[] array;
    return 0;
}
