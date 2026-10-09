class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      int n=digits.size();
      for(int i=n-1;i>=0;i--){
        if(digits[i]<9){
            digits[i]++;
            return digits;
        }
        digits[i]=0;
      }
      digits.resize(n+1);
      for(int i=n;i>0;i--){
        digits[i]=digits[i-1];
      }
      digits[0]=1;
      return digits;
    }
};