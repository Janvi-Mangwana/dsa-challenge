// Problem: Merge Two Sorted Linked Lists - Implement using linked list with dynamic memory allocation.

// Input:
// - First line: integer n
// - Second line: n space-separated integers (first list)
// - Third line: integer m
// - Fourth line: m space-separated integers (second list)

// Output:
// - Print the merged linked list elements, space-separated

// Example:
// Input:
// 5
// 10 20 30 40 50
// 4
// 15 25 35 45

// Output:
// 10 15 20 25 30 35 40 45 50

// Explanation:
// Compare nodes of both lists, append smaller to result, continue until all nodes are merged.

#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};
 
void insertAtEnd(Node*& head, int val) {
    Node* newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}
 
Node* mergeLists(Node* head1, Node* head2) {
 
    if (head1 == NULL)
        return head2;

    if (head2 == NULL)
        return head1;
 
    if (head1->data <= head2->data) {
        head1->next = mergeLists(head1->next, head2);
        return head1;
    }
    else {
        head2->next = mergeLists(head1, head2->next);
        return head2;
    }
}
 
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {

    Node* head1 = NULL;
    Node* head2 = NULL;

    int n, m, x;
 
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        insertAtEnd(head1, x);
    }
 
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> x;
        insertAtEnd(head2, x);
    }
 
    Node* mergedHead = mergeLists(head1, head2);
 
    printList(mergedHead);

    return 0;
}