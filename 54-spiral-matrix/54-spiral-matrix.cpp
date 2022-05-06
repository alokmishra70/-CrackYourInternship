class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>v;
        int n=matrix.size();
        int m = matrix[0].size();
        
        int left = 0 , right = m-1 , top = 0 , bottom = n-1 , direc = 0;
        while(left <= right and top <= bottom){
            if(direc==0){
                
                
                
                for(int i=left ; i<=right ; i++) v.push_back(matrix[top][i]);
                direc=1;
                top++;
                
            }
            
            else if(direc==1){
                
                
                
                for(int i=top ; i<=bottom ; i++) v.push_back(matrix[i][right]);
                direc=2;
                right--;
                
            }
            else if(direc==2){
                for(int i=right ; i>= left ; i--) v.push_back(matrix[bottom][i]);
                bottom--;
                direc=3;
                
            }
            
            
            else if(direc==3){
                for(int i=bottom ; i>= top ; i--) v.push_back(matrix[i][left]);
                   left++;
                   direc=0;
                
            }
        
        }
        return v;
        
    }
};