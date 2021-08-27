#include<iostream>
using namespace std;
int main()
{
    char c;
    int countchar=0,countnum=0,countws=0;
    c=cin.get();
    while(c!='$')
    {
        
        if(c>=97&&c<=123)
        {
            countchar++;
        }
        if(c>=48&&c<=57)
        {
            countnum++;
        }
        if(c=='\n'||c=='\t'||c==' ')
        {
            countws++;
        }
		c=cin.get();
    }
  cout<<countchar<<" "<<countnum<<" "<<countws;
}