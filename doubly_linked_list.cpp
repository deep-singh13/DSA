#include <iostream>
using namespace std;

class Node{
public:    
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = prev = NULL;

    }

    
};

class doublelist{
    Node* head;
    Node* tail;

public:
    //constructor
    doublelist(){
    head = tail = NULL;    
    }

    void push_front(int val){
        Node* newnode = new Node(val);
        if(head ==NULL){
            head  = newnode;
            tail =newnode;
        }

        else{
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }

    }
    void pushback(int val){
        Node* newnode = new Node(val);
        if(head ==NULL){
            head = tail = newnode;
        }

        else{
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }

    }

    void popfront(){
        if(head == NULL){
            cout<< "list is empty" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;

        if(head !=NULL){
            head->prev = NULL;
        }

        temp->next = NULL;
        delete temp;
    }

    void popback(){
        if(tail == NULL){
            cout << "list is empty" << endl;
            return;
        }

        Node* temp = tail;
        tail = tail->prev;
        temp->prev = NULL;
        if(tail != NULL){
        tail->next = NULL;
        }
    }




    void print(){
        Node* temp = head;
        while(temp !=NULL){
            cout << temp->data << "<--> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;

    }

    


};


int main(){

    doublelist dll;

    dll.push_front(1);
    dll.pushback(2);
    dll.pushback(3);
    dll.pushback(4);
    dll.popfront();
    dll.popback();
    dll.print();






    return 0;
}