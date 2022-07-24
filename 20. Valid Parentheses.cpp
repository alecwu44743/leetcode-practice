// Leetcode Link: https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        
        for(int i=0; i<s.size(); i++){
            char c = s[i];
            
            if(c == '(' || c == '{' || c == '['){
                st.push(c);
            }
            else{
                if(st.empty()){
                    st.push(c);
                    break;
                }
                
                char tp = st.top(); st.pop();
                if(tp == '(' && c ==')'){
                    continue;
                }
                else if(tp == '{' && c =='}'){
                    continue;
                }
                else if(tp == '[' && c ==']'){
                    continue;
                }
                else{
                    st.push(c);
                    break;
                }
            }
        }
        
        return st.empty();
    }
};