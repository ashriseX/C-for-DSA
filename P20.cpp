#include <iostream>
using namespace std;

//list problems deleting nth node from end of the list

class Node{
    public:
        int data;
        Node* next;

        //constructor
        Node(int data){
            this->data = data;
            this->next = NULL;

        }
};

//list class to control the nodes created and to perform CRUD operations on them

class List{
    public:
        Node* head;

        //constructor
        List(){
            this->head = NULL;

        }

        //function to add the node at the end of the list
        void addAtEnd(int data){
            Node* nn = new Node(data);
            if(head == NUL){
                head = nn;
                return;
            }
            else{
                Node* temp = head;
                while(temp->next != NULL){
                    temp = temp->next;
                }
                temp->next = nn;
            }
        }

        //function to display the list
        void display(){
            Node* temp = head;
            while(temp != NULL){
                cout << temp->data << " ";
                temp = temp->next;
            }
        }

        //function to delete the node at the nth position from the end of the list without using the counter variable
        void deleteNthFromEnd(int n){
            Node* temp = head;
            Node* fast = head;
            Node* slow = head;
            
        }
};