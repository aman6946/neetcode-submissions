class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length()) return false;

        vector<char>freq(26,0);

        for(char ch : s){
            freq[ch - 'a']++;
        }

        for(char ch : t){
            freq[ch - 'a']--;
        }

    

        for(int i=0;i<freq.size();i++){

            if(freq[i] != 0){
                return false;
            }
        }
        return true;
        
    }
};
