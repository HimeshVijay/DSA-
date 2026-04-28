//code to insert at end 
#include <bits/stdc++.h>
using namespace std;



struct Node {
    int data;
    Node* next;
    Node (int val){
        data = val;
        next = nullptr;
    }
};

void printNode(Node* head){
    Node* current = head;
    while(current != nullptr){
        cout<< current->data<<endl;
        current = current->next;
    }
}

void insertAtEnd(Node*& head, int newData){

    Node* newNode = new Node(newData);

    if(head == nullptr){
    head = newNode;
    return;
    }
    
    Node* temp =head;
    while (temp -> next != nullptr){
        temp = temp ->next;
    }
    temp -> next = newNode;
}

int main(){
    Node* head = nullptr;
    insertAtEnd(head, 10);
    insertAtEnd(head, 23);
    printNode(head);
}
