class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> post(nums.size(), 1);
        vector<int> pre(nums.size(), 1);
        vector<int> res(nums.size(), 1);
        int pre_prod, post_prod;
        pre_prod = pre[0];
        post_prod = post[post.size() - 1];

        for (int i = 1; i < pre.size(); i++) {
            pre[i] = pre_prod * nums[i - 1];
            pre_prod = pre[i];
        }

        for (int i = post.size() - 2; i >= 0; i--) {
            post[i] = post_prod * nums[i+1];
            post_prod = post[i];
        }

        for (int k = 0; k < nums.size(); k++) {
            res[k] = pre[k] * post[k];
        }

        return res;
    }
};