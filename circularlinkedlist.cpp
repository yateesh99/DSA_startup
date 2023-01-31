#include<bits/stdc++.h>
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

void Insert(Node* &tail, int element, int d){
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        Node* curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr-> next = temp; 
    }
}

void print(Node* tail){
    Node* temp = tail;
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }
    while(tail != temp);
    cout<<endl;
}

int main(){
    Node* tail = NULL;
    Insert(tail, 5 , 3);
    print(tail);

    Insert(tail, 3 , 5);
    print(tail);
    
    Insert(tail, 5 , 7);
    print(tail);
    
    Insert(tail, 7 , 9);
    print(tail);
    
    Insert(tail, 5 , 6);
    print(tail);
    
    Insert(tail, 9 , 10);
    print(tail);
    
    Insert(tail, 3 , 4);
    print(tail);
    
    return 0;
}