// Program to implement Insertion  Sort 
 
#include<stdio.h> 
#include<conio.h> 
void main(){ 
 
int i,j,n,temp,a[20]; 
clrscr() 
printf("Enter total elements: "); 
scanf("%d",&n); 
 
printf("Enter %d elements: ",n); 
for(i=0;i<n;i++) 
scanf("%d",&a[i]); 
 
for(i=1;i<n;i++) 
{ 
temp=a[i]; 
j=i-1; 
while((temp<a[j])&&(j>=0)) 
 
{ 
a[j+1]=a[j]; 
j=j-1; 
} 
a[j+1]=temp; 
} 
 
printf("After sorting: "); 
for(i=0;i<n;i++) 
printf(" %d",a[i]); 
getch(); 
}