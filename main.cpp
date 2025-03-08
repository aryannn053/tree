#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node* left; Node* right;

    Node (int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

void preOrderDFS (Node* node) {
    if (node == nullptr) return;

    cout << node -> data << " ";

    preOrderDFS(node->left);
    preOrderDFS(node->right);
}

void inOrderDFS (Node* node) {
    if (node == nullptr) return;

    inOrderDFS(node->left);
    cout << node->data << " ";
    inOrderDFS(node->right);
}

void postOrderDFS(Node* node) {
    if (node == nullptr) return;

    postOrderDFS(node->left);
    postOrderDFS(node->right);
    cout << node->data << " ";
}

int main() {
    Node* root = new Node(30);
    root->left = new Node(20);
    root->right = new Node(50);
    root->left->left = new Node(70);
    root->left->right = new Node(80);

    preOrderDFS(root);
    
    cout << endl;

    inOrderDFS(root);

    cout << endl;
    
    postOrderDFS(root);
    return 0;
}
