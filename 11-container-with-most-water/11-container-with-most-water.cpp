class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int maxarea=0;
        while(l<r){
            int lh = height[l];
            int rh = height[r];
            int minheight = min(lh,rh);
            int len = r-l;
            int curr_area = minheight*len;
            maxarea = max(maxarea,curr_area);
            
            if(lh<rh) l++;
            else r--;
        }
        return maxarea;
        
    }
};