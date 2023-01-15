#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; 
    
    int i = (low - 1); 
  
    for (int j = low; j <= high - 1; j++) 
    {
        if (arr[j] <= pivot) {
            i++; 
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

int random_part(int arr[], int low, int high)
{
    srand(time(NULL));
    int random = low + rand() % (high - low);
    swap(arr[random], arr[high]);
  
    return partition(arr, low, high);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high) {
        int pi = random_part(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
}

int main()
{
    int n;
    cout<<"Enter no of values: ";
    cin>>n;
    int arr[n];
    n= sizeof(arr)/sizeof(arr[0]);
    cout <<"Input array: ";
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }

    quickSort(arr, 0, n-1);
    cout <<"Sorted list: ";
    for(int i = 0; i<n; i++) {
        cout <<arr[i]<<" ";
    }
    return 0;
}