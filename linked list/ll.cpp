#include <bits/stdc++.h>

using namespace std;

class Node{

public:
  int data;
  Node* next;

public:
  Node( int data1, Node* next1=nullptr){
      data = data1;
      next = next1;
  }
  
};

Node* convertArr2LL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i=1; i<arr.size(); i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;      
    }
  return head;
}

int lengthOFLL(Node* head){
    int count = 0;  
    Node* temp = head;  
    while(temp != nullptr){
        count++;
        temp = temp->next;
    }
  return count;
}

Node * deleteHead(Node *head) {
    if(head == NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node *deleteLast(Node *list){
    if(list == NULL || list->next ==nullptr) return NULL;
    
    Node* temp = list;
    while(temp->next->next != nullptr){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return list;
}

// Node *deleteNode(Node *head, int pos)                   //to delete a node (my code)
// {

//   //empty LL
//   if(head == NULL) return head;

//   //removing head, i.e, pos = 0
//   if(pos==0){
//     Node* temp = head;
//     head = head->next;
//     delete temp;
//     return head;
//   }

//   //normal case but we also have to consider that pos(zero based) < lengthOfLL
//   int count(0);
//   Node* temp = head;
//   while(temp != NULL && count < pos-1){
//     temp = temp->next;
//     count++;
//   }

//   if(count == pos-1 && temp !=NULL && temp->next != NULL){
//     Node* delNode = temp->next;
//     temp->next = temp->next->next;
//     delete delNode;
//   }

//   return head;

// }

Node *deleteNode(Node *head, int pos)            //cleaner
{ 

  //empty LL
  if(head == NULL) return head;

  //removing head, i.e, pos = 0
  if(pos==0){
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
  }

  //normal case but we also have to consider that pos(zero based)+1 <= lengthOfLL
  int count(0);
  Node* temp = head;
  Node* prev = NULL;
  while(temp !=NULL){
    
    if(count == pos){
      prev->next = prev->next->next;
      free(temp);
      break;
    }
    count++;
    prev = temp;
    temp = temp->next;
  }

  return head;

}


Node * insert(Node * head, int n, int pos, int val) {
    // Write your code here
    if(head == NULL) return new Node(val);
    
    if(pos == 0){
        Node* temp = head;
        Node* newNODE = new Node(val);
        newNODE->next = temp;
        return newNODE;
    }

    if(pos == n){
        Node* newNODE = new Node(val);
        Node* temp = head;
        while( temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNODE;
        return head;
    }
    
    Node* temp = head;
    Node* prev = NULL;
    int count(0);

    while(pos--){
        prev = temp;
        temp = temp->next;
    }
    
    Node* newNODE = new Node(val);
    prev->next = newNODE;
    newNODE->next = temp;
    return head;

}

int main(){
  vector<int> arr = {1,2,3,4};
  Node* head = convertArr2LL(arr);
  //cout<<(*head).data;
  Node* temp = head;
  while(temp){
    cout<<temp->data;
    temp = temp->next;
  }
  
  cout<<lengthOFLL(head);
}