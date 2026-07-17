class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> set1;
        unordered_map<char, int> set2;

        for(int i=0; i<s.length(); i++){
            if(set1.find(s[i])==set1.end()){set1.insert({s[i],1});}
            else if(set1.find(s[i])!=set1.end()){set1[s[i]]++;}
        }
        for(int i=0; i<t.length(); i++){
            if(set1.find(t[i])!=set1.end() && set1[t[i]]>1){set1[t[i]]--;}
            else if(set1.find(t[i])!= set1.end() && set1[t[i]]==1){set1.erase(t[i]);}
            else if(set1.find(t[i])==set1.end()){return false;}
        }
        // for(int i=0; i<t.length(); i++){
        //     if(set2.find(t[i])==set2.end()){set2.insert({t[i],1});}
        //     else if(set2.find(t[i])!=set2.end()){set2[t[i]]++;}
        // }
        // for(int i=0; i<s.length(); i++){
        //     if(set2.find(s[i])!=set2.end() && set2[s[i]]>1){set2[s[i]]--;}
        //     else if(set2.find(s[i])!= set2.end() && set2[s[i]]==1){set2.erase(s[i]);}
        //     else if(set2.find(s[i])==set2.end()){return false;}
        // }

        if(!(set1.empty())){return false;}
        return true;
    }
};