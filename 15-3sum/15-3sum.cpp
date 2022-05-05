class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        int n = nums.size();;
        
        // for a
        for(int i=0 ;i<n-2; i++ ){
            if(i==0 || (i>0 && nums[i] != nums[i-1])){
                int lo = i+1 , hi = n-1 , sum = 0-nums[i];
                
                // pointer aproach
                
                
                while(lo<hi){
                    if(nums[lo]+nums[hi]==sum){
                        
                        vector<int>temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[lo]);
                        temp.push_back(nums[hi]);
                        v.push_back(temp);
                        
                        // for avoiding duplicate
                        while(lo<hi and nums[lo] == nums[lo+1]) lo++;
                        while(lo<hi and nums[hi] == nums[hi-1]) hi--;
                        
                        lo++;hi--;
                    }
                    else if(nums[lo]+nums[hi]<sum) lo++;
                    else hi--;
                }
                
            }
        }
        return v;
        
        
        
        
    }
};