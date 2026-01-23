class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int maxi = -1;
        for(int i = 0; i< arr.size();i++){
            maxi = max(arr[i],maxi);
        }
        int second = -1;
        for(int i = 0; i< arr.size();i++){
            if(arr[i] != maxi){
                second = max(second, arr[i]);
            }
        };
        
        return second;
    }
};