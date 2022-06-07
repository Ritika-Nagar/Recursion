#include <iostream>
using namespace std;
int count(int n){
    // count Distinct ways To climb Stairs
    
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    
    int countStairs= count(n-1)+ count(n-2);
    return countStairs;
}
int main() {
	cout<<"GfG!";
	
	cout<<count(3)<<endl;
	return 0;
}
