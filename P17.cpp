#include <iostream>
using namespace std;

//using template which is similar to generics in java but more powerful

template<typename T>
 template<Node N>
 
class Node{

    T data;
    Node *next;

    public:
        Node(){
            this->data = 0;
            this->next=NULL;
        }

        Node(T data){
            this->data = data;
            this->next = NULL;
        }





};

//list class
class List{
    Node *head;
    Node *tail;

    public:
        List(){
            head = tail = NULL;

        }
        

        void pushFront(int value){


        }
        void pushBack(){}

};

int main(){

    cout << "this is just to maintain the streak ";
    return 0;
}