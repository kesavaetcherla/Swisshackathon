#include<stdio.h>
#include<stdlib.h>
int main()
{
   int cost,perc;
   int s=0;
   scanf("%d%d",&cost,&perc);
   perc=100-perc;
   while(cost>0)
   {
       s=s+cost;
       cost=(perc*cost)/100;
   }
   printf("%d",s);
   return 0;
}
