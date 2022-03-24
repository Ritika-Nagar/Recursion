#include <iostream>
using namespace std;

int partition(int arr[], int s,int e){
    int pivot= arr[s];
    int cnt=0;
    
    for(int i=s+1;i<e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    
    int pivotIndx=s+cnt;
    
    swap(arr[pivotIndx],arr[s]);// ye toh pivot apni shi jagah par aa gya 
    
    // left or right part ko unki shi jagah par laana h
    
    int i=s, j=e;
    while(i<pivotIndx && j>pivotIndx){
        while(arr[i]<=arr[pivotIndx]){
            i++;
        }
        while(arr[j]>=arr[pivotIndx]){
            j++;
        }
        if(i<pivotIndx && j>pivotIndx){
            swap(arr[i],arr[j]);
        }
    }
    
    return pivotIndx;
    
    
}
void quickSort(int arr[], int s,int e){
   // recursive function h toh base toh aayega hi 
   // base case
   
   if(s>=e){
       return ;
   }
   
   // partiotn karenge 
    int p=partition(arr,s,e);
    
    quickSort(arr,s,p-1);// left part sort karo
    quickSort(arr,p+1,e);// right part sort karo
}

int main() {
	int arr[8]={3,1,8,5,2,9,9,10};
	int n=8;
	quickSort(arr,0,n-1);
	for(int i=0;i<n;i++){
	    cout << arr[i]<<" ";
	}cout<< endl;
	return 0;
}