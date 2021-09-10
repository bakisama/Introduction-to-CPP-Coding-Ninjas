#include <iostream>
using namespace std;

void rotate(int *arr, int d, int n){
    int extra[d];
    for(int i=0; i<d; i++){
        extra[i] = arr[i];
    }
    for(int j=d; j<n; j++){
        arr[j-d] = arr[j];
    }
    for(int i=n-d, j=0; i<n; i++){
        arr[i] = extra[j++];
    }

}

int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}