/*You are given two non-empty linked lists representing two non-negative integers.
The digits are stored in reverse order, and each of their nodes contains a single digit. 
Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.*/

//Example 1:
//	Input: l1 = [2, 4, 3], l2 = [5, 6, 4]
//	Output : [7, 0, 8]
//	Explanation : 342 + 465 = 807.
//Example 2 :
//
//	Input : l1 = [0], l2 = [0]
//	Output : [0]
//	Example 3 :
//
//	Input : l1 = [9, 9, 9, 9, 9, 9, 9], l2 = [9, 9, 9, 9]
//	Output : [8, 9, 9, 9, 0, 0, 0, 1]



//*
// * Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


//#include <string>
//#include <algorithm>
//using namespace std;
// 
//class Solution {
//public:
//    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//        ListNode* ptr = l1;
//        string a;
//        while (ptr != nullptr) {
//            a += to_string(ptr->val);
//            ptr = ptr->next;
//        }
//        for (int i = 0; i < a.length() / 2; i++) {
//            char t = a[i];
//            a[i] = a[a.length() - 1 - i];
//            a[a.length() - 1 - i] = t;
//        }
//        int n1 = stoi(a);
//
//        ptr = l2;
//        string b;
//        while (ptr != nullptr) {
//            b += to_string(ptr->val);
//            ptr = ptr->next;
//        }
//        for (int i = 0; i < b.length() / 2; i++) {
//            char t = b[i];
//            b[i] = b[b.length() - 1 - i];
//            b[b.length() - 1 - i] = t;
//        }
//        int n2 = stoi(b);
//
//        int result = n1 + n2;
//        ptr = &ListNode(result%10, nullptr);
//        ListNode* r = ptr;
//        result /= 10;
//        while (result != 0) {
//            ptr->next = &ListNode(result % 10, nullptr);
//            ptr = ptr->next;
//            result /= 10;
//        }
//        return r;
//    }
//};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* current = &dummy;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int sum = carry;
            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }
            carry = sum / 10;
            current->next = new ListNode(sum % 10);
            current = current->next;
        }
        int n2 = stoi(b);

        return dummy.next;
    }
};