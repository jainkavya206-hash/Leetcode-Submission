class Solution {
public:
    bool check(vector<int>& nums) {
        int n =nums.size();
        int k=0;
        for (int i =0;i<n-1;i++){
            if (nums[i]>nums[i+1]){
                k++;
            }
        }
        if (nums[n-1]>nums[0]){
            k++;
        }
        if (k<=1){
            return true;
        }
        else {
            return false;
        }
        return true;
    }
};