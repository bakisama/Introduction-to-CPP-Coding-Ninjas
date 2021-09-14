#include <iostream>
using namespace std;
void spiralPrint(int **input, int r, int c){
    //Write your code here

    int re=r-1,rs=0,cs=0,ce=c-1,count=0;        
    while(count < (r*c)){
        for(int i=cs; count < (r*c)&&i<=ce; i++){
            cout<<input[rs][i]<<" ";
            ++count;
        }
        rs++;
        for(int i=rs; count < (r*c)&&i<=re; i++){
            cout<<input[i][ce]<<" ";
            ++count;
        }
        ce--;
        for(int i=ce; count < (r*c)&&i>=cs; i--){
            cout<<input[re][i]<<" ";
            ++count;
        }
        re--;
        for(int i=re; count < (r*c)&&i>=rs; i--){
            cout<<input[i][cs]<<" ";
            ++count;
        }
        cs++;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int row, col;
        cin >> row >> col;
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}
