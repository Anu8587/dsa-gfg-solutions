class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Code here
        
        
        unordered_map<int,int> freq;
        int count = 0;
        
        for(int j = 0; j<arr.size();j++){
            int comp = target - arr[j];
            if(freq.find(comp) != freq.end()){
                count += freq[comp];
            }
            freq[arr[j]]++;
        }
        
        return count;
    }
};