#include <iostream>
#include <algorithm>
using namespace std;

void sort012(int *arr, int n){
    int i=0,nz=0,nt=n-1;
    while(i<=nt){
        if(arr[i] == 0){
            swap(arr[i++], arr[nz++]);
        }
        else if(arr[i] == 1){
            i++;
        }
        else{
            swap(arr[i], arr[nt--]);
        }
    }
    return;
}


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size;

		cin >> size;
		int *arr = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}

		sort012(arr, size);

		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}

		delete[] arr;
		cout << endl;
	}

	return 0;
}