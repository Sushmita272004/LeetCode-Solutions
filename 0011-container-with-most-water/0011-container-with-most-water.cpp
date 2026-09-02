class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int left= 0;
        int right= n-1;
        int ans = INT_MIN;

        while(left<right){
            ans = max((min(height[left], height[right])) * (right-left),ans);
            if(height[left]> height[right]) right--;
            else{ 
                left++;
            }


        }
        return ans;
        
    }
};