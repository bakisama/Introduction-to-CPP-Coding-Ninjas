#include <iostream>

using namespace std;

int main()
{
    int number1, number2;
    cin>>number1;
    number2=4;
      int count =0; 
      int i=1;  ///CHANGE
      while(count<number1) ///CHANGE
      {

        int num = (3*i)+2;
        i++;
        if((num%number2)==0)
        {

        }
        else
        {
            cout<<num<<" ";
            count++;
        }

      }
    return 0;
}