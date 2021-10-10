
#include<stdio.h>

int main()
{
    int n,m;
    printf("Enter the value of n and m:");
    scanf("%d %d",&n, &m);
    int arr[n][m];
    printf("Enter the 2D array\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int a=n*m;
    int array[a];
    int k=0;
    printf("Inital 2D Array:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            array[k]=arr[i][j];
            k++;
        }
    }
    printf("Final 1D array:\n");
    for(int i=0;i<a;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
} 
