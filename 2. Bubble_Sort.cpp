//Bubble Sort (Accending Order)
#include <iostream.h>

void display(int a[], int n){
  for(int i=0; i<n; i++)
      cout<<a[i]<<" ";
}

void bubbleSort(int a[], int n){
	int temp, flag=0;
		for(int i=1; i<n && flag==0; i++){
			flag=1;
				for(int j=0; j<n-i; j++)
					if(a[j]>a[j+1]){  
						temp=a[j];
						a[j]=a[j+1];
						a[j+1]=temp;

						flag=0;
					}
		}
}

int main(){
	int n, a[10];
    cout<<"\n\nEnter the size of the array";
    cin>>n;
    cout<<"\n\nEnter the array";
      for(int i=0; i<n; i++)
        cin>>a[i];
    cout<<"\n\t\t\tBubble Sort";
    cout<<"\n\t\t\t____________";
    cout<<"\n\nThe original array =\n";
    display(a,n);
    bubbleSort(a,n);   
    cout<<"\n\nThe sorted array =\n";
    display(a,n);
  return 0;
}
