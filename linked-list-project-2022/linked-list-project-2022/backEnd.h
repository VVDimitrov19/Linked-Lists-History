#pragma once
#include<string>
#include "frontEnd.h"

struct Node {
    int data;
    std::string name;
    Node* next;

};

// Functions for linked lists' content
void contentFirstBulgarianEmpire();
void contentSecondBulgarianEmpire();
void contentAfterLiberation();

// Functions for printing the linked list's elements
void printYearFirst(Node* head);
void printNameFirst(Node* head);

// Functions for inserting an element in the linked list
void beginInsert(Node** head, int data, std::string name);
void endInsert(Node** head, int data, std::string name);
void insertNodeAfterYear(Node* head, int data);
void insertAfterNode(Node* temp, Node* head, int year, std::string name);

// Functions for searching an element in the linked list
void findNodeByYear(Node* head, int data);
void findNodeByName(Node* head, std::string name);

// Function for deleting an element in the linked list
void deleteNode(Node** head, int key);

// Function for editing an element in the linked list
void editNode(Node* head, int data);

// Functions for selecting the necessary variables with which the following functions will work
void choosingInsertBegin(Node* Head);
void choosingInsertEnd(Node* Head);
void choosingYearSearch(Node* Head);
void choosingNameSearch(Node* Head);
void choosingEditElement(Node* Head);
void choosingInsertAfterNode(Node* temp, Node* head);

// Functions for going around the different menus
bool contentMenuInputYearFirst(Node* Head);
bool contentMenuInputNameFirst(Node* Head);
bool insertChoice(Node* Head);
bool searchChoice(Node* Head);
bool orderChoice(Node* Head);

// Function for the quiz
void startQuiz();