// correct
#include <iostream>
using namespace std;
int const N = 6;

void BubbleSort(int [], int);

int main(void)
{
    int A[N] = {77,42,35,12,101,6};
    int i;
    cout << "The elements of the array before sorting\n";
    for(i = 0; i<N ; i++)
    {
        cout << A[i] << ", "; 
    }
    cout << endl;
    BubbleSort(A, N);
    cout << "\n\nThe element of the array after sorting: \n";
    for (int i = 0; i < N; i++)
    {
        cout << A[i] <<", ";
    }
    
}

void BubbleSort(int A[N], int N)
{
   for(int i = 0; i<N; i++) 
   {
        int swaps = 0;         //flag to detect any swap is there or not
        for(int j = 0; j<N-i; j++) 
        {
            if(A[j] > A[j + 1]) 
            {       //when the current item is bigger than next
                swap(A[j], A[j+1]);
                swaps = 1;    //set swap flag
            }
        }
   }
}