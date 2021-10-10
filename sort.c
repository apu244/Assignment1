#include<stdio.h>
#include<time.h>

void selectionSort(long long int arr[],long long int n)
{
    for(int i=0; i<n-1; i++)
    {
        int min=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[i])
            {
                int min=j;
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    printf("Selection Sorted Array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }    
    printf("\n");
    return;
}

void bubbleSort(long long int arr[], long long int n)
{
    int i, j;
   for (i = 0; i < n-1; i++)     
    {
       for (j = 0; j < n-i-1; j++)
       {
           if (arr[j] > arr[j+1])
           {
               int temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
           }
       }
    }
    printf("Bubble Sorted Array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }    
    printf("\n");
    return;
}

int main()
{
    long long int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    long long int arr[n];
    printf("Enter the elements of array: ");

    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

clock_t start, end;
long int t;
start=clock();
selectionSort(arr,n);
end=clock();
t=end-start;
printf("\n Total elapsed time for selction sort: %lf\n", (double)t/(double)CLOCKS_PER_SEC);

clock_t start2, end2;
long int t2;
start2=clock();
bubbleSort(arr,n);
end2=clock();
t2=end-start;
printf("\n Total elapsed time for bubble sort : %lf\n", (double)t/(double)CLOCKS_PER_SEC);

return 0;
}