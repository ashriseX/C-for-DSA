#include <iostream>
using namespace std;

//Node for storing the data in the class

class Node{
	public:

		int data;
		Node* next;

		//constructor
		Node(int data){
			this->data = data;
			this->next = NULL;
		}


}

//Linked list 
//list class to control the number of node and to perform the o[erations on them
class List{
	public:
		Node* head;

		//constructor
		List(){
			this->head = NULL;

		}

		//method to add the node at the end
		void insertAtEnd(int data){
			Node* nn = new Node(data);
			if(head == NULL){
				head = nn;
				return;
			}
			else{
				Node* temp = head;
				while (temp->next != NULL){
					temp = temp->next;
				}
				temp->next = nn;
			}


		}

		//method to display the entire list

};

int main(){
	cout << "First C++ program from termux";
	
	cout << "Enter a number:" << endl;
	int num;
	cin >> num;
	cout << "this is your number: " << num << " none other function" << endl;



	return 0;
}


