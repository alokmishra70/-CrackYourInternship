class Solution {
    bool isPalindrome(string s , int i , int j){
      while(i<j){
         if(s[i]==s[j]){
                i++;
                j--;
         }
         else {
                return false;
                
         }
      }
        return true;
        
}
public:
    
    
    bool validPalindrome(string s) {
        int j=s.size()-1;
        int i=0;
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else {
                // Skip from Left or Skip from Right --> delete at  most one char
                return isPalindrome(s,i+1,j) || isPalindrome(s,i,j-1);
                
            }
        }
        return true;
        
    }
};