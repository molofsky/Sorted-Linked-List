/*
* Linked List with insert and delete methods
*
* @author Adrian Molofsky
* @version 11/9/23
*/

struct Node {
  int val;
  Node* next;
};

struct List {
  Node* head;
};

void insert(List* list, int val) {
  Node* n = new Node;
  n->val = val;

  Node* prev = list->head;
  Node* cur = list->head->next;

  while (cur) {
    if (cur->val > val) break;
    prev = cur;
    cur = cur->next;
  }

  n->next = cur;
  prev->next = n;
}

void deleteNode(List* list, int val) {
  Node* prev = list->head;
  Node* cur = list->head->next;

  while (cur) {
    if (cur->val = val) {
      prev->next = cur->next;
      delete cur;
      return;
    }

    prev = cur;
    cur = cur->next;
  }
}
