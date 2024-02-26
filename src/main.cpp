#include <iostream>
#include "linked_list_cycle/linked_list_cycle.h"

int main(int argc, char* argv[]) {
    Solution sol;

    auto *l1 = new ListNode(1);

    auto *l2 = new ListNode(2);
    auto *l3 = new ListNode(0);
    auto *l4 = new ListNode(-4);


    l1->next = l2;
    l2->next = l3;
    l3->next = l4;
    // loop
    l4->next = l2;


    std::cout << sol.hasCycle(l1) << std::endl;

    delete l1;
    delete l2;
    delete l3;
    delete l4;


    return 0;
}