// main.cpp

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() {};
    ListNode(int x) : val(x), next(NULL) {}
    
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode * prev = nullptr;
        ListNode* curr = head;
        while (curr != nullptr)
        {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};

int main()
{
    Solution so;

    ListNode* head = new ListNode();
    ListNode* node = head;

    //node = head;

    vector<int> inVec = { 1, 3, 2 };
    for (int iNum : inVec)
    {
        head->val = iNum;
        head->next = new ListNode();
        head = head->next;
    }

    head = node;

    ListNode* reVec = new ListNode();
    reVec = so.reverseList(head);

    while (reVec != nullptr)
    {
        cout << reVec->val << " ";
        reVec = reVec->next;
    }

    cout << endl;

    return 0;
}