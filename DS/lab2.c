#include <stdio.h> 
#define MAX_SIZE 100 
int main() 
{ 
int arr[MAX_SIZE], size, i, pos, value; 
 printf("Enter the size of the array: "); 
scanf("%d", &size); 
 
printf("Enter %d elements of the array:\n", size); 
for(i=0; i<size; i++) { 
scanf("%d", &arr[i]); 
} 
 // Insert an element 
printf("\nEnter the position and value to insert: "); 
scanf("%d %d", &pos, &value); 
for(i=size-1; i>=pos-1; i--) { 
arr[i+1] = arr[i]; 
} 
arr[pos-1] = value; 
size++; 
 
// Delete an element 
printf("\nEnter the position of the element to delete: "); 
scanf("%d", &pos); 
for(i=pos-1; i<size-1; i++) { 
arr[i] = arr[i+1]; 
} 
size--; 
 printf("\nArray after insertion and deletion:\n"); 
for(i=0; i<size; i++) { 
printf("%d ", arr[i]); 
} 
 
return 0; 
} 
