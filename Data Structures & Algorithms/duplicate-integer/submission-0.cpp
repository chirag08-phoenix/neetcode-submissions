class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++){
            int count = std::count(nums.begin(), nums.end(), nums[i]);
            if (count >= 2){
                return true;
            }
        }
        return false;
    }
};