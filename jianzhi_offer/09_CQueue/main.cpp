// main.cpp

#include <iostream>
#include <stack>

class CQueue {
public:
    CQueue() {
        
    }

    void appendTail(int value) {
        _stData.push(value);
    }

    int deleteHead() {
        if (_stData.empty())
        {
            if (_stCache.empty())
            {
                return -1;
            }
            in2out();
        }

        while (!_stData.empty())
        {
            int iNum = _stData.top();
            _stCache.push(iNum);
            _stData.pop();
        }

        int value = _stCache.top();
        _stCache.pop();

        return value;

    }

private:
    std::stack<int> _stData;
    std::stack<int> _stCache;

    void in2out()
    {
        if (!_stData.empty())
        {
            _stCache.push(_stData.top());
            _stData.pop();
        }
    }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */

int main()
{
    CQueue* obj = new CQueue();
    
    int param_2 = obj->deleteHead();
    std::cout << param_2 << std::endl;

    obj->appendTail(5);

    obj->appendTail(2);

    param_2 = obj->deleteHead();
    std::cout << param_2 << std::endl;

    param_2 = obj->deleteHead();
    std::cout << param_2 << std::endl;

    return 0;
}