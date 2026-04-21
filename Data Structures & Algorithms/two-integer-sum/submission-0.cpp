class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> nums_hash;
        unordered_map<int, int>::iterator it;
        vector<int> res;

        // mapping num: index
        for (int i = 0; i < nums.size(); i++) {
            nums_hash[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (nums_hash.count(diff) == 1 && nums_hash[diff] != i)
                return {i, nums_hash[diff]};
        }
        return {};
        
    }
};
