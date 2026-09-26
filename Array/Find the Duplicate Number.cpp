class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //--- Approach 1:Using Sorting ---------------
        // int n = nums.size();
        // sort(nums.begin(), nums.end());
        // for (int i = 0; i < nums.size() - 1; i++) {
        //     if (nums[i] == nums[i + 1])
        //         return nums[i];
        // }
        // return -1;

        //---Approach 2: Using HashMap -------------
        unordered_map<int, int> mp;
        for (auto& num : nums) {
            mp[num]++;
        }
        for (auto i : mp) {
            if (i.second > 1)
                return i.first;
        }
        return -1;
    }
};
