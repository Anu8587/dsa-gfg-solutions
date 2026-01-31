class Solution {
  public:
    int maxDistance(vector<int> &arr) {
        // Code here
        int maxi=0;
        unordered_map<int,int> mapi;
        
        for(int i = 0;i<arr.size();i++){
            if(mapi.find(arr[i]) != mapi.end()){
                maxi = max(maxi,i-mapi[arr[i]]);
            }
            else {
                mapi[arr[i]] = i;
            }
            
            
        
        }
        return maxi;
    }
};