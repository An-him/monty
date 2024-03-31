// Implementing doubly linked list stack

#include <stdio.h>
#include <stdlib.h>
int isempty ();

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
    Node* newnode = CreateNode(data);

    // is the stack is empty
    if (isempty(mystack))
    {
        mystack->top = newnode;
    }else{
        // If th estack is full

        // if (isfull(mystack))
        // {
        //     printf("Stack overflow!!");
        //     return -1;
        // }else
        // {
        // // if the stack is not empty

        // Node* prevnode = mystack->top;
        // prevnode->prev=newnode;
        // newnode->next = prevnode;
        // mystack->top=newnode;
        // }
        Node* prevnode = mystack->top;
        prevnode->prev=newnode;
        newnode->next = prevnode;
        mystack->top=newnode;
        
        
    }
    
    
}

void show(stack *stacko){
    Node* curr = stacko->top;
    while (curr != NULL)
    {
        printf("current stack is : %d\n", curr->data);
        curr = curr->next;
    }
    
}

int pop(stack *mystack){

    if (isempty(mystack))
    {
        perror("Stack Underflow!!");
        return 1;
    }
    
        Node* currnode = mystack->top;
        // printf("Print current node: %d\n", currnode->data);
        mystack->top = mystack->top->next;
        int removedData = currnode->data;
        free(currnode);
        return removedData;
    
}

int isempty (stack *mystack){
    return mystack->top == NULL;
}

// int isfull (stack *mystack){
//     return mystack->top == mystack->size;
// }

int main(){
    stack mystack;

    printf("Enter size of struct: ");
    scanf("%d", &mystack.size);
    mystack.top = NULL;

    push(&mystack,1);
    push(&mystack,2);
    push(&mystack,3);
    // show(&mystack);

    while(!isempty(&mystack)){
        int removedDigit = pop(&mystack);
        printf("removed %d\n", removedDigit);
        if (removedDigit % 2 ==  1)
        {
            push(&mystack, removedDigit+1);
        }
    }

    printf("The stack is empty: %d", isempty(&mystack));
    return 0;
}