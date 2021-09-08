#include <iostream>
using namespace std;

int binarySearch(int *input, int n, int val){
    //Write your code here

    int l=0,h=n-1,mid;
    for(;l<=h;){
        mid = (l+h)/2;
        if(val == input[mid]){
            return mid;
        }
        else if(val > input[mid]){
            l = mid+1;
        }
        else{
            h = mid-1;
        }
    }
    return -1;
}


int main()
{

	int size;
	cin >> size;
	int *input = new int[size];

	for(int i = 0; i < size; ++i)
	{
		cin >> input[i];
	}
	
	int t;
	cin >> t;

	while (t--)
	{
		int val;
		cin >> val;
		cout << binarySearch(input, size, val) << endl;
	}
	
	delete [] input;
	return 0;
}