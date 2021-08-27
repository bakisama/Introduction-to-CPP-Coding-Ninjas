#include<iostream>
using namespace std;

bool checkPrime(int n){
	for(int i=2; i<n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

void printPrimes(int n){
    for(int i=2; i<=n; i++){
        if(checkPrime(i) == true){
            cout<<i<<endl;
        }
        else{
            continue;
        }
    }
}

int main(){
    int n;
    cin>>n;
    printPrimes(n);
}