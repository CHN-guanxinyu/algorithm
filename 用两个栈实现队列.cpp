class Solution
{
public:
    void push(int node) {
        stack1.push(node);
    }
 
    int pop() {
        transfer(stack1, stack2);
        int r = getAndPop(stack2);
        transfer(stack2, stack1);
        return r;
    }
 
private:
    stack<int> stack1;
    stack<int> stack2;
    void transfer(stack<int> &from, stack<int> &to){
        while(!from.empty()) to.push(getAndPop(from));
    }
    int getAndPop(stack<int> &s){
        int r = s.top();
        s.pop();
        return r;
    }
};
