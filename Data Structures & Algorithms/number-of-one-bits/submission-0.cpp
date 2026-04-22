class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res = 0;
        while(n) {
            n &= n-1;
            cout<<n<<endl;
            res++;
        }
        return res;
    }
};
