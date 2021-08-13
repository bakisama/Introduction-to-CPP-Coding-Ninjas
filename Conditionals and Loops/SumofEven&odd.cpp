#include<iostream>
using namespace std;

int main() {
    int n;
    int a;
    int se, so;
    cin >> n;
    se = 0;
    so = 0;
    while (n > 0) {
        a = n % 10;
        if (a % 2 == 0) {
            se = se + a;
        }
        else {
            so = so + a;
        }
        n = n / 10;
        a = 0;
    }
    cout<<se<<" "<<so;

}
