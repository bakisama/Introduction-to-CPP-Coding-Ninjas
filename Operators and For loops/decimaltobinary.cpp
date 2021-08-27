#include<iostream>
#include<cmath>
using namespace std;
long long int calpower(long long int i)
{
    long long int ans=1;
    for(int j=0; j<i; j++)
{
    ans *= 10;
}
return ans;
}
int main()
{
    long long int num,result=0;
    cin>>num;
    for(int i=0,j; num>0; i++)
    {
            j = num%2;
            num = num/2;
            result = result + j*calpower(i);
    }
    cout<<result;
}