class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
          long long ws=0;
        int n=nums.size();
        //int me=INT_MIN;
        for(int i=0;i<k;i++){
            ws=ws+nums[i];
        }
long long me=ws;
        for(int i=k;i<n;i++){
            ws=ws+nums[i];
            ws=ws-nums[i-k];
            me=max(me,ws);
        }
      
        
       return (double)me/k;
    }
};