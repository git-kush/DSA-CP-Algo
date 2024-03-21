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