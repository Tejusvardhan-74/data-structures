#include<stdio.h>
int main()
{
int array[100],position,c,n;
printf("enter the number of elements of the array: ");
scanf("%d",&n);
printf("\ninput the array elements:");
for(c=0;c<n;c++)
scanf("%d", &array[c]);
printf("\nenter the position :");
scanf("%d",&position); 
if(position>=n+1)
printf("\ndeletion is not possible.\n");
else
{
for(c=position-1;c<n-1;c++)
array[c]=array[c+1];
printf("\narray after deletion :");
for(c=0;c<n-1;c++)
printf("%d\n",array[c]);
}
return 0;
}
