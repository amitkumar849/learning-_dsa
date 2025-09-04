
#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};

Node *removeDuplicates(Node *head) {
  
    unordered_set<int>st;    
    Node *new_head = nullptr;
    Node *tail = nullptr;
    Node *curr = head;
    while (curr != nullptr) {
      
        if (st.find(curr->data) == st.end()) {
          
            Node *new_node = new Node(curr->data);
            if (new_head == nullptr) {
                new_head = new_node;
                tail = new_head;
            }
            else {
                
                tail->next = new_node;
                tail = new_node;
            }

            st.insert(curr->data);
        }
      
        curr = curr->next;
    }
  
    return new_head;
}

void printList(Node *node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(2);
    head->next->next->next = new Node(3);
    head->next->next->next->next = new Node(4);

    cout << "Linked list before duplicate removal:" << endl;
    printList(head);

    head = removeDuplicates(head);

    cout << "Linked list after duplicate removal:" << endl;
    printList(head);

    return 0;
}