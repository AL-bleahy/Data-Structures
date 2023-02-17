#include<iostream>
using namespace std;
const int maxsize = 5;
int qu[maxsize];
int front = -1;
int rear = -1;
void inqueue(int item)
{
        if (front == -1)
        {
            front = 0;
            rear = 0;
        }
        else
        {
            if (rear == maxsize - 1)
                rear = 0;
            else
                rear = rear + 1;
        }
        qu[rear] = item;}
void dequeue()
{
        cout << "Element deleted from queue is: " << qu[front] << "\n";
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            if (front == maxsize - 1)
                front = 0;
            else
                front += 1;
        }}
void display()
{
    int front_pos = front, rear_pos = rear;
    if (front == -1)
    {
        cout << "Queue is empty\n";
    }
    else {
        cout << "Queue elements :\t";
        if (front_pos <= rear_pos)
            while (front_pos <= rear_pos)
            {
                cout << qu[front_pos] << "\t";
                front_pos++;
            }
        else
        {
            while (front_pos <= maxsize - 1)
            {
                cout << qu[front_pos] << "\t";
                    front_pos++;
            }
            front_pos = 0;
            while (front_pos <= rear_pos)
            {
                cout << qu[front_pos] << "\t";
                front_pos++;
            }
        }
        cout << endl;
    }
}
int main()
{
    int choice, item;
    do
    {
        cout << "1.Insert\n";
        cout << "2.Delete\n";
        cout << "3.Display\n";
        cout << "4.Quit\n";
        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout <<"Input the element for insertion in queue : ";
            cin >> item;
            inqueue(item);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        default:
            cout << "Wrong choice\n";
        }
    } while (choice != 4);
    return 0;
}