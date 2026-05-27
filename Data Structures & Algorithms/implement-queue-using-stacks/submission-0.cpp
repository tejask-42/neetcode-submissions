#include<stack>
class MyQueue {
public:
    stack<int> s;
    stack<int> s1;
    MyQueue() {
        
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        while (s.size() > 1){s1.push(s.top()); s.pop();}
        int x = s.top(); s.pop();
        while (s1.size()){s.push(s1.top()); s1.pop();}
        return x;
    }
    
    int peek() {
        while (s.size() > 1){s1.push(s.top()); s.pop();}
        int x = s.top();
        while (s1.size()){s.push(s1.top()); s1.pop();}
        return x;
    }
    
    bool empty() {
        return s.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */