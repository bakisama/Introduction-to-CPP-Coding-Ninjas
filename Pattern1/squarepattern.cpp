#include<iostream>
using namespace std;


int main() {
    int i, j, n;
    cin >> n;
    i = 1;
    j = 1;
    while (i <= n) {
        while (j <= n) {
            cout << n;
            j++;
        }
        j = 1;
        cout << endl;
        i++;
    }

}
