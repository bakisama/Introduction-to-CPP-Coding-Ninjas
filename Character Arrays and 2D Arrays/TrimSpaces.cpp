#include <iostream>
#include <cstring>
using namespace std;

void trimSpaces(char input[]) {
    // Write your code here
    int l = strlen(input);
    int i=0, k=0, count=0;
    while(i<l){
        if(input[i] == ' '){
            count++;
            i++;
        }
        else{
            swap(input[i++], input[k++]);
        }
    }

    input[l - count] = '\0';
    return;
}

int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}

