// Problem: Count Nodes in Linked List

// Input:
// - First line: integer n
// - Second line: n space-separated integers

// Output:
// - Print the result

// Example:
// Input:
// 5
// 10 20 30 40 50

// Output:
// 5

// Time Complexity: O(N)
// Auxilliary Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = nullptr;
    }
};

int countNodes(Node* head){
    Node* temp = head;
    int count=0;
    while(temp){
        count++;
        temp = temp->next;
    }
    return count;
}

int main(){
int n;
cin>>n;
Node* head = nullptr;
Node* mover = nullptr;
for(int i = 0; i<n; i++){
    int x;
    cin>>x;
    Node* temp = new Node(x);
    if(head == nullptr){
        head = temp;
        mover = temp;
    }else{
        mover->next = temp;
        mover = temp;
    }
}
cout<<countNodes(head);
return 0;
}