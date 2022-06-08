bool checkPalli(string s, long long i ,long long j){
    if(i>j){
        return true;
    }
//     cout<<s[i]<<" "<<s[j]<<endl;
    if(s[i]==s[j]){
        checkPalli(s,i+1,j-1);
    }else{
//         cout<<"yes"<<endl;
        return false;
    }
}

void bin(long long n, string &str)
{
    /* step 1 */
    if (n > 1)
        bin(n / 2,str);
 
    /* step 2 */
    
    long long ans= n % 2;
//     cout<<ans<<endl;
    string ch = to_string(ans);
    str+=ch;
    
}
bool checkPalindrome(long long N)
{
    string str;
    
    bin(N,str);
//     cout<<str<<endl;
//     cout<<str<<endl;
    long long n= str.length();
    bool ans;
    ans= checkPalli(str,0, str.length()-1);
//     cout<<ans<<endl;
    return ans;
    
    
    
}
