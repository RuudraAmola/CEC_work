#include <bits/stdc++.h>
using namespace std;
 
int partition(int arr[], int start, int end)
{
    int pivot = arr[start], count=0;
    for (int i=start+1; i <= end; i++) {
        if (arr[i] <= pivot)
            count++;
    }
 
    int pivotIdx = start + count;
    swap(arr[pivotIdx], arr[start]);
 
    int i=start, j=end;

    while (i < pivotIdx && j > pivotIdx)
    {
 
        while (arr[i] <= pivot){
            i++;
        }
        while (arr[j] > pivot){
            j--;
        }
 
        if (i < pivotIdx && j > pivotIdx){
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIdx;
}
 
void quickSort(int arr[], int start, int end)
{
    if (start >= end)
        return;
 
    int p = partition(arr, start, end);
 
    quickSort(arr, start, p-1);

    quickSort(arr, p+1, end);
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