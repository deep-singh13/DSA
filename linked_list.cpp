#include <iostream>
using namespace std;

class Node {
public: 
    int data;
    Node* next;

    Node(int val){
        data = val;
        next =NULL;
    }
};

class List {
private:
    Node* head;
    Node* tail;

public:
    List(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newnode = new Node(val);
        
        if(head == NULL){
            head = tail = newnode;
            return;

        }

        else{
            newnode->next = head;
            head = newnode;
            
        }
        
    }

    void insertinll(int val, int pos){
        if(pos < 0){
            return;
        }
        if(pos ==0){
            push_front(val);
            return;
        }

        Node* newnode = new Node(val);
        Node* temp = head;
        for(int i =0;i<pos-1;i++){
            temp = temp->next;
        }

        newnode->next = temp->next;
        temp->next = newnode;





    }

    

    void pushback(int val){
        Node* newnode = new Node(val);

        if(head == NULL){
            head = tail = newnode;
        }

        else{
            tail->next = newnode;
            tail = newnode;
        }
    }

    void popfront(){

        if(head == NULL){
            cout << "ll empty" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        
    }

    void popback(){
        if(head == NULL){
            cout << "ll empty" << endl;
            return;
        }

        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }

        temp->next = NULL;
        delete tail;
        tail = temp;



    }

    void printll(){
        Node* temp = head;

        while (temp!=NULL){
            cout << temp->data<< " ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }


};





int main(){

    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.insertinll(10,3);

    ll.printll();

    return 0;


}