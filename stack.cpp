//correct
#include <iostream>
//#include <conio.h>
//#include<process.h>
using namespace std;

int const STACKSIZE = 20;
int TOP = -1;
int stack[STACKSIZE];

void Push(int);
int Pop();
int Peak();
bool IsEmpty();
bool IsFull();
void Traverse();

int main()
{
    int item, choice;
    while(1)
    {
        cout<<"\n\n";
        cout<< "*** Stack Operation ***\n";
        cout << "1- Push item \n2- Pop item\n";
        cout << "3- Peak item \n4- Traverse / Display Stack Items\n";
        cout << "5- Exit\n";
        cout << "\nYour choise---> ";
        cin >> choice;
        switch(choice)
        {
            case 1: if(IsFull()) cout << "\n Stack is Full/Overflow\n";
                    else 
                    {
                        cout << "\nEnter a number: "; cin >> item;
                        Push(item);
                    } break;
            case 2: if(IsEmpty()) cout << "\n Stack is Empty\n";
                    else 
                    {
                        item = Pop();
                        cout << "\nDeleted from the stack =  " << item << endl;
                    } break;
            case 3: if(IsEmpty()) cout << "\n Stack is Empty\n";
                    else 
                    {
                        item = Peak();
                        cout << "\nPeak from the stack(Top) =  " << item << endl;
                    } break;
            case 4: if(IsEmpty()) cout << "\n Stack is Empty\n";
                    else 
                    {
                        cout << "\nList of item pushed on Stack:\n";
                        Traverse();
                    } break;
            case 5: exit(0);
            default: cout << "\n invalid choce!\n";
        } //end of switch
    }// end of while
} //end of main


void Push(int item)
{
    TOP = TOP + 1; //TOP++;
    stack[TOP] = item;
}
int Pop()
{  
    TOP = TOP - 1; // TOP--;
    return stack[TOP+1];
   
}
int Peak()
{
    return stack[TOP];
}
bool IsEmpty()
{
    if(TOP == -1)
        return true;
    else 
        return false;
}
bool IsFull()
{
    if (TOP == STACKSIZE - 1)
        return true;
    else 
        return false;
}
void Traverse()
{
    for (int i = TOP; i >= 0; i--)
    {
        cout << stack[i] << ' ';
    }
    
}
