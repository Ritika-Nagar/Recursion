#include <iostream>
using namespace std;


int findSum(int * arr, int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    
    int sum= arr[0] + findSum(arr+1, size-1);
    return sum;
    
}
int main() {
    
    int arr[4]= {2,1,2,3};
    cout<< "Sum "<< findSum(arr,4)<<endl;
	cout<<"GfG!";
	return 0;
}
