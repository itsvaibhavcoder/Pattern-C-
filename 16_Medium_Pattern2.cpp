/*
          1
       2  1
    3  2  1
4   3  2  1 
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int row = 1; row <= n; row = row + 1) {
        // print spaces
        for (int col = 1; col <= n - row; col = col + 1) {
            cout << " ";
        }
        // Print number
        for (int col = 1; col <= row; col = col + 1) {
            cout << row;
            if (col < row) {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}