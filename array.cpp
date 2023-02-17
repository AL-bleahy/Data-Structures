#include <iostream>
using namespace std;

int const SIZE = 10;
int A[SIZE], N = 0;

bool IsFull()
{
    if(N == SIZE)
        return true;
    else
        return false;
}
bool IsEmpty()
{
    if(N == 0)
        return true;
    else
        return false;
}
int FindLocationToInsert(int k, int ITEM)
{
    for( k = 0; k < N-1; k++)
    {
        if(A[k] > ITEM)
            return k;
    }
    return k;
}
void Insert(int k, int ITEM)
{
    int j = N;
    while(j >= k)
    {
        A[j+1] = A[j];
        j--;
    }
    A[k] = ITEM;
    N++;
}
void Traverse()
{
    for(int i = 0; i<N; i++)
    {
        cout<<A[i]<<' ';
    }
    cout<<endl;
}
int FindLocationToDelete(int k, int ITEM)
{
    for(int i = 0; i < N; i++)
    {
        if(A[i] == ITEM)
        {
            k = i;
            return k;
        }
    }
    k = -1;
    return k;
}
int Delete(int k, int ITEM)
{
    ITEM = A[k];
    for(int j = k; j < N; j++)
    {
        A[j] = A[j+1];
        A[j+1] = 0;
    }
    --N;
    return N;
}

int main(void)
{
   int ch, ITEM, k;
   while(1)
   {
    cout << "\t1-insert value\n";
    cout << "\t2-delete value\n";
    cout << "\t3- traverse array\n";
    cout << "\t4- exit\n\n";
    cout << "\n\t\tyour choise: ";
    cin>>ch;
    switch(ch)
    {
        case 1: if(IsFull())
                {
                    cout << "\n\nArray is full\n\n";
                    break;
                }
                cout << "For insertion, Put a value: ";
                cin >> ITEM;
                k = FindLocationToInsert(k, ITEM);
                Insert(k, ITEM);
                break;
        case 2: if(IsEmpty())
                {
                    cout <<"\n\nArray is Empty\n\n"; 
                    break;
                }
                cout << "\n\nFor Deletion, Put a value: ";
                cin >> ITEM;
                k = FindLocationToDelete(k, ITEM);
                if(k == -1)
                    cout << "\n\n" << ITEM << " Not found in array \n";
                else
                {
                    Delete(k,ITEM);
                    cout << "\n\n " << ITEM << " deleted from array\n";
                }
                break;
        case 3: if(IsEmpty())
                {
                    cout << "\n\nArray is Empty\n\n";
                    break;
                }
                Traverse();
                break;
        case 4: exit(0);

        default: cout << "\n\nInvalid choise\n";

    } 
   }
}