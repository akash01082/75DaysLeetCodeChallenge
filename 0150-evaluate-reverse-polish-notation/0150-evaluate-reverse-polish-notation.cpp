class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(string tok : tokens){
            if(tok=="+" || tok=="-" || tok=="*" || tok=="/"){
                int b=s.top();
                s.pop();
                int a=s.top();
                s.pop();
                if(tok=="+")
                    s.push(a+b);
                else if(tok=="-")
                    s.push(a-b);
                else if(tok=="*")
                    s.push(a*b);
                else
                    s.push(a/b);
            }else{
                s.push(stoi(tok));
            }
        }
        return s.top();
    }
};