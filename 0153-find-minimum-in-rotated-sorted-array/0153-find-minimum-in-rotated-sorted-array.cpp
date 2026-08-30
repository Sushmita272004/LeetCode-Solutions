class Solution {
public:
    int findMin(vector<int>& nums) {
        int n= nums.size();

        int minno= nums[0];

        for(int i=1; i<n; i++){
            minno= min(minno, nums[i]);
        }

        return minno;
        
    }
};