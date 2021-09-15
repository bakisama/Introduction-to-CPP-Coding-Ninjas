#include <iostream>
#include <cstring>
using namespace std;

bool isPermutation(char input1[], char input2[]) {
    if(strlen(input1) != strlen(input2)) return false;
    int n = strlen(input1);
    int freq[256] = {0};
    char sav;
    
    for(int i=0; i<n; i++){
        sav = input1[i];
        freq[(int)sav] += 1;
    }

    for(int i=0; i<n; i++){
        sav = input2[i];
 		freq[(int)sav] -= 1;	
    }
    
    for(int i=0; i<256; i++){
        if(freq[i] != 0){
            return false;
        }
    }
    
    return true;
}

int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}
