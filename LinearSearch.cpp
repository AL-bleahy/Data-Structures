//correct
#include <iostream>
using namespace std;

int const N = 10;

int LinearSearch(int [N], int);

int main(void)
{
    int A[N] = {9, 4, 5, 1, 7, 78, 22, 15, 96, 45}, sKey, loc;
    cout << "\n Enter the Search key: ";
    cin >> sKey;
    loc = LinearSearch(A, sKey);
    if(loc == -1)
        cout << "\n The search ley is not found in the array\nun-Successful Search\n";
    else    
        cout << "\nThe search key: " << sKey << " exists at location: "<<loc<<endl;
}

int LinearSearch(int A[N], int sKey)
{
    for(int k = 0; k <= N; k++)
    {
        if(A[k] == sKey)
            return k;
    }
    return -1;
}



