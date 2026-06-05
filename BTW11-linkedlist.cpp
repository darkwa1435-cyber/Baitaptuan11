#include<iostream>
using namespace std;
struct node {
    int data;
    struct node* left;
    struct node* right;
    node (int val){
    data = val;
    left = NULL;
    right = NULL;
    }
};
bool emptytreecheck(node* root){
    return (root == NULL);
}
int main(){
    struct node* root = new node(0);
    cout << "root: " << (root -> data) << endl;
    root -> left = new node(1);
    cout << "node 1 trai: " << (root -> left -> data) << endl;
    root -> right = new node(2);
    cout << "node 1 phai: " << (root -> right -> data) << endl;
    root -> left -> left = new node(3);
    cout << "node con trai cua node 1 trai " << (root -> left -> left -> data) << endl;
    root -> left -> right = new node(4);
    cout << "node con phai cua node 1 trai: " << (root -> left -> right -> data) << endl;
    root -> right -> left = new node(5);
    cout << "node con trai cua node 1 phai: " << (root -> right -> left -> data) << endl;
    root -> right -> right = new node(6);
    cout << "node con phai cua node 1 phai: " << (root -> right -> right -> data) << endl;
    return 0;
}