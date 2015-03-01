/**
 * @file AVLTree.h
 * @brief AVL tree is a self-balancing Binary Search Tree (BST) where the difference between heights of left and right subtrees cannot be more than one for all nodes.
 * @author Sohel Tarir
 * @version 1.0
 * @date 2014-09-18
 */

#ifndef _AVLTREE_H_
#define _AVLTREE_H_

#include <stdio.h>
#include <stdlib.h>

struct node{
    int key;
    struct node *left;
    struct node *right;
    int height;
};

class AVLTree{
    public:
        AVLTree();
        ~AVLTree();
        void insert(int key);
        void deleteNode(int key);
        void preOrder();
    private:
        node *rightRotate(node *y);
        node *leftRotate(node *x);
        int getBalance(node *N);
        int max(int a, int b);
        int height(node* N);
        node* newNode(int key);
        node *minValueNode(node* node);
        node *insert(node *node, int key);
        node *deleteNode(node *root, int key);
        void preOrder(node *root);
        node *root;
};
