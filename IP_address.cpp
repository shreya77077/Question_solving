class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        int n = s.size();
        vector<string>ans;
        if(n>12){
            return ans;
        }

        for(int i =1;i<=3;i++){
            for(int j = 1; j<=3;j++){
                for(int k = 1;k<=3;k++){
                    if(i+j+k<n && i+j+k+3 >=n){
                        string a=s.substr(0,1);
                        string b=s.substr(i,j);
                        string c=s.substr(j+i,k);
                        string d=s.substr(i+j+k);
                        if(check(a)&&check(b)&&check(c)&&check(d)){
                            ans.push_back(a+"."+b"."+c+"."+d);
                        }
                    }
                }
            }
            return ans;
        }
        //return ans;
        
    }
    //return ans;
};