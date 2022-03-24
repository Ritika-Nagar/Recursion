#include <iostream>
using namespace std;

void findSS(string str, string op, int indx, vector<string> & ans ){
    // baseCase
    if(indx>=str.length()){
        if(op.length()){
        ans.push_back(op);}
        return;
    }
    // exclude
    findSS(str, op, indx+1, ans);
    //include
    char s= str[indx];
    op.push_back(s);
    findSS(str, op, indx+1, ans);
}

vector<string> subsequences(string str){
	
	vector<string> ans;
    string op="";
    int indx=0;
    findSS(str, op, indx,ans);
    return ans;
	
}
