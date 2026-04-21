class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> pre_res;
        unordered_map<string, vector<string>>::iterator iter;
        vector<vector<string>> res;
        
        for(int i = 0; i < strs.size(); i++) {
            vector<int> fingerprint(26,0);
            string s = strs[i];
            string key;

            // unique fingerprint for each word
            for (int j = 0; j < s.size(); j++) {
                fingerprint[s[j] - 'a']++;
            }

            key += to_string(fingerprint[0]);

            // converting fingerprint into string fmt
            for (int j = 1; j < 26; j++) {
                key += "," + to_string(fingerprint[j]);
            }

            // adding to hash map for final result
            pre_res[key].push_back(s);
        }

        // adding to final result
        for (iter = pre_res.begin(); iter != pre_res.end(); iter++) {
            res.push_back(iter->second);
        }

        return res;
    }
};
