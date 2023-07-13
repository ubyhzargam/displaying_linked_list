//
//  main.cpp
//  displaying_linked_list
//
//  Created by Uby H on 13/07/23.
//

#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
}*first=NULL;
void create(int A[], int n)
{
    int i;
    struct Node *t,*last;
    first = (struct Node*)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void Display1(struct Node *p)
{
    if(p!=NULL)
    {
        cout<<p->data<<" ";
        Display1(p->next);
    }
}
void Display2(struct Node *p)
{
    if(p!=NULL)
    {
        Display2(p->next);
        cout<<p->data<<" ";
    }
}
int main()
{
    int A[]={1,2,3,4,5};
    create(A,5);
    Display1(first);
    cout<<endl;
    Display2(first);
    return 0;
}
