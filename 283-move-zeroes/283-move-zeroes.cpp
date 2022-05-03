class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int countZeroes=0;
        
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]==0){
                countZeroes++;
            }
        
        
            else if (countZeroes>0){
                 
                 int t=nums[i];
                 nums[i]=0;
                 nums[i-countZeroes]=t;
            
            }
        }
        
    }
};