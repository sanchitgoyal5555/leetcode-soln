class Solution {
public:

    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string> output;
        string morse[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for(int i = 0; i < words.size(); i++){
            string temp = "";
            for(int j = 0; j < words[i].length(); j++){
                string s1 = words[i];
                temp += morse[s1[j]-97];
            }
            if(output.find(temp) == output.end()){
                output.insert(temp);
            }
        }
        return output.size();
    }
};