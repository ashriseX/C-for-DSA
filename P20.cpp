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
            if(head == NULL){
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
/*
        Node* listMidPoint(){
            Node* slow = head;
            Node* fast = head;

            while(fast->next->next != NULL || fast!= NULL){
                fast = fast->next->next;
                slow = slow->next;
            }

            return slow;
            
            }*/

        };
    


int main(){
    List l;
    l.addAtEnd(1);
    l.addAtEnd(2);
    l.addAtEnd(3);
    l.addAtEnd(4);
    l.addAtEnd(5);
    l.addAtEnd(10);
    l.addAtEnd(20);
    l.addAtEnd(30);
    l.addAtEnd(40);
    l.addAtEnd(50);




    cout << "The list is: " << endl;
    l.display();

    
  //  cout << "the mid point of the list is: " << l.listMidPoint()->data << endl;
   // cout << l.listMidPoint()->data << " data in the middle node" << endl;
    

    return 0;
}