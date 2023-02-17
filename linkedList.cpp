//incomplete


#include<iostream>
using namespace std;

struct LIST
{
    int info;
    struct LIST *next;
};
// CURR = the postion where to insert.
// PREV = points to previous node of the CURR node.
LIST *HEAD = NULL;
LIST *PREV, *CURR;

void AddNode(int item)
{
    LIST *newNode;
    newNode ->info = item;
    newNode ->next = NULL;
    
    if(HEAD == NULL) // Add fist node in list
    {
        HEAD = newNode;
    }
    if(newNode->info < HEAD->info) // Add on top of existing list
    {
        newNode ->next = HEAD;
        HEAD = newNode;
    }
   LIST *Prev = NULL, *Curr = NULL;
   CURR = HEAD;
   while(CURR != NULL)
   {
        if(newNode ->info <= CURR ->info)
            break;
        PREV = CURR;
   }    
   newNode ->next = PREV ->next;
   PREV ->next = newNode;
}
void DeleteNode()
{
    int item;
    LIST *newNode;
    newNode ->info = item;
    newNode ->next = NULL;

    if(HEAD == NULL)
        cout << "\nEmpty list!\n";
    //2
    if(item == HEAD->info)
        HEAD = HEAD->next;

    LIST *Prev = NULL, *Curr = NULL;
    CURR = HEAD;
    while(CURR != NULL)
    {
        if(newNode ->info == CURR ->info)
            break;
        PREV = CURR;   
        CURR = CURR -> next;
    }
    if(CURR == NULL)
        cout << "\nitem not found in a list\n";
    
    PREV ->next = CURR ->next;
}
void Traverse()
{
    CURR = HEAD;
    while(CURR != NULL)
    {
        cout << CURR ->info << " ";
        CURR = CURR->next;
    }
    cout << endl;
}
int main()
{
    int info, ch;
    while(1)
    {
        cout<<"\n\t***linked List***\n";
        cout << "1-Add Node\n2-Delete node\n";
        cout << "3=Traverse List\n 4-Exit\n";
        cout << "\tYour Choice: ";
        cin >> ch;
        switch(ch)
        {
            case 1: cout << "\n Put info/value to Add: ";
                    cin >> info;
                    AddNode(info);
                    break;
            case 2: DeleteNode();
                    break;
            case 3: cout << "\n Linked List Values: \n";
                    Traverse();
                    break;
            case 4: exit(0);
        } // end switch
    } // end while
    return 0;
}