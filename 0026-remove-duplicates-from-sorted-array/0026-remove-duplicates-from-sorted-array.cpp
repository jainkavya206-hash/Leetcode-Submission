class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> elem;
        int n=nums.size();
        int k=1;
        elem.push_back(nums[0]);
       
        for (int i=1;i<n;i++){
            if (nums[i]==nums[i-1]){
                continue;
            }
            else if (nums[i]!=nums[i-1]){
                k++;
                elem.push_back(nums[i]);
            }

        }
        nums=elem;
        return elem.size();
        
    }
};