class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increasing=1;
        bool decreasing=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>nums[i]){
                increasing=0;
            }
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]){
                decreasing=0;
            }
        }

        return increasing || decreasing;
        
    }
};
