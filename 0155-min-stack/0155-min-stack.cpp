class MinStack {
public:
    
    stack<int> s;
    stack<int> temp;
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        int Min=INT_MAX;
        while(!s.empty()){
        int num=s.top();
        temp.push(num);
        s.pop();
        Min=min(Min,num);
        }
        while(!temp.empty()){
            s.push(temp.top());
            temp.pop();
        }
        return Min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */