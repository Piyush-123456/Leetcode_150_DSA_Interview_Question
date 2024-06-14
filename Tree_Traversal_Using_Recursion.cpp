#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *createTree()
{
    int val;
    cout << "Enter the value of Node" << endl;
    cin >> val;
    if (val == -1)
    {
        return NULL;
    }
    Node *root = new Node(val);
    cout << "Value of left Node" << endl;
    root->left = createTree();
    cout << "Value of right Node" << endl;
    root->right = createTree();
    return root;
}

void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    Node *root = createTree();
    cout << "Preorder Traversal  :" << endl;
    preorder(root);
    cout << endl;
    cout << "PostOrder Traversal : " << endl;
    postorder(root);
    cout << endl;
    cout << "Inorder Traversal : " << endl;
    inorder(root);
    cout << endl;
    return 0;
}
