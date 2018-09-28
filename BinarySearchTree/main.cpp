//
//  main.cpp
//  BinarySearchTree
//
//  Created by Andrew Chambers on 9/27/18.
//  Copyright © 2018 Andrew Chambers. All rights reserved.
//
#include <iostream>

void createLinkList(int *A);
int main(int argc, const char * argv[]) {
    int k;
    int A[] = {6,17,20,41,45,52,57,65,71,76,79,87,92,95,99};
    
    std::cout << "This program is to find the k-th smallest element in the binary search tree. \ndefine a value for k: ";
    std::cin >> k;
    //createLinkList(int *A);
    return 0;
}

void createLinkList(int *A){
    struct Node {
        int data;
        Node* link;
    };
    for(int i=0; i<15; i++){
        Node* B;
        Node* temp = new Node();
        temp->data = A[i];
        temp->link = NULL;
        B = temp;
    }
}
