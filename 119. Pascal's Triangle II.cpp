// Leetcode Link: https://leetcode.com/problems/pascals-triangle-ii/

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector <int> v;
        
        v.push_back(1);
        
        
        for(int j=0; j<rowIndex; j++){
            for(int i=0; i<v.size()-1; i++){
                v[i] = v[i] + v[i+1];
            }
            v.insert(v.begin(), 1);
        }
        
        return v;
    }
};