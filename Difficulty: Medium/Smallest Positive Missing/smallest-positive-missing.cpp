class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size();
        unordered_set<int> st;

        for(int x : arr){
            st.insert(x);
        }

        for(int i = 1; i <= n + 1; i++){
            if(st.find(i) == st.end()){
                return i;
            }
        }

        return 1; 
    }
};
