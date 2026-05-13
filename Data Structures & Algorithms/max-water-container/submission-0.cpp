class Solution {
public:
    int maxArea(vector<int>& heights) {

        //we have to find the maxWater in the container 

        int maxWater = 0;

        int left = 0;
        int right = heights.size()-1;


        while(left < right){

            int width = right - left;

            int height = min(heights[left],heights[right]);

           int  maxArea = width*height;

            maxWater = max(maxWater,maxArea);


            //if height of left lesser than right
            if(heights[left] < heights[right]) left++;

            else{
                right--;
            }

            
        }
        return maxWater;
    }
};
