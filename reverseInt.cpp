class Solution {
public:
    int reverse(int x) {
        int r=0,num;
        if(x==INT_MIN)
            return 0;
        if(x<0)
            num=x*(-1);
        else
            num=x;
        while(num!=0){
            if(r>(INT_MAX/10) || r>(INT_MAX/10)+num%10)
                return 0;
                r=r*10+num%10;
                num/=10;
        }
            if(x<0)
                return r*(-1);
            
        return r;
        
    }
};
