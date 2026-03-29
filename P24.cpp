//LAB Assignment 6
//ABdul Saboor Hasan 
//SP25-BCT-001

#include <iostream>
using namespace std;

// ===================== NODE =====================
class Node
{
public:
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

// =====================TASK 1 First in first out queue============================

class LinkedQueue
{
private:
    Node* front;
    Node* rear;

public:

    // Constructor
    LinkedQueue()
    {
        front = rear = NULL;
    }

    // Check empty
    bool isEmpty()
    {
        return (front == NULL);
    }

    // Enqueue
    void enqueue(int x)
    {
        Node* newNode = new Node(x);

        if (isEmpty())
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }
    }

    // Dequeue
    int dequeue()
    {
        if (isEmpty())
        {
            cout << "\nQueue is empty";
            return -1;
        }

        Node* temp = front;
        int value = temp->data;

        front = front->next;

        if (front == NULL)
            rear = NULL;

        delete temp;
        return value;
    }

    // Display
    void display()
    {
        if (isEmpty())
        {
            cout << "\nQueue is empty";
            return;
        }

        Node* temp = front;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

// ======================TASK 2 Doubly LInked LIST===========================

class DNode
{
public:
    int data;
    DNode* next;
    DNode* prev;

    DNode(int val)
    {
        data = val;
        next = prev = NULL;
    }
};

class Deque
{
private:
    DNode* front;
    DNode* rear;

public:

    // Constructor
    Deque()
    {
        front = rear = NULL;
    }

    // Check empty
    bool isEmpty()
    {
        return (front == NULL);
    }

    // Insert at front
    void insertFront(int x)
    {
        DNode* newNode = new DNode(x);

        if (isEmpty())
        {
            front = rear = newNode;
        }
        else
        {
            newNode->next = front;
            front->prev = newNode;
            front = newNode;
        }
    }

    // Insert at rear
    void insertRear(int x)
    {
        DNode* newNode = new DNode(x);

        if (isEmpty())
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            newNode->prev = rear;
            rear = newNode;
        }
    }

    // Delete from front
    int deleteFront()
    {
        if (isEmpty())
        {
            cout << "\nDeque is empty";
            return -1;
        }

        DNode* temp = front;
        int value = temp->data;

        front = front->next;

        if (front != NULL)
            front->prev = NULL;
        else
            rear = NULL;

        delete temp;
        return value;
    }

    // function that Delete from rear
    int deleteRear()
    {
        if (isEmpty())
        {
            cout << "\nDeque is empty";
            return -1;
        }

        DNode* temp = rear;
        int value = temp->data;

        rear = rear->prev;

        if (rear != NULL)
            rear->next = NULL;
        else
            front = NULL;

        delete temp;
        return value;
    }

    // Display function
    void display()
    {
        if (isEmpty())
        {
            cout << "\nDeque is empty";
            return;
        }

        DNode* temp = front;
        while (temp != NULL)
        {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

// =======================MaIN method==========================

int main()
{
    // ================= QUEUE TEST =================
    cout << "===== LINKED QUEUE TEST =====\n";

    LinkedQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    cout << "Dequeued: " << q.dequeue() << endl;
    q.display();

    // ================= DEQUE TEST =================
    cout << "\n===== DEQUE TEST =====\n";

    Deque dq;

    dq.insertFront(10);
    dq.insertRear(20);
    dq.insertFront(5);
    dq.insertRear(30);

    dq.display();

    cout << "Delete Front: " << dq.deleteFront() << endl;
    cout << "Delete Rear: " << dq.deleteRear() << endl;

    dq.display();

    return 0;
}


