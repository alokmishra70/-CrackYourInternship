class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int>tarFreq;
        for(auto i : target){
            tarFreq[i]++;
        }
        unordered_map<char,int>sen;
        for(auto i : s){
            sen[i]++;
        }
        
        int mini = INT_MAX ;
        
        for(auto i : tarFreq){
            mini = min(mini , sen[i.first]/i.second);
        }
        
        return mini;
    }
};