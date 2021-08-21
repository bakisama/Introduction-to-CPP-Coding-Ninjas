#include<iostream>
using namespace std;


int main(){
	int n;
    cin>>n;
    int i, j, flag;
    for(i=1;i<=n;i++){
        flag = i;
        for(j=1;j<=i;j++){
            cout<<flag;
            flag--;
            
            }
        cout<<endl;
    }
    
}
