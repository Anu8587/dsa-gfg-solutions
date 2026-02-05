class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        // code here
        int count=0,sum=0;
        unordered_map<int,int>mp;
        mp[0] = 1;
        
        for(int num: arr){
            sum+=num;
            if(mp.find(sum-k) != mp.end()){
                count += mp[sum-k];
            }
            
            mp[sum] ++;
        }
        
        return count;
    }
};