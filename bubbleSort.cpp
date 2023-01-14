#include<bits/stdc++.h>
using namespace std;

int main ()
{
   int i, j, n, temp, pass=0;
   cout<<"Enter no of values: ";
   cin>>n;
   int arr[n];
   n= sizeof(arr)/sizeof(arr[0]);
   cout <<"Input array: ";
   for(i=0; i<n; i++){
      cin>> arr[i];
   }

for(i=0; i<n; i++) {
   for(j=i+1; j<n; j++)
   {
      if(arr[j] < arr[i]) {
        swap(arr[i],arr[j]);
      }
   }
pass++;
}
cout <<"Sorted list: ";
for(i = 0; i<n; i++) {
   cout <<arr[i]<<" ";
}
cout<<"\nNumber of passes taken to sort: "<<pass<<endl;
return 0;
}