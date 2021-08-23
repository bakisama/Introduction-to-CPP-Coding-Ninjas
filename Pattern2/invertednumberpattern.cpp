#include <iostream>
using namespace std;

int main(){
    int i,j,n,flag;
    cin>>n;
    flag=n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i+1;j++){
            cout<<flag;
        }
        flag--;
    cout<<endl;

    }}