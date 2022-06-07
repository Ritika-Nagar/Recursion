#include <iostream>
#include <stdio.h>
using namespace std;


void sayDigit(int num,string v[]){
    
    if(num==0){
        return;
    }
    int digit= num%10;
    cout<<v[digit]<<" ";
    num=num/10;
    sayDigit(num);
}


int main() {
	string v[10]= {"one", "two", "three", "four", "five", "six","seven","eight","nine"};
	
	string str="492";
	int num =stoi(str);
	
	cout<<num;
    sayDigit(492,v);
	
}
