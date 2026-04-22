class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res;
        int i, count, tmp;
        for (i = 0; i <= n; i++) {
            tmp = i;
            count = 0;
            while (tmp) {
                tmp = tmp & (tmp - 1);
                count++;
            }
            res.push_back(count);
        }
        return res;
    }
};
