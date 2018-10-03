//
//  main.cpp
//  BinarySearchTree
//
//  Created by Andrew Chambers on 9/27/18.
//  Copyright © 2018 Andrew Chambers. All rights reserved.
//
#include <iostream>
#include <cstdlib>

struct Node{
    int data;
    Node* left;
    Node* right;
};

//a constructor to set values of each new node
Node* makeNode(int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->right = NULL;
    newNode->left = NULL;
    return newNode;
}

//takes in the array, 0, and the array length as input and creates a binary tree
Node* arrayToBst(int arr[], int start, int end)
{
    //including this, because if the index of the array was larger than the last element, it would be nonsensical
    if (start > end)
    {
        return NULL;
    }
    //finding the mid value in the array as our root
    int mid = (start + end)/2;
    Node* root = makeNode(arr[mid]);
    //using recursion to loop through the array, from the mid value
    root->left = arrayToBst(arr, start, mid-1);
    root->right = arrayToBst(arr, mid+1, end);
    return root;
}

void inorder(Node* node)
{
    if(node == NULL)
    {
        return;
    }
    inorder(node->left);
    std::cout << node->data << " ";
    inorder(node->right);
}

//not used, but included anyways
void maximum(Node* node)
{
    if(node == NULL){
        std::cout << "empty tree" << std::endl;
        return;
    }
    while(node->right != NULL){
        node = node->right;
    }
    std::cout << "max: " << node->data << std::endl;
    return;
}

Node* minimum(Node* node)
{
    if(node == NULL){
        std::cout << "empty tree" <<std::endl;
        return node;
    }
    while(node->left != NULL){
        node = node->left;
    }
    std::cout << "min: " << node->data << std::endl;
    return node;
}


int kthsmallest(Node* node, int k, int& i)
{
    Node* current = node;
    int small;
    while(current != NULL){
        
    }
    
}

//not used but written anyways
void search(Node* node, int x){
    while(node != NULL){
        if(x == node->data){
            std::cout << "found!" << std::endl;
            return;
        }
        else if(x < node->data){
            node = node->left;
        }
        else{
            node = node->right;
        }
    }
    std::cout << "not found" << std::endl;
    return;
}



int main(int argc, const char * argv[]) {

    int k;
    int A[] = {6,17,20,41,45,52,57,65,71,76,79,87,92,95,99};
    std::cout << "This program is to find the k-th smallest element in the binary search tree." << std::endl;
    std::cout << "define a value for k: ";
    std::cin >> k;
    
    int n = sizeof(A)/sizeof(A[0]);
    Node* root = arrayToBst(A, 0, n-1);
    inorder(root);
    Node* min = minimum(root);
    //in order to use recursion, declaring the counter here as -1 makes sense
    
    std::cout << kthsmallest(min, k);
    return 0;
}
