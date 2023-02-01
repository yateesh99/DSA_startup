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
    
    ~Node(){
        int value = this->data;
        if(this->next = NULL){
            delete next;
            next = NULL;
        }
        cout<<"value freed is"<<value<<endl;
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

void deleteNode(Node* tail, int value){
    if(tail == NULL){
        cout<<"List Empty";
    }
    else{
        Node* prev = tail;
        Node* curr = prev->next;
        while(curr-> != value){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
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
