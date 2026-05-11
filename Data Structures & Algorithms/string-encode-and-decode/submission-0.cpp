class Solution {
public:


string encode(vector<string>& strs) {
    
    //convert a list of string into a single string (Encode)
    //later recover  original  string back  is decode

    //steps to Encode :-
   // Take each word one by one.
   // Find its length.
   // Store as length + '#' + word.
   // Join all words into one string. 
   //eg ["neet","code","love","you"] to 4#neet4#code4#love3#you

   string result = "";

   for(auto it : strs){

    result += to_string(it.size()) + '#' + it; 
   }

   return result;
 }

vector<string> decode(string s) {

//Steps to Decode the Strings :-
// 1. Find #
// 2. Read length
// 3. Take next length characters
// 4. Repeat

  vector<string>ans;
   int i = 0;

   while(i<s.size()){

    int j = i;

     //find '#'

     while(s[j] != '#'){
        j++;
     }

     //Get Length

     int len = stoi(s.substr(i , j-i));

     //Get word

     string word = s.substr(j+1,len);

     //Store word 

     ans.push_back(word);

     //Move to next encoded word 

     i = j+1+len;
   }


   return ans;

    }
};
