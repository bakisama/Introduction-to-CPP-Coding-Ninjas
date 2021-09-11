#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse(char input[], int i, int j){
    for(; i<=j; i++,j--){
        swap(input[i], input[j]);
    }
}

void reverseStringWordWise(char input[]) {
    // Write your code here
    reverse(input, 0, strlen(input) - 1);
    for(int i=0,j=0; i<=strlen(input); i++){
        if(input[i] == ' ' || input[i] == '\0'){
            reverse(input, j, i-1);
            j = i + 1;
        }
    }
}

int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
