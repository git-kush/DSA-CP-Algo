#include <bits/stdc++.h>

using namespace std;

class Node{

public:
  int data;
  Node* next;
  Node* back;

public:
  Node( int data1, Node* next1=nullptr, Node* back1=nullptr){
      data = data1;
      next = next1;
      back = back1;
  }

};

Node* reverseDLL(Node* head)
{   
    
    Node* temp  = head;
    
    while(temp->next != NULL){
        temp = temp->next;
        
    }
    Node* temp2  = temp;

    while(temp->prev != NULL){
        Node* holder = temp->next;
        temp->next = temp->prev;
        temp->prev = holder;
        temp = temp->next;
     }
    
    Node* holder = temp->next;
    temp->next = temp->prev;
    temp->prev = holder;
     return temp2;
}

Node* constructDLL(vector<int>& arr) {
    // Write your code here
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i=1; i<arr.size(); i++){
        temp->next = new Node(arr[i]);
        temp->next->back = temp;
        temp = temp->next;      
    }
  return head;
}

