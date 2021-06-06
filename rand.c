#include<stdio.h>
#include<conio.h>
int main()
{ 
   int a[100],i,search;
   
  for(i=0;i<=100;i++)
  a[i]= rand()%100;

   printf("enter the element to search/n");
   scanf("%d",&search);
   for(i=0;i<=100+1;i++)
   if(a[i]==search)
   {
       printf("%d is present at location%d\n",search,i+1);
       break;

   }
   if(i==100)
   {
       printf("%d is not in the array\n",search);
       getch();
       return 0;
   }
}
