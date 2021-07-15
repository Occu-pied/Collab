#include <stdio.h>
#define MAX_VAL 100

void main()
{
   int Array[MAX_VAL],temp;
   int i,j,n,m;
   printf("Enter the number of numbers: ");
   scanf("%d", &n);
    m=n;
   for(i=0;i<n;i++)
       scanf("%d",&Array[i]);

   for(j=0;j<=n;j++)
   {
     for(i=0;i<n-1;i++)
       {
           if (Array[i]>Array[i+1])
           {
               temp=Array[i];
               Array[i]=Array[i+1];
               Array[i+1]=temp;
           }
       }
   }
printf("\nBubble Sort:\n");
   for(i=0;i<m;i++)
   {
       printf("%d ",Array[i]);
   }
}