class Solution {
public:
    void sortColors(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        int i=0 ,j=0,n=nums.size(),k=n-1;
        while(j<=k){
        if(nums[j]==0){
            swap(nums[j],nums[i]);
            i++;
            j++;
        }
        else if(nums[j]==1){
            j++;
        }
        else {
            swap(nums[j],nums[k]);
            k--;
        }
        
        
        }
    }
};