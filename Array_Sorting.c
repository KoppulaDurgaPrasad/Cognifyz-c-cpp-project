#include<stdio.h>

void Print(int arr[],int n) // Function to print the elements of an array
{
	int i;
    for(i=0;i<n;i++)
    {
        printf("\n%d - %d",i,arr[i]);
    }
}

void BubbleSort(int arr[],int n) // Functions to sort the elements of an array using BUBBLE_SORT in Ascending-Descending order
{
	int temp,i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)  
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void InsertionSort(int arr[],int n) // Functions to sort the elements of an array using INSERTION_SORT in Ascending-Descending order
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		j=i-1;
		while(j>-1 && arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
}

int main()
{
    int size;
    printf("Enter the Array Size: \n"); // Prompt user the enter the size
    scanf("%d",&size); // Read the size of the array
    int Arr[size]; // Declare an array of given size
    int i, j, temp;
    for(i=0;i<size;i++)
    {
        printf("\nEnter the elements in the array: ");
        scanf("%d",&Arr[i]); // Read array elements
    }
    printf("\nArray Elements Before Sorting:");
    Print(Arr,size); // Print array elements before sorting
	InsertionSort(Arr,size); // Perform Insertion Sort on the array.To use Bubble Sort, replace with BubbleSort(Arr,size)
    printf("\nArrays Elements After Sorting:");
    Print(Arr,size); // Print array elements after sorting
    return 0; // End of the program
}

