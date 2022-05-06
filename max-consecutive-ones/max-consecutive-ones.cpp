class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int cnt = 0;
        int maxi = INT_MIN;
        for(int i:nums){
            if(i==1) cnt++;
            else cnt=0;
            maxi = max(maxi,cnt);
            
        }
        return maxi;
        
    }
};