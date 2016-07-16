//Selection Sort (Accending Order)
#include <iostream.h>

void display(int a[], int n){
  for(int i=0; i<n; i++)
      cout<<a[i]<<" ";
}

void selectionSort(int a[], int n){ 
  int temp, loc;
    for (int i = 0; i < n-1; ++i)
    {
      loc=i;
        for (int j = 0; j < n; ++j)
            if (a[j]<a[loc]) 
                loc=j;
      temp=a[i];
      a[i]=a[loc];
      a[loc]=temp;
    }
}
int main()
{
  int n, a[10];
    cout<<"\n\nEnter the size of the array";
    cin>>n;
    cout<<"\n\nEnter the array";
      for(int i=0; i<n; i++)
        cin>>a[i];
    cout<<"\n\t\t\tSelection Sort";
    cout<<"\n\t\t\t______________";
    cout<<"\n\nThe original array =\n";
    display(a,n);
    selectionSort(a,n);   
    cout<<"\n\nThe sorted array =\n";
    display(a,n);
  return 0;
}
