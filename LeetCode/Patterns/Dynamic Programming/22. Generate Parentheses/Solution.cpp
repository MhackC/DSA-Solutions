class Solution {
public:
void fun(int open, int close, int n, string & temp, vector<string> & res){
    if(open==n && close==n){
        res.push_back(temp);             //base case
        return;
    }
    if(open < n){
        temp.push_back('(');                   //1st choice
        fun(open+1,close,n,temp,res);
        temp.pop_back();
    }
    if(close < open){
        temp.push_back(')');
        fun(open,close+1,n,temp,res);                 //2nd choice
        temp.pop_back();
    }
    return;
}
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string temp;
        fun(0,0,n,temp,res);
        return res;
    }
};