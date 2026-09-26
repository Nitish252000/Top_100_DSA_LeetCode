class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // -----------  T.C = S.C = O(n) -----------------
        // int n = nums.size();
        // vector<int> ans(n, 1);

        // vector<int> prefix(n, 1);
        // for (int i = 1; i < n; i++) {
        //     prefix[i] = prefix[i - 1] * nums[i - 1];
        // }

        // vector<int> suffix(n, 1);
        // for (int i = n - 2; i >= 0; i--) {
        //     suffix[i] = suffix[i + 1] * nums[i + 1];
        // }
        // for (int i = 0; i < n; i++) {
        //     ans[i] = prefix[i] * suffix[i];
        // }
        // return ans;
        // -----------  T.C = O(n); S.C = O(1) -----------------
        int n = nums.size();
        vector<int> ans(n, 1);

        int prefix = 1;
        for (int i = 1; i < n; i++) {
            ans[i] = prefix * nums[i - 1];
            prefix = ans[i];
        }

        int suffix = 1;
        for (int i = n - 2; i >= 0; i--) {
            suffix *= nums[i + 1];
            ans[i] *= suffix;
        }

        return ans;
    }
};
