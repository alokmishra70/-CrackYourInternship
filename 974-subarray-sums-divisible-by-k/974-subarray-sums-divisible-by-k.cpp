class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        
        int count =  0,currsum=0;
        for(auto x:nums){
            currsum+=x;
            int rem = currsum%k;
            if(rem<0) rem+=k;
                
            
            if(rem==0) count++;
                
            if(m.find(rem) != m.end()) count+=m[rem];
                
                
            m[rem]++;
            
            
            
        }
        
        return count;
             
            
    }   
        
    
};