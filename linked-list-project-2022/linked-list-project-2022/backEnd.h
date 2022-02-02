#pragma once
#include<string>
#include "frontEnd.h"
using namespace std;

struct Node {
    int id;
    int startReignYear;
    int endReignYear;
    int gray;
    string name;
    string information;
    Node* next;

};

// Functions for linked lists' content
void contentFirstBulgarianEmpire();
void contentSecondBulgarianEmpire();
void contentAfterLiberation();

// Functions for printing the linked list's elements
void printYearFirst(Node* head);
void printNameFirst(Node* head);

// Functions for viewing an informatioh about monarch
void viewInformationByYear(Node* head);
void viewInformationByName(Node* head);

// Functions for inserting an element in the linked list
void beginInsert(Node** head, int startReignYear, int endReignYear, string name, string information);
void endInsert(Node** head, int startReignYear, int endReignYear, string name, string information);
void insertNodeAfterYear(Node* head, int startReignYear);
void insertAfterNode(Node* temp, Node* head, int startReignYear, int endReignYear, string name, string information);

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

// Function for viewing which monarch had ruled in given year 
void viewMonarch(Node* head);

// Function for XOR operation 
char xorFunc(char num1, char num2);

// Function for converting from decimal number to gray number
int grayToBin(int num);

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
bool viewInfoChoice(Node* Head);
bool quizChoice();

// Function for viewing and choosing options 
void settingsInput(Node* Head);

// Functions for the quiz
void startQuizFirstBgEmpire(int id);
void startQuizSecondBgEmpire(int id);

