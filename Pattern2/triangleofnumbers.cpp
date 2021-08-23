#include <iostream>
using namespace std;

int main(){
    int i,j,space,n,flag;
    cin>>n;
    for(i=1;i<=n;i++){
        space=n-i;
        while(space>0){
            cout<<" ";
            space--;
            }
        for(j=1,flag=i;j<=i;j++,flag++){
            cout<<flag;
        }
        for(flag=2*i-2;flag>=i;flag--){
            cout<<flag;
        }
        cout<<endl;
    }
}