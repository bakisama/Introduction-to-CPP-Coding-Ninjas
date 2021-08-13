#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i = 1;
    int j = 0;
    int k = 1;
    while (i <= n) {
       while (k <= n - i) {
       cout << " ";
       k++;
        }
        k = 1;
       while (j < 2 * i - 1) {
            cout << "*";
            j++;
        }
        j = 0;
        i++;
        cout << endl;
    }
}
