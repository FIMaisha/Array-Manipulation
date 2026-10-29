#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void InputArray(int array[],int N)
{
    for(int i=0;i<N;i++)
    {
        scanf("%d",&array[i]);
    }
}

void DisplayArray(int array[],int N)
{
    for(int i=0;i<N;i++)
    {
        printf("%d ",array[i]);
    }
}

int ArrayInsertion(int array[],int N,int index, int value)
{
    for(int j=N-1;j>=index;j--)
    {
        array[j+1]=array[j];
    }
    array[index]=value;
    return N=N+1;
}

int ArrayDeletion(int array[],int N,int value)
{
    int found=-1;
    //search for the element to delete
    for(int i=0;i<N;i++)
    {
        if(array[i]==value)
        {
            found=i;
            break;
        }
    }
    if(found!=-1)
    {
        for(int j=found;j<N-1;j++)
        {
            array[j]=array[j+1];
        }
        return N-1;
    }
    else{
        printf("Element Not Found in the array");
        return N;
    }
}

void BubbleSort(int array[],int N)
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N-1-i; j++)
        {
            if(array[j+1]<array[j])
            {
                swap(&array[j],&array[j+1]);
            }
        }
    }
}

void SelectionSort(int array[],int N)
{
    int min, min_index;
    for(int i=0;i<N;i++)
    {
        min = array[i];
        min_index= i;
        for(int j=i+1;j<N;j++)
        {
            if(array[j]<min)
            {
                min=array[j];
                min_index=j;
            }
        }
        swap(&array[i],&array[min_index]);
    }
}

void InsertionSort(int array[],int N)
{
    int i,j,key;
    for(i=1;i<N;i++)
    {
        key=array[i];
        j=i-1;
        while(j>=0 && array[j]>key)
        {
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=key;
    }
}

void LinearSearch(int array[],int N,int value)
{
    int found = -1,comp=0;
    for(int i=0;i<N;i++)
    {
        comp++;
        if(array[i]==value)
        {
            found=i;
            break;
        }
    }
    if(found!=-1){
        printf("Found at Index %d",found);
    }
    else{
        printf("Not Found");
    }
    printf("(Comparison: %d)\n",comp);
}

int BinarySearch(int array[],int value,int left ,int right,int *comp)
{
    if(left>right)
    {
        printf("Not Found");
        printf("(Comparison: %d)\n",*comp);
        return -1;
    }
    int mid= left+(right-left)/2;
    (*comp)++;

    if(array[mid]==value){
        printf("Found at index %d",mid);
        printf("(Comparison: %d)\n",*comp);
        return mid;
    }
    else if(array[mid]<value){
        return BinarySearch(array,value,mid+1,right,comp);
    }
    else if(array[mid]>value){
        return BinarySearch(array,value,left,mid-1,comp);
    }

}

int main()
{
    int N,P,X,delvalue,value;
    int comp=0;

    scanf("%d",&N);
    int arr[100],brr[100],irr[100],srr[100];

    InputArray(arr,N);
    scanf("%d %d",&P,&X);

    N=ArrayInsertion(arr,N,P,X);
    scanf("%d",&delvalue);
    scanf("%d",&value);

    N=ArrayDeletion(arr,N,delvalue);

    for(int i = 0; i < N; i++)
    {
    brr[i]=arr[i];
    irr[i]=arr[i];
    srr[i]=arr[i];
    }

    printf("Updated Array:");
    DisplayArray(arr,N);printf("\n");

    printf("Bubble Sort: ");
    BubbleSort(brr,N);
    DisplayArray(brr,N);printf("\n");

    printf("Insertion Sort: ");
    InsertionSort(irr,N);
    DisplayArray(irr,N);printf("\n");

    printf("Selection Sort: ");
    SelectionSort(srr,N);
    DisplayArray(srr,N);printf("\n");

    printf("Linear search: ");
    LinearSearch(arr,N,value);

    printf("Binary Search: ");
    BinarySearch(brr,value,0,N-1,&comp);

return 0;
}
