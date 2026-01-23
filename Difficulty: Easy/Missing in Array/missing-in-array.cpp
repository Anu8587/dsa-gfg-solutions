class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int sum = 0;
       
        
        for(int i = 0; i<arr.size();i++){
            sum += arr[i];
        }
        
        int total = (arr.size()+1)*(arr.size()+2)/2;
        
        return total - sum;
    }
};