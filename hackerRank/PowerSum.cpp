int findPowSum(int X, int N, int num){
    // base case
    cout<<X<<" "<<num<<endl;
    int val=X-pow(num,N);// tune negative value ko call maarne hi nhi diya ..tune pehle hi check maar liya 
    if(val<0){
        return 0;// matlab koi bhi tareeka nhi hai
    }else 
    if(val==0){
        return 1;// matlab ek tareek hai 
    }else {
        return findPowSum(val,N,num+1)+findPowSum( X,  N,  num+1);
    }
    
    
}
int powerSum(int X, int N) {
    return findPowSum(X,N,1);
}
