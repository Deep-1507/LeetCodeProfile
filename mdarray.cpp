#include <iostream>
using namespace std;

int main()
{

    int row, column;

    cout << "Enter the number of rows you want: ";
    cin >> row;
    cout << endl;
    cout << endl;

    cout << "Enter the number of rows you want: ";
    cin >> column;
    cout << endl;
    cout << endl;

    int array[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout<<"Enter the "<<i,j;
            cin >> array[i][j];
            cout << endl;
        }
        cout << endl;
    }
    cout << endl;

    cout<<"The array created is"<<endl<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout <<array[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}