#include <stack>
#include <algorithm>

class MinStack {
private:
    // Pair structure: {actual_value, current_minimum}
    std::stack<std::pair<int, int>> st;

public:
    MinStack() {}
    
    void push(int val) {
        if (st.empty()) {
            st.push({val, val});
        } else {
            int current_min = std::min(val, st.top().second);
            st.push({val, current_min});
        }
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};
