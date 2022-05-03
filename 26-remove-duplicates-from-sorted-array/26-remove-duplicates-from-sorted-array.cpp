class Solution {
public:
    int removeDuplicates(vector<int>& n) {
        // int n = nums.size();
        int ans = 1;
        
        for(int i=1 ; i<n.size(); i++){
            if(n[i] != n[i-1]){
                n[ans]=n[i];
                ans++;
                
            }
            
                
            
        }
        return ans;
        
    }
};