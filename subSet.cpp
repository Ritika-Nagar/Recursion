#include <iostream>
using namespace std;

class Solution {
private:
    void findSS(vector<int> nums, vector<int> output, int indx, vector<vector<int>> &ans){
        // RECURSIVE FUNCTION
        // BASE CASE
        if(indx >= nums.size()){
            ans.push_back(output);
            return;
        }
        // EXCLUDE
        
        findSS(nums,output, indx+1, ans);
        //INCLUDE
        
        int element=nums[indx];
        output.push_back(element);
        
        findSS(nums, output, indx+1, ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int indx=0;
        findSS(nums, output,indx,ans );
        
        return ans;
    }
};