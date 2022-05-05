class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        // int n = nums.size();
        
        vector<vector<int>>ans;
        
        if(nums.empty())
            return ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0 ; i<n; i++){
            
            int target3 = target - nums[i];
            
            for(int j=i+1  ; j<n; j++){
                
                int target2 = target3 - nums[j];
                
                int begin = j+1;
                int end = n-1;
                
                while(begin<end){
                    int twoSum = nums[begin] + nums[end];
                    if(twoSum < target2) begin++;
                    
                    else if(twoSum > target2) end--;
                    
                    else{
                        vector<int>v(4,0);
                        v[0]=nums[i];
                        v[1]=nums[j];
                        v[2]=nums[begin];
                        v[3]=nums[end];
                        ans.push_back(v);
                        
                        
                        
                        while(begin<end && nums[begin] == v[2]) ++begin;
                        while(begin < end && nums[end] == v[3]) --end;
                        
                    }
                    
                }
                
                while(j+1<n and nums[j+1]==nums[j]) ++j;
            }
            while(i+1<n and nums[i+1] == nums[i]) ++i;
        }
        
        return ans;
        
        
    }
};