#include <iostream> 
using namespace std; 
  
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
void selectionSort(int arr[], int n)  
{  
    int i, j, min_idx;  
    for (i = 0; i < n-1; i++)  
    {  
       
        min_idx = i;  
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[min_idx])  
            min_idx = j;  
   
        swap(&arr[min_idx], &arr[i]);  
    }  
}  
int main()  
{  
	int n;
	cin>>n;
    int arr[n];    
	for(int i=0;i<n;i++)
		cin>>arr[i];
    selectionSort(arr, n);  
	cout<<"Second smallest no. = "<<arr[1]<<endl<<"Second largest no, = "<<arr[n-2];
    return 0;  
}  
