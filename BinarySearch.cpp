//correct
#include <iostream>
using namespace std;
int const N = 10;

int BinarySearch(int [], int);

int main()
{
    int A[N] = {3,5,9,11,15,17,22,25,37,68}, sKey, loc;
    cout << "Enter the search key: \n";
    cin >> sKey;
    loc = BinarySearch(A, sKey);
    if(loc == -1)
        cout << " The search key is not found in the array!\n";
    else   
        cout << "The search key " << sKey << " is found in " << loc << endl;

    return 0;
}

int BinarySearch(int A[N], int sKey)
{
    int start = 0;
    int end = N-1;
    int mid = int((start + end) / 2);
    for ( start = 0; (start <= end) && (A[mid] != sKey); start++)
    {
        if(sKey < A[mid])
            end = mid - 1;
        else 
            start = mid + 1;
        mid = int((start + end) / 2);
    }
    return (A[mid] == sKey) ? mid : -1;
    
}