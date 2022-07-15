// Leetcode Link: https://leetcode.com/problems/pascals-triangle/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int> v;
        vector<vector<int>> ans;
        
        v.push_back(1);
        ans.push_back(v);
        
        for(int i=0; i<numRows-1; i++){
            for(int j=0; j<v.size()-1; j++){
                v[j] += v[j+1];
            }
            v.insert(v.begin(), 1);
            ans.push_back(v);
        }
        
        
        return ans;
    }
};