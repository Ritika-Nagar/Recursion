#include <iostream>
using namespace std;

int power(int n, int r){
    if(n==1 || r==0){
        return 1;
    }
    
   
    int chotaProbelm=power(n,r-1);
    int bda= n* chotaProbelm;
    return bda;
}
int main() {
	//code
	
	cout<<power(2,3)<<endl;
	return 0;
}
