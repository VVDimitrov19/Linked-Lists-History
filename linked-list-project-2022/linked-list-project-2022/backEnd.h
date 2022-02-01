#pragma once
#include<string>
#include "frontEnd.h"
using namespace std;

struct Node {
    int startReignYear;
    int endReignYear;
    string name;
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
void beginInsert(Node** head, int startReignYear, int endReignYear, string name);
void endInsert(Node** head, int startReignYear, int endReignYear, string name);
void insertNodeAfterYear(Node* head, int startReignYear);
void insertAfterNode(Node* temp, Node* head, int startReignYear, int endReignYear, string name);

// Functions for searching an element in the linked list
void findNodeByYear(Node* head, int startReignYear);
void findNodeByName(Node* head, string name);

// Function for deleting an element in the linked list
void deleteNode(Node** head, int startReignYear);

// Function for editing an element in the linked list
void editNode(Node* head, int startReignYear);

// Function for sorting the linked list elements
void sortDescending(Node* head);
void sortAscending(Node* head);

// Functions for selecting the necessary variables with which the following functions will work
void choosingInsertBegin(Node* Head);
void choosingInsertEnd(Node* Head);
void choosingInsertAfterNode(Node* temp, Node* head); 
void choosingYearSearch(Node* Head);
void choosingNameSearch(Node* Head);
void choosingEditElement(Node* Head);


// Functions for going around the different menus
bool contentMenuInputYearFirst(Node* Head);
bool contentMenuInputNameFirst(Node* Head);
bool insertChoice(Node* Head);
bool searchChoice(Node* Head);
bool orderChoice(Node* Head);
bool sortChoice(Node* Head);

// Function for viewing and choosing options 
void settingsInput(Node* Head);

// Function for the quiz
void startQuiz();