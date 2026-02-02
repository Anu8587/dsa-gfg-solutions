class Solution {
  public:
    int maxLength(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;
        int maxlen = 0;
        
        unordered_map<int,int> first;
        
        first[0] = -1;
        
        for(int j = 0;j<n;j++){
            sum += arr[j];
            if(first.find(sum) != first.end()){
                int i = first[sum] + 1;
                maxlen = max(maxlen,j-i+1);
            }
            
            if(first.find(sum) == first.end()){
                first[sum] = j;
            }
        }
        
        return maxlen;
    }
};