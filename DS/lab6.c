//Program to implement Binary Search 
#include <stdio.h> 
int main () 
{ 
int c, beg, end, middle, n, item, array[100]; 
printf("Enter number of elements\n"); 
scanf("%d", &n); 
 
printf("Enter %d integers\n", n); 
 for (c = 0; c < n; c++) 
scanf("%d", &array[c]); 
 
printf("Enter item to find\n"); 
scanf("%d", &item); 
beg = 0; 
end = n - 1; 
middle = (beg+end)/2; 
 while (beg <= end) { 
if (array[middle] < item) 
beg = middle + 1; 
else if (array[middle] == item) { 
printf("%d found at location %d.\n", item, middle+1); 
break; 
} 
else 
end = middle - 1; 
 
middle = (beg + end)/2; 
} 
if (beg > end) 
printf("Not found! %d isn't present in the list.\n", item); 
 
return 0; 
} 