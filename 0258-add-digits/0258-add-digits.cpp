class Solution {
public:
    int addDigits(int num) {
        int sum=num;
        while(sum>=10){
            int n=sum;
            int s=0;
            while(n>0){
                int dig=n%10;
                s+=dig;
                n/=10;
            }
            sum=s;
        }
        return sum;
    }
};