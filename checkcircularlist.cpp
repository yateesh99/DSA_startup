#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next = NULL;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

//circular list insertion
// void Insert(Node* &tail, int element, int d){
//     if(tail == NULL){
//         Node* newNode = new Node(d);
//         tail = newNode;
//         newNode->next = newNode;
//     }
//     else{
//         Node* curr = tail;
//         while(curr->data != element){
//             curr = curr->next;
//         }
//         Node* temp = new Node(d);
//         temp->next = curr->next;
//         curr-> next = temp; 
//     }
// }

//circular list print
// void print(Node* tail){
//     Node* temp = tail;
//     do{
//         cout<<tail->data<<" ";
//         tail = tail->next;
//     }
//     while(tail != temp);
//     cout<<endl;
// }


//linked list insertion
void InsertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

//linked list print
void print(Node* &head){
    Node*temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

bool isCircular(Node* head){
    if (head == NULL){
        return true;
    }
    Node* temp = head->next;
    while(temp!= NULL && temp != head){
        temp=temp->next;
    }
    if(temp == head){
        return true;
    }
    return false;
}

int main(){
    Node* node1= new Node(2) ;
    Node*head = node1;
    InsertAtHead(head, 3);
    print(head);

    InsertAtHead(head, 5);
    print(head);
    
    InsertAtHead(head, 7);
    print(head);
    
    if(isCircular(head)){
        cout<<"list is circular"<<endl;
    }
    else{
        cout<<"list is not circular"<<endl;
    }
    return 0;
}
