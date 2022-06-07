class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0;
        int r = n - 1;
        int mid;
        while(l <= r){
            mid = l+(r-l)/2;
            if(nums[mid] == target){
                return mid;
            } 
            if(target < nums[mid]) {
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
            
        }
        return -1;
        
    }
};