//
//  main.cpp
//  BinarySearchTree
//
//  Created by Andrew Chambers on 9/27/18.
//  Copyright © 2018 Andrew Chambers. All rights reserved.
//
#include <iostream>

//treating Node as a class, but could also have been a struct.
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node* getNewNode(int data){
        Node* newNode = new Node();
        newNode->data = data;
        //newNode->left = left;
        //newNode->right = right;
        return newNode;
    }
};

Node* insert(Node* root, int data);

int main(int argc, const char * argv[]) {
    Node* root = NULL;
    int k;
    int A[] = {6,17,20,41,45,52,57,65,71,76,79,87,92,95,99};
    int data;
    std::cout << "This program is to find the k-th smallest element in the binary search tree. \ndefine a value for k: ";
    std::cin >> k;
    for(int i=0; i<16; i++){
        data = A[i];
        insert(root, data);
        std::cout << root << " , " << data;
    }
    return 0;
}

Node* insert(Node* root, int data){
    if(root == NULL) {
        root->getNewNode(data);
    }
    else if(data <= root->data){
        root->left = insert(root->left, data);
    }
    else if(data >= root->data){
        root->right = insert(root->right, data);
    }
    return root;
}















/*void insert(int x){
    
    Node* temp = new Node();
    temp->data = x;
    temp->next = root;
    root = temp;
    
    
    
    for(int i=0; i<15; i++){
        Node* B;
        Node* temp = new Node();
        temp->data = A[i];
        temp->link = NULL;
        B = temp;
        Node* temp1 = B;
        while(temp1->link != NULL){
            temp1 = temp1->link;
            std::cout << temp1->data << ", ";
            
        }
    }*/


/*void print(){
    Node* temp = head;
    std::cout << "list is: ";
    while(temp != NULL){
        std::cout << temp->data << ", ";
        temp = temp->next;
    }
}*/
