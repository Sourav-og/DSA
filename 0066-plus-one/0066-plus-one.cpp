class Solution {
public:
    vector<int> plusOne(vector<int>& digit) {
        for (int i=digit.size()-1; i>=0 ;i--){
            if (digit[i]<9){  //if less then 1 then increment by 1
                digit[i]+=1;

                return digit;
            }
            //if 9 then set to zero
            digit[i] = 0;
        }
        digit.insert(digit.begin(), 1);  //if all digit are 9 then set 1 inthe start 
        return digit;
    }
};