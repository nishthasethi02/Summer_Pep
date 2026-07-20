/* https://leetcode.com/problems/find-all-anagrams-in-a-string/

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        vector<int> pfreq(26,0);
        vector<int> window(26,0);

        for(char c : p){
            pfreq[c - 'a']++;
        }

        int k = p.size();

        for(int right = 0; right < s.size(); right++){
            window[s[right] - 'a']++;

            if(right >= k){
                window[s[right - k] - 'a']--;
            }

            if(window == pfreq){
                ans.push_back(right - k + 1);
            }
        }
        return ans;
    }
};

*/

/* https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int left = 0;
        int maxlen = 0;
        for(int right = 0; right < s.size(); right++){
            mp[s[right]]++;

            while(mp[s[right]] > 1){
                mp[s[left]]--;
                left++;
            }
            maxlen = max(maxlen,right-left+1);
        }
        return maxlen;
    }
};

*/

/*
https://leetcode.com/problems/first-unique-character-in-a-string/description/

class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26,0);

        for(char c : s){
            freq[c - 'a']++;
        }

        for(int i = 0; i < s.size(); i++){
            if(freq[s[i] - 'a'] == 1){
                return i;
            }
        }
        return -1;
    }
};

*/

/*
https://leetcode.com/problems/ransom-note/description/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp;

        for(char c : magazine){
            mp[c]++;
        }

        for(char c : ransomNote){
            mp[c]--;
            if(mp[c] < 0){
                return false;
            }
        }
        return true;
    }
};

*/