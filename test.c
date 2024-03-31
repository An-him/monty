// Implementing doubly linked list stack

#include <stdio.h>
#include <stdlib.h>

typedef struct Node  {
    int data;
    struct Node* prev;
    struct Node* next;
}  Node;

typedef struct Stack
{
    int size;
    Node* top;
} stack;



Node* CreateNode(int data) {
    Node* node = (Node*) malloc(sizeof( Node));
    node->data = data;
    node->prev = NULL;
    node->next = NULL;
    return node;
}

void push(stack *mystack, int data){
    
}


// int isempty (stack *mystack){
//     return mystack->top == -1;
// }

// int isfull (stack *mystack){
//     return mystack->top >= SIZE;
// }

int main(){
    stack mystack;

    printf("Enter size of struct: ");
    scanf("%d", &mystack.size);
    mystack.top = NULL;

    if (mystack.top == NULL)
    {
        printf("This is blank");
    }
    
    
}