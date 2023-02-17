//correct
#include <iostream>
using namespace std;

void Swap(int *p1, int *p2)
{
    int hold;
    hold = *p1;
    *p1 = *p2;
    *p2 = hold;
}

int main()
{
    int a, b;
    cout << "Enter number a: ";
    cin >> a;
    cout << "Enter number b: ";
    cin >> b;

    int *p1, *p2;
    p1 = &a;
    p2 = &b;
    cout << "a = " << *p1 << " b = " << *p2 << endl;
    Swap(p1, p2);
    cout << "After swap:\n";
    cout << "a = " << *p1 << " b = " << *p2 << endl;
    return 0;
}