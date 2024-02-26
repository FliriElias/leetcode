#include "linked_list_cycle.h"


bool Solution::hasCycle(ListNode *head) {
    ListNode *temp1 = head;

    std::set<ListNode*> pointer_set;
    
    while (temp1 != nullptr)
    {
        pointer_set.insert(temp1);
        temp1 = temp1->next;
        if (pointer_set.find(temp1) != pointer_set.end()) {
            return true;
        }
    }


    return false;

}