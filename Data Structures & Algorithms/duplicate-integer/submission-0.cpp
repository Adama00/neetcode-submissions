class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> unique_nums;
        
        for(size_t i = 0; i < nums.size(); i++ ){
            if (unique_nums.contains(nums[i])){
                return true;
            }
            unique_nums.insert(nums[i]);
        }

        return false;
    }
};