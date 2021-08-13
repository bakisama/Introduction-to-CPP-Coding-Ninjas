#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    int flag = 1;
    while(i <= n)
    {
        flag=i;
    	int j = 1;
        while(j <= i)
        {
            cout << flag;
            j = j + 1;
            flag += 1;

        }
        cout << endl;
        i += 1;

    }
}
