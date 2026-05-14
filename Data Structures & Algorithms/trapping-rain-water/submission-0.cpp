class Solution {
public:
// Step-by-Step Thinking
// 1. Find left maximum for every index
// leftMax[i] = tallest bar from 0 → i
// 2. Find right maximum for every index
// rightMax[i] = tallest bar from n-1 → i
// 3. Water stored
// min(leftMax[i], rightMax[i]) - height[i]
// 4. Add all water
    int trap(vector<int>& height) {

        int n  = height.size();

        vector<int>left_Max(n);
        vector<int>right_Max(n);

         left_Max[0] = height[0];
        

        //first find the left max 
        for(int i=1;i<n;i++){

            left_Max[i] = max(left_Max[i-1],height[i]);
        }

        //Now we will make the right max 
        right_Max[n-1] = height[n-1];

        for(int i=n-2;i>=0;i--){

            right_Max[i] = max(right_Max[i+1], height[i]);
        }

        //calculate the Trapped water 
        int water = 0;
        for(int i=0;i<n;i++){

            water += min(left_Max[i],right_Max[i]) - height[i];
        }

        return water ;
        
    }
};
