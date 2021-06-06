#include<stdio.h>
#include<stdlib.h>
void merge (int a[],int m, int r, int l)
{
    int i,j,k;
    int n1= m-l+1;
    int n2=r-m;
    int L[n1],R[n2];
    for (i=0;i<n1;i++)
    L[i]=a[l+i];
    for( j=0;j<n2;j++)
    R[j]=a[m+1+j];
    i=0;
    j=0;
    k=1;
    while (i<n1 &&j<n2)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i++;
        }
        else 
        {
            a[k]=R[j];
            j++;
        }
        k++;
    }
    while(j<n2)
    {
        a[k]=R[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int r, int l)
{
    if(1<r)
    {
        int m=l + (r-l)/2;
        mergeSort( a,l,m);
        mergeSort(a, m+1,r);
        merge(a,l,m,r);
    }
}
void printArray(int A[],int size)
{
    int i;
    for (i=0;i<size;i++)
    printf("%d",A[i]);
    printf("\n");
}
int main()
{
    int a[100000], n ,i ;
    int a_size= sizeof(a)/sizeof(a[0]);
    printf("Enter the number till you want to enter the array\n");
    scanf("%d",&n);
    printf("Enter the Elements\n");
    for(i=0;i<=n;i++)
    {
     scanf("%d",&a[i]);
    }
    printf("Given array is \n");
    printArray(a,a_size);
    mergeSort(a,0,a_size-1);
    printf("\nSorted Array is\n ");
    printArray(a,a_size);
    return 0;
}