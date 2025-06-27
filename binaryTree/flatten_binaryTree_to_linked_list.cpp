#include <iostream>
using namespace std;

// Define the Node structure
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

class Solution {
public:
    void flatten(Node* root) {
        Node* curr = root;
        while (curr != nullptr) {
            if (curr->left) {
                Node* pred = curr->left;
                while (pred->right)
                    pred = pred->right;
                pred->right = curr->right;
                curr->right = curr->left;
                curr->left = nullptr;
            }
            curr = curr->right;
        }
    }
};
