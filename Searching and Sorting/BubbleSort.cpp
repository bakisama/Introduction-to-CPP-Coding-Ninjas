#include <iostream>
using namespace std;

void bubbleSort(int *arr, int n){
    //Write your code here
    for(int k=0; k<n; k++)
    {
        for(int i=0, j=i+1; i<n-1;)
        {
            if(arr[j]<arr[i])
            {
                swap(arr[i], arr[j]);
            }
            i++,j++;
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

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		bubbleSort(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	}
}