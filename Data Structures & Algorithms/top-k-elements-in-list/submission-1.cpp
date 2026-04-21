class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        unordered_map<int, int>::iterator freq_it;
        vector<vector<int>> freq_to_count(nums.size()+1);
        vector<int> result;

        /* mapping unique elements with thier frequency O(n) */
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        /* using freq hash map to get freq vs element vector 1..n */
        for (freq_it = freq.begin(); freq_it != freq.end(); freq_it++) {
            freq_to_count[freq_it->second].push_back(freq_it->first);
        }

        /* Preparing result with k frequent elements */
        for (int i = freq_to_count.size() - 1; i > 0; i--) {
            for (int j = 0; j < freq_to_count[i].size(); j++) {
                if (result.size() == k)
                    return result;
                result.push_back(freq_to_count[i][j]);
            }
        }
        
        return result;
    }
};