#include <stdio.h> 
 
// Recursive function to print multiplication table 
void printTable(int num, int start, int end) { 
    // Print the multiplication result 
    printf("%d x %d = %d\n", num, start, num * start); 
     
    // Recursive calls 
    if (start > end) // Decreasing order 
        printTable(num, start - 1, end); 
    else if (start < end) // Increasing order 
        printTable(num, start + 1, end); 
} 
 
int main() { 
    int num, start, end; 
     
    // Taking user input 
    printf("Enter a number: "); 
    scanf("%d", &num); 
    printf("Enter the start of the table: "); 
    scanf("%d", &start); 
    printf("Enter the end of the table: "); 
    scanf("%d", &end); 
     
    // Function call 
    printTable(num, start, end); 
     
    return 0; 
}