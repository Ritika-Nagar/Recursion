#include <iostream>
using namespace std;


bool isSorted(int * arr, int size){
    if(size==0 || size==1){
        return true;
    }
    
    if(arr[0 > arr[1]]){
        return false;
    }else{
        bool ans= isSorted(arr+1, size-1);
        return ans;
    }
}
int main() {
	cout<<"GfG!";
	
	int arr[5]={4,3,5,1,2};
	
	bool ans=isSorted(arr, 5);
	cout<<ans<<endl;
	return 0;
}
