class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int CountZero=0;
        int j=0;

        for (int i=0;i<n;i++){
            if (nums[i]==0){
                CountZero++;
                continue;
            }
            else if (nums[i]!=0){
                nums[j]=nums[i];
                j++;

            }

        }
        for (int i=0;i<CountZero;i++){
            nums[j]=0;
            j++;
        }

        
    }
};