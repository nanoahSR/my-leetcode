// main.cpp

#include <iostream>
#include <stack>


class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {

    }

    void push(int x) {
        inStack.push(x);

        if ( minStack1.empty() || x <= minStack1.top())
        {
            minStack1.push(x);
        }
        /*else
        {
            while (!minStack1.empty() && x > minStack1.top())
            {
                minStack2.push(minStack1.top());
                minStack1.pop();
            }
            minStack1.push(x);
            while (!minStack2.empty())
            {
                minStack1.push(minStack2.top());
                minStack2.pop();
            }
        }*/
    }

    void pop() {

        if (inStack.top() == minStack1.top())
        {
            minStack1.pop();
        }
        inStack.pop();
        /*while (!minStack1.empty() && value >= minStack1.top())
        {
            if (value == minStack1.top())
            {
                minStack1.pop();
                break;
            }
            minStack2.push(minStack1.top());
            minStack1.pop();
        }

        while (!minStack2.empty())
        {
            minStack1.push(minStack2.top());
            minStack2.pop();
        }*/
    }

    int top() {
        if (inStack.empty())
        {
            return -1;
        }
        return inStack.top();
    }

    int min() {
        if (minStack1.empty())
        {
            return -1;
        }
        return minStack1.top();
    }

private:
    std::stack<int> inStack;
    std::stack<int> minStack1;
    std::stack<int> minStack2;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->min();
 */

int main()
{
    MinStack minStack;

    minStack.push(0);
    minStack.push(1);
    minStack.push(0);
    std::cout << minStack.min() << std::endl;
    //minStack.pop();
    minStack.pop();
    std::cout << minStack.min() << std::endl;

    return 0;
}