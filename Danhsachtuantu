#include<iostream>
using namespace std;
#define maxlength 10
#define NIL -1
typedef int node;
struct tree{
    int data[maxlength];
    int maxnode;
};
bool emptytreecheck(tree T){
    return T.maxnode == 0;
}
node root (tree T){
    return (emptytreecheck(T) ? NIL : 0);
}
int left_child(node p, tree T){
    int left = 2 * (p + 1) -1;
    if (left >= T.maxnode) return NIL;
    return left;
}
int right_child(node p, tree T){
    int right = 2 * (p + 1);
    if (right >= T.maxnode) return NIL;
    return right;
}
void preorder(node p, tree T){
    if(p != NIL && T.data[p] != NIL){
        cout << T.data[p] << " ";
        preorder(left_child(p,T),T);
        preorder(right_child(p,T),T);
    }
    else return;
}
void postorder(node p, tree T){
    if(p != NIL && T.data[p] != NIL){
        postorder(left_child(p,T),T);
        postorder(right_child(p,T),T);
        cout << T.data[p] << " ";
    }
    else return;
}
void inorder(node p, tree T){
    if(p != NIL && T.data[p] != NIL){
        inorder(left_child(p,T),T);
        cout << T.data[p] << " ";
        inorder(right_child(p,T),T);
    }
    else return;
}
int main(){
    tree T;
    T.maxnode = 0;
    cout << "Nhap so node: " << endl;
    cin >> T.maxnode;
    for (int i = 0; i < T.maxnode; i++){
        cout << "Node " << i << ": " << endl;
        cin >> T.data[i];
    }
    if (emptytreecheck(T)) {cout << "Cay Rong" << endl;
    return 0;
    }
    cout << "Node Root: " << T.data[root(T)] << endl;
    int goc = root(T);
    int trai = left_child(goc,T);
    int phai = right_child(goc,T);
    (trai == NIL) ? cout << "khong co con trai" << endl : cout << "con trai: " << T.data[trai] << endl;
    (phai == NIL) ? cout << "khong co con phai" << endl : cout << "con phai: " << T.data[phai] << endl;
    cout << "Preorder: ";
    preorder(root(T),T);
    cout << endl;
    cout << "Postorder: ";
    postorder(root(T),T);
    cout << endl;
    cout << "Inorder: ";
    inorder(root(T),T);
    return 0;
}

