class Solution {
public:
     int findClosestNumber(vector<int>& nums) {  
        int x = nums[0];
        int len = nums.size();
        for(int i = 0; i < len; i++){
            if(abs(x) == abs(nums[i])){
                if(nums[i]>0)
                    x = nums[i];
            }else if (abs(x) > abs(nums[i])){
                x = nums[i];
            }else{
                continue;
            }
        }
        return x;
    }
};