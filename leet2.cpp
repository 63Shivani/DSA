class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str="";
        int n=strs.size();
        if(n==0)
            return str;
        sort(strs.begin(),strs.end());
        string a=strs[0];
        string b=strs[n-1];
        for(int i=0;i<a.size();i++){
            if(a[i]==b[i]){
                str+=a[i];
            }
            else{
                break;
            }
        }
        return str;
    }
};
