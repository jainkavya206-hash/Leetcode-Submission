#include<cmath>
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n =nums.size();
        int Onecount=0;
        int maxone=0;

        for (int i=0;i<n;i++){
            if (nums[i]==1){
                Onecount++;
                maxone=max(maxone,Onecount);

            }
            else {
                Onecount=0;
            }
            
        }
      
        
        
        return maxone;
        
    }
};