#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n, int pass)
{
    int i, key, j;
    for (i=1; i<n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
        pass++;
    }
    cout<<"\nNumber of passes taken to sort: "<<pass<<endl;
}


int main()
{
    int n, pass=0;
    cout<<"Enter no of values: ";
    cin>>n;
    int arr[n];
    n= sizeof(arr)/sizeof(arr[0]);
    cout <<"Input array: ";
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }

    insertionSort(arr, n, pass);
    cout <<"Sorted list: ";
    for(int i = 0; i<n; i++) {
        cout <<arr[i]<<" ";
    }
    return 0;
}