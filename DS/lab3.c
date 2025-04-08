// PROGRAM TO PERFORM VARIOUS OPERATION ON STACK 
#include <stdio.h> 
 
#define MAX_SIZE 100 
 
int stack[MAX_SIZE]; 
int top = -1; 
 
// Function to push an element onto the stack 
void push(int element) { 
    if (top == MAX_SIZE - 1) { 
        printf("Stack overflow\n"); 
        return; 
    } 
    stack[++top] = element; 
    printf("%d pushed to stack\n", element); 
} 
 
// Function to pop an element from the stack 
int pop() { 
    if (top == -1) { 
        printf("Stack underflow\n"); 
        return -1; 
    } 
    printf("%d popped from stack\n", stack[top]); 
    return stack[top--]; 
} 
 
// Function to display the elements in the stack 
void display() { 
    if (top == -1) { 
        printf("Stack is empty\n"); 
        return; 
    } 
    printf("Elements in stack are:\n"); 
    for (int i = top; i >= 0; i--) { 
        printf("%d\n", stack[i]); 
    } 
} 
 
int main() { 
    int choice, element; 
    while (1) { 
        printf("\nStack Operations:\n"); 
        printf("1. Push\n"); 
        printf("2. Pop\n"); 
        printf("3. Display\n"); 
        printf("4. Exit\n"); 
        printf("Enter your choice: "); 
        scanf("%d", &choice); 
 
        switch (choice) { 
            case 1: 
                printf("Enter element to push: "); 
                scanf("%d", &element); 
                push(element); 
                break; 
            case 2: 
                pop(); 
                break; 
            case 3: 
                display(); 
                break; 
            case 4: 
                printf("Exiting program\n"); 
                return 0; 
            default: 
                printf("Invalid choice\n"); 
        } 
    }
}