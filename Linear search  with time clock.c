#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{ 
   int a[10000],i,search;
   
   clock_t t1, t2;
   t1 = clock();
  for(i=0;i<=10000;i++)
  a[i]= rand()%10000;

   printf("enter the element to search/n");
   scanf("%d",&search);
   for(i=0;i<=10001;i++)
   if(a[i]==search)
   {
       printf("%d is present at location%d\n",search,i+1);
       break;

   }
   printf("%d",i);
   if(i==10000)
       printf("%d is not in the array\n",search);
       t2 = clock();
       
       printf("time taken: %f",(float)(t2-t1)/CLOCKS_PER_SEC);
       return 0;
   
}
