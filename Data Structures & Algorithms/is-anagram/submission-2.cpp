class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length()) return false;

        unordered_map<char,int>mp;

        for(char c : t){

            mp[c]++;
        }


        for(char c : s){

            if(mp.find(c) == mp.end() ||mp[c] == 0){
                //means character not found
                return false;
            }

             mp[c]--;
        } 

        return true;
        


    }
};
