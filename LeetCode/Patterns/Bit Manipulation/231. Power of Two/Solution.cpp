class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if((n%2==0) | (n == 1)){
            return true;
        }
        return false;
    }
};