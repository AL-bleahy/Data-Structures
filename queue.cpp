#include <iostream>
//#include<proccess>
using namespace std;

int const qSize = 5;
int queue[qSize];
int front = -1;
int rear = -1;

void Enqueue(int item)
{
    if(front == -1)
   {
        front = 0;
        rear = 0;
   }
    else 
    {
        if(rear == qSize -1)
            rear = 0;
        else
            rear ++;
    }
    
    queue[rear] = item;
}

void Dequeue()
{
    if(queue[front] == -1)
        cout << "queue is empty!\n";
    else
        cout << "Element deleted from queue is: "<< queue[front] << endl;
    if(front == rear)
    {
        front = -1;
        rear = -1;
    }
    else 
    {
        if(front == qSize-1)
            front = 0;
        else 
            front ++;
    }
}

void Traverse()
{
    int f = front, r = rear;
    if(front == -1)
        cout << "queue is Empty\n";
    
    else
    {
        cout << "queue elemnts: \n";
        if(f <= r)
        {
            while(f <= r)
            {
                cout << queue[f] << " ";
                f ++;
            }
        
        }
        else
        {
            while(f < qSize - 1)
            {
                cout << queue[f] << " ";
                f ++;
            }
            f = 0;
            while(f <= r)
            {
                cout << queue[f] << " ";
                f ++;
            }
        }
    }
    cout << endl;
}
int main(void)
{
    int choice, item;
    while(choice != 4)
    {
        cout << "*** queue Operation ***\n\n";
        cout << "1-insert value\n2-delete value\n";
        cout << "3-Traverse queue\n4-Exit\n";
        cout << "\tyour choise: ";
        cin >> choice;
        switch(choice)
        {
            case 1: cout << "\n put a value: ";
                    cin >> item;
                    Enqueue(item);
                    break;
            case 2: Dequeue();
                    break;
            case 3: Traverse(); 
                    break;
            case 4: exit(0);
        } //end switch
    } //end while
    return 0;
}