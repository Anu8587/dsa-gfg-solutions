class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        int n = adj.size();
        unordered_map<int,bool> visited(n);
        queue<int> st;
        vector<int> bfs;
        
        st.push(0);
        visited[0] = true;
        while(!st.empty()) {
            int node = st.front();
            bfs.push_back(node);
            st.pop();
            for(auto it: adj[node]) {
                if(!visited[it]) {
                    st.push(it);
                    visited[it]=true;
                }
            }
        }
        
        return bfs;
    }
};