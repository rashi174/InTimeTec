/*
You need to complete the insert function so that it can create a binary search tree. Display function in the given problem will produce the output in ascending order.

The corresponding video is available @ https://youtu.be/rtYpRFJf8wM

Input Format

You have to complete the "insert" method which takes 2 arguments, value and tnode. The root parameter points to the root node, intially it will be set to NULL. The value parameter contains the element to be inserted in the tree.

The input reading is handled by the code hence you need not worry about reading from stdin/stdout.

The first line contains an integer n which corresponds to the number of elements in the list. The following lines contains the elements of the list.

Constraints

1<=n>=100

Output Format

No need to print anything. Display function will print the output.

Sample Input 0

3
3 2 1
Sample Output 0

1 2 3
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node* left; 
    struct node* right;
} node;


//create a NewNode in Binary Search Tree

struct node* NewNodeBST(int val)
{
    struct node* temp_node=(struct node*)malloc(sizeof(struct node));
    temp_node->value=val;
    temp_node->left=NULL;
    temp_node->right=NULL;
    return temp_node;
}


node* insert(int value, node *tnode)
{
  /* add your code here */
    if (tnode==NULL)
    {
        return NewNodeBST(value);
    }
    if (value < tnode->value){
        tnode->left=insert(value,tnode->left);
    }
    else{
        tnode->right=insert(value,tnode->right);
    }
    return tnode;
}

void display(node* tnode)
{
   if(tnode==NULL)
   {
       return;
   }
   display(tnode->left);
   printf("%d ", tnode->value);
   display(tnode->right);
}

int main() {
    int i, num, value;
    node *root = NULL;
    scanf("%d", &num);
    for (i = 0; i < num; i++){
        scanf("%d",&value);
        root = insert(value, root);
    }
    display(root);
    return 0;
}
