https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree/problem?isFullScreen=true



/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        int lefth=-1,righth=-1;
        if(root->left){
            lefth=height(root->left);
        }
        if(root->right){
            righth=height(root->right);
        }
        return max(righth,lefth)+1;
    }

