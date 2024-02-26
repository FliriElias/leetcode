
#ifndef LIST_CICLE_H
#define LIST_CICLE_H

#include <iostream>
#include <set>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
 

class Solution {
public:
    bool hasCycle(ListNode *head);
        

};


#endif