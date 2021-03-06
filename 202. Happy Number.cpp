// Leetcode Link: https://leetcode.com/problems/happy-number/

class Solution {
public:
    bool isHappy(int n) {
        while(n!=1 && n!=4){
            
            int t = 0;
            while(n){
                t += (n%10) * (n%10);
                n /= 10;
            }
            
            n = t;
        }
        
        return n == 1;
    }
};