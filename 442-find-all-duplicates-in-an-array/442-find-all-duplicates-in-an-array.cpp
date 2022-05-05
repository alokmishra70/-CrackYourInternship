class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int>result;
        
        for(auto x : nums){
            x = abs(x);
            if(nums[x-1]>0) nums[x-1] *= -1;
            else result.push_back(x);
            
            
        }
        return result;
        
        
        
    }
};