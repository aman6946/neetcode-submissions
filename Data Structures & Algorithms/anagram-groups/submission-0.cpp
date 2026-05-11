class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //Approach to solve this problem 
        //Traverse the string one by one
        //sort the string and use it as a key in Hashmap 
        //Store original string inside mp[SortedString]
        //At the end return all Hashmap value as a sorted string 

        unordered_map<string , vector<string>>mp;

        //Traverse all string 

        for(string str : strs){

            //Create a key 
            string key = str;

            //sort the key 
            sort(key.begin(),key.end());

            //store original string

            mp[key].push_back(str);

        } 

        //Final Answer
        vector<vector<string>>result;

        //Now put Hashmap value into answer
        for(auto it : mp){
            result.push_back(it.second);
        }

        return result;
    }
};
