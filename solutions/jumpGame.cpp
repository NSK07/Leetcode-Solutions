// Link to problem statement : https://leetcode.com/problems/jump-game-vi/
// Solution:

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxResult(vector<int>& nums, int k, int i=0) {    
        int sum=INT_MIN;
        if(i>=nums.size()-1)
            return nums[i];
        for(int j=1;j<=k;j++)
            sum=max(sum,nums[i]+ maxResult(nums,k,i+j));    
        return sum;  
    }
};

int main()
{
    vector<int> nums{1,-1,-2,4,-7,3};
    int k=2;
    Solution obj;
    cout<< obj.maxResult(nums,k);
    return 1;
}