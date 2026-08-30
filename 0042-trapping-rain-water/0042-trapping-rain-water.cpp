class Solution {
public:
    int trap(vector<int>& height) {
        int n= height.size();
        int left=0;
        int right= n-1;

        int leftmax=0; 
        int rightmax=0;

        int totalwater=0;
        int amount=0;

        while(left<=right){

            if(height[left]<= height[right]){
                leftmax = max(height[left],leftmax);
                amount = leftmax-height[left];
                totalwater += amount;
                left++;
            }
            else{
                rightmax= max(rightmax, height[right]);
                amount= rightmax- height[right];
                totalwater += amount;
                right--;

            }

        }
        return totalwater;


    }
};