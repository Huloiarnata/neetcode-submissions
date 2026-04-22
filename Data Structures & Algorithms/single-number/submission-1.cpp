class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int singleRes = 0;
        int i;
        for (i = 0; i < nums.size(); i++) {
            singleRes^=nums[i];
        }
        return singleRes;
    }
};