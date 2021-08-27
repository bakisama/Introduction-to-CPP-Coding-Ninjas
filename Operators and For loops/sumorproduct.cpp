#include<iostream>
using namespace std;
int main()
{
    int N,C,sum=0,product=1;
    cin>>N>>C;
    if(C==1){
    for(int i=1; i<=N; i++)
    {
        sum +=i;
    }
    cout<<sum<<endl;
    }
    else if(C==2)
    {
        for(int i=1; i<=N; i++)
    {
        product*= i;
    }
        cout<<product<<endl;
    }
    else
    {
        cout<<"-1";
    }
}