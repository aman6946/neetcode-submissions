class Solution {
public:

//This is the Approach to solve this problem 
// Count frequency using hashmap
// Store {frequency, element} in vector
// Sort descending
// Take first k elements
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int>mp;

        for(auto it : nums){

            mp[it]++;
        }

        //Now we will create an Vector which will store the frequency and the number
        vector<pair<int,int>>result;

        for(auto it : mp){
            result.push_back({it.second , it.first});
        }

        //Now we will sort in descending order 

        sort(result.rbegin(),result.rend());

        vector<int>ans;

        //Now we have to move only the top k element inside the ans 

        for(int i=0;i<k;i++){
            ans.push_back(result[i].second);
        }

        return ans;


      
    }
};
