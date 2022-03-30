// main.cpp

#include <iostream>

#include <vector>

using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 struct ListNode {
    int val;
    ListNode* next;
    ListNode() {};
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        vector<int> vec;
        ListNode* lst = head;
        while (lst != NULL)
        {
            vec.push_back(lst->val);

            lst = lst->next;
        }
        reverse(vec.begin(), vec.end());
        return vec;
    }
};

int main()
{
    Solution so;

    ListNode* head = new ListNode();
    ListNode* node = new ListNode();

    node = head;

    vector<int> inVec = { 1, 3, 2 };
    for (int iNum : inVec)
    {
        node = new ListNode(iNum);
        node = node->next;
    }
    vector<int> reVec = so.reversePrint(node);

    for (int iNum : inVec)
    {
        cout << iNum << " ";
    }

    cout << endl;

    return 0;
}