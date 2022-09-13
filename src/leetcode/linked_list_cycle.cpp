//
// Created by Dmitry Seloustev on 13.09.2022.
//

#include "linked_list_cycle.h"

bool linked_list_cycle::hasCycle(ListNode *head) {
    if (head == nullptr || head->next == nullptr) return false;
    ListNode *slow = head;
    ListNode *fast = head->next;
    while (slow != fast) {
        if (fast == nullptr || fast->next == nullptr) return false;
        slow = slow->next;
        fast = fast->next->next;
    }
    return true;
}
