#include<stdio.h> 
#include<conio.h> 
 
void main() 
{ 
    int a[10],i,j,temp,n; 
    clrscr(); 
    printf("\n Enter the max no. of Elements to Sort:\t"); 
    scanf("%d",&n); 
    printf("\n Enter the Elements : \t"); 
    for(i=0; i<n; i++) 
    { 
        scanf("%d",&a[i]); 
    } 
    for(i=0; i<n; i++) 
        for(j=i+1; j<n; j++) 
        { 
            if(a[i]>a[j]) 
            { 
                temp=a[i]; 
                a[i]=a[j]; 
                a[j]=temp; 
            } 
 } 
 printf("\nTHE SORTED ARRAY OF ELEMENT IS:"); 
    for(i=0; i<n; i++) 
    { 
 
 printf("%d\t",a[i]); 
 
    } 
 
  getch(); 
}