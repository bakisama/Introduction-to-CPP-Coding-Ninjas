#include <iostream>
using namespace std;

int linearSearch(int *arr, int n, int x){
    //Write your code here
    
    for(int i=0; i<n; ++i){
        if(arr[i] == x){
            return i;
        }
        else{
            continue;
        }
    }
    return -1;
}
