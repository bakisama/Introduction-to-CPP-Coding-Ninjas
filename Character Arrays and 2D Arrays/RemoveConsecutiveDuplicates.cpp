#include <iostream>
#include <cstring>
using namespace std;
void removeConsecutiveDuplicates(char input[]) {
    // Write your code here
	int i=0,j=0;
    while(input[i] != '\0'){
        if(input[i] == input[i+1]){
            i++;
        }
        else{
            swap(input[i], input[j]);
            i++, j++;
        }
    }
    input[j] = '\0';
    return;
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
}
