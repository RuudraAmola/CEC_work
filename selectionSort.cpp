#include <bits/stdc++.h>
using namespace std;
 
void selectionSort(int arr[], int n, int pass)
{
    for (int i=0; i<n-1; i++)
    {
        int min_idx = i;
        for (int j=i+1; j<n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;

        if(min_idx != i)
            swap(arr[min_idx],arr[i]);
        
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

    selectionSort(arr, n, pass);
    cout <<"Sorted list: ";
    for(int i = 0; i<n; i++) {
        cout <<arr[i]<<" ";
    }
    return 0;
}