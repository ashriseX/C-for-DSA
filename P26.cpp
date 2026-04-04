#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

// Binary Search Tree class
class BST {
private:
    Node* root;

    // Helper function for recursive insertion
    Node* insertRec(Node* node, int value) {
        if (node == nullptr) {
            return new Node(value);
        }
        
        if (value < node->data) {
            node->left = insertRec(node->left, value);
        } 
        else if (value > node->data) {
            node->right = insertRec(node->right, value);
        }
        
        return node;
    }

    // Helper function for recursive inorder traversal
    void inorderRec(Node* node) {
        if (node != nullptr) {
            inorderRec(node->left);
            cout << node->data << " ";
            inorderRec(node->right);
        }
    }

    // Helper function to find minimum value node
    Node* minValueNode(Node* node) {
        Node* current = node;
        while (current && current->left != nullptr) {
            current = current->left;
        }
        return current;
    }

    // Helper function for recursive deletion
    Node* deleteRec(Node* node, int value) {
        if (node == nullptr) return node;

        // Find the node to delete
        if (value < node->data) {
            node->left = deleteRec(node->left, value);
        } 
        else if (value > node->data) {
            node->right = deleteRec(node->right, value);
        } 
        else {
            // Node found - handle deletion cases
            
            // Case 1: Node with no children (leaf)
            if (node->left == nullptr && node->right == nullptr) {
                delete node;
                return nullptr;
            }
            
            // Case 2: Node with one child
            if (node->left == nullptr) {
                Node* temp = node->right;
                delete node;
                return temp;
            }
            else if (node->right == nullptr) {
                Node* temp = node->left;
                delete node;
                return temp;
            }
            
            // Case 3: Node with two children
            Node* temp = minValueNode(node->right);
            node->data = temp->data;
            node->right = deleteRec(node->right, temp->data);
        }
        return node;
    }

    // Helper function to search recursively
    bool searchRec(Node* node, int value) {
        if (node == nullptr) return false;
        
        if (value == node->data) return true;
        
        if (value < node->data)
            return searchRec(node->left, value);
        else
            return searchRec(node->right, value);
    }

public:
    BST() : root(nullptr) {}

    // Public insert function
    void insert(int value) {
        root = insertRec(root, value);
    }

    // Public inorder traversal (prints sorted order)
    void inorder() {
        inorderRec(root);
        cout << endl;
    }

    // Public delete function
    void remove(int value) {
        root = deleteRec(root, value);
    }

    // Public search function
    bool search(int value) {
        return searchRec(root, value);
    }

    // Get minimum value in BST
    int minValue() {
        if (root == nullptr) {
            cout << "Tree is empty!" << endl;
            return -1;
        }
        Node* current = root;
        while (current->left != nullptr) {
            current = current->left;
        }
        return current->data;
    }

    // Get maximum value in BST
    int maxValue() {
        if (root == nullptr) {
            cout << "Tree is empty!" << endl;
            return -1;
        }
        Node* current = root;
        while (current->right != nullptr) {
            current = current->right;
        }
        return current->data;
    }
};

// Main function - Driver code
int main() {
    BST bst;

    // Insert nodes
    bst.insert(50);
    bst.insert(30);
    bst.insert(20);
    bst.insert(40);
    bst.insert(70);
    bst.insert(60);
    bst.insert(80);

    cout << "Inorder traversal (Sorted order): ";
    bst.inorder();                    // Output: 20 30 40 50 60 70 80

    cout << "Minimum value: " << bst.minValue() << endl;   // 20
    cout << "Maximum value: " << bst.maxValue() << endl;   // 80

    cout << "Searching for 40: " << (bst.search(40) ? "Found" : "Not Found") << endl;
    cout << "Searching for 90: " << (bst.search(90) ? "Found" : "Not Found") << endl;

    // Delete a node with two children
    bst.remove(50);
    cout << "\nAfter deleting 50, inorder traversal: ";
    bst.inorder();

    return 0;
}