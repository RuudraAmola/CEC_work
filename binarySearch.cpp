#include <bits/stdc++.h>
using namespace std;
 
int binarySearch(int arr[], int l, int r, int key)
{
    if (r >= l) 
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == key)
            return mid+1;

        if (arr[mid] > key)
            return binarySearch(arr, l, mid - 1, key);
 
        return binarySearch(arr, mid + 1, r, key);
    }

    return -1;
}
 
int main()
{
    int arr[10];
    int key;
    int n = 10;
    cout<< "Enter array elements: ";
    for(int i=0; i<10; i++){
        cin>>arr[i];
    }
    cout<< "Enter key to serach: ";
    cin>>key;
    int result = binarySearch(arr, 0, n - 1, key);
    (result == -1)
        ? cout << "Element is not present."
        : cout << "Element is present at index: " << result;
    return 0;
}