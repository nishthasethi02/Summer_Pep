#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
/*
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
}
*/

//Insertion at end
void insertAtEnd(Node* &head, int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        head->next = NULL;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = NULL;
}

// Insertion at Position
void insertAtPosition(Node* &head, int data, int position){
    Node* newNode = new Node(data);
    if(position == 1){
        newNode->next = head;
        head = newNode;
        return;
    }
    Node* temp = head;
    for(int i = 1; i < position - 1; i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

// Insertion at Beginning
void insertAtBeginning(Node* &head, int data){
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

//Deletion at end
void deleteAtEnd(Node* &head){
    if(head == NULL){
        return;
    }
    if(head->next == NULL){
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}

// Deletion at Position
void deleteAtPosition(Node* &head, int position){
    if(head == NULL){
        return;
    }
    if(position == 1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* temp = head;
    for(int i = 1; i < position - 1; i++){
        temp = temp->next;
    }
    Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    delete nodeToDelete;
}

// Deletion at Beginning
void deleteAtBeginning(Node* &head){
    if(head == NULL){
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}

int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    head->next = second;
    second->next = third;
    // print(head);
    insertAtEnd(head, 40);
    insertAtPosition(head, 25, 3);
    deleteAtEnd(head);
    deleteAtBeginning(head);
    deleteAtPosition(head, 2);
    Node* current = head;
    while(current != NULL){
        cout << current->data << " ";
        current = current->next;
    }
}