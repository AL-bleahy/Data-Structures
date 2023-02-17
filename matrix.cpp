// correct 
#include <iostream>
using namespace std;

int main()
{
    int c1, r1, c2, r2;
    int A[20][20], B[20][20], result[20][20];
    cout << "First Matrix: \n";
    cout << "Number of rows for the first Matrix:\n";
    cin >> r1;
    cout << " Number of columns for the first Matrix: \n";
    cin >> c1;
    cout << "Enter the first matrix: \n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "Number of rows for the second Matrix:\n";
    cin >> r2;
    cout << " Number of columns for the second Matrix: \n";
    cin >> c2;
    cout << "Enter second Matrix:\n";
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> B[i][j];
        }
    }
    cout << "\nYou entered for the first Matrix\n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nYou entered for the second Matrix\n";
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    cout << "The multiplication is: \n";
    if( c1 == r2)
    {
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                result[i][j] = 0;
                for (int k = 0; k < r2; k++)
                {
                    result[i][j] = result[i][j] + A[i][k] * B[k][j]; // use k for A and B
                }
            }
        }
         for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                    cout << result[i][j] << " ";
            }
            cout << endl;
        }
    } // end of if
    else
        cout << "Dimensions are not valid!\n";
    

    return 0;
}