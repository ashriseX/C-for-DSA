#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        //constructor for the data input
        Node(int data){
            this->data = data;
            this->next = NULL;
        }

   

};

//List class for transversing through the node

class List{
    private:
        Node *head;



    public:    
        //constructor to innitialize the list
        List(){
            head = NULL;

        }
     

    //method to insert the data at the end of the list
        void insertAtEnd(int data){
            Node *nn = new Node(data);

            if(head == NULL){
                head = nn;
            }
            else{
                Node *temp = head;
                 
                //loop for traversing the list
                while(temp->next != NULL){
                    temp = temp->next;
                }
                temp->next = nn;
            
            }
        }
    //method to add at the beginning

        void insertAtStart(int data){
            Node *nn = new Node(data);

            nn->next = head;
            head = nn;
        }

    //method to print the list
        

    //destructor
    ~List(){
        Node *temp;

        while(temp != NULL){
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

//main method for the test case
int main(){

    List *list = new List();

    list->insertAtEnd(51);
    list->insertAtEnd(24);
    list->insertAtEnd(52345);
    list->insertAtEnd(1);
    list->insertAtEnd(5135);
    list->insertAtEnd(325);

    list->displayList();

    list->insertAtStart(101);
    list->displayList();

    delete list;

   
    return 0;
}