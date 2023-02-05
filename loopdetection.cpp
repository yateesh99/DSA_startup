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

void InsertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void InsertAtPosition(Node* &tail, Node* &head, int pos, int d){
    if(pos == 1){
        InsertAtHead(head, d);
        return;
    }
    // Node* temp = new Node(d);
    Node* temp = head;
    int cnt = 1;
    while(cnt<pos-1){
        temp = temp->next;
        cnt++;
    }
    if(temp->next == NULL){
        InsertAtTail(tail,d);
        return;
    }
    //creating a node for d
    Node* nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
    
}

bool detectloop(Node* head){
    if(head == NULL){
        return false;
    }
    map<Node*, bool> visited;
    Node*temp = head;
    while(temp!=NULL){
        if(visited[temp] == true){
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

void print(Node* &head){
    Node*temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


int main(){
    Node* node1 = new Node(10);
    // cout<< node1->data << endl;
    // cout<< node1->next << endl;
    Node* head = node1;
    Node* tail = node1;
    InsertAtHead(head,12);
    InsertAtHead(head, 15);
    print(head);
    InsertAtTail(tail,20);
    InsertAtPosition(tail,head,2,25);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    tail->next = head->next;        //creating loop here 
    
    if(detectloop(head)){
        cout<<"cycle is present"<<endl;
    }
    else
    {cout<<"no cycle"<<endl;}
    
    return 0;
}
