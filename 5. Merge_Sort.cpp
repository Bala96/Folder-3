//Merge Sort
#include <iostream.h>

void display(int a[], int n){
  for(int i=0; i<n; i++)
      cout<<a[i]<<" ";
}

void mergeProcess(int *a, int low, int high, int mid){
	int c[20],i,j,k;
		i=low;
		j=mid+1;
		k=low;
			while(i<=mid && j<=high){
				if(a[i]<a[j]){
					c[k]=a[i];
					++k;
					++i;
				}
				else{
					c[k]=a[j];
					++k;
					++j;
				}
			}
			while(i<=mid){
				c[k]=a[i];
				++k;
				i++;
			}
			while(j<=high){
				c[k]=a[j];
				++k;
				++j;
			}
			for(i=low; i<k; i++)
				a[i]=c[j];
}

void mergeSort(int *a, int low, int high){
	int middle;
		if(low<high){
			middle=(low+high)/2;
			mergeSort(a,low,middle);
			mergeSort(a,middle+1,high);
			mergeProcess(a,low,high,middle);
		}
}

int main(){
	int a[10],n;
		cout<<"Enter the size of the array";
		cin>>n;
		cout<<"\n\nEnter the array";
			for(int i=0; i<n; i++)
				cin>>a[i];
		cout<<"\n\n\t\t\tMerge Sort";
		cout<<"\n\t\t\t__________";
		cout<<"\n\nOriginal array is \n";
		display(a,n);
		mergeSort(a,0,n-1);
		cout<<"\n\nSorted array is \n";
		display(a,n);
	return 0;
}
