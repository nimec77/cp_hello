//
// Created by Dmitry Seloustev on 13.09.2022.
//

#ifndef CP_HELLO_LINKED_LIST_CYCLE_H
#define CP_HELLO_LINKED_LIST_CYCLE_H


struct ListNode {
    int val;
    ListNode *next;
    explicit ListNode(int x) : val(x), next(nullptr) {}
};

class linked_list_cycle {
public:
    static bool hasCycle(ListNode *head);
};


#endif//CP_HELLO_LINKED_LIST_CYCLE_H
