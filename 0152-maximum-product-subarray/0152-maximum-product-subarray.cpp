class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int n= nums.size();
        int minpdt= nums[0];
        int maxpdt= nums[0];
        int answer= nums[0];

        for(int i=1; i<n; i++){

            if(nums[i]<0){
                swap(minpdt, maxpdt);
            }

            maxpdt= max(nums[i], maxpdt*nums[i]);
            minpdt= min(nums[i], minpdt*nums[i]);

            answer= max(maxpdt, answer);
        }

        return answer;

        
    }
};