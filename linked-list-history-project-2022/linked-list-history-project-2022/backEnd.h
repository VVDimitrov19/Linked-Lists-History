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

// Functions for registration menu
void login();
void registration();
void forgottenPassword();

// Functions for linked lists' content
void contentFirstBulgarianEmpire(int id);
void contentSecondBulgarianEmpire(int id);
void contentAfterLiberation(int id);

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
void findNodeByYear(Node* head, int startReignYear, int id);
void findNodeByName(Node* head, string name, int id);

// Function for deleting an element in the linked list
void deleteNode(Node** head, int startReignYear);

// Function for editing an element in the linked list
void editNode(Node* head, int startReignYear);

// Function for sorting the linked list elements
void sortDescending(Node* head);
void sortAscending(Node* head);

// Function for viewing which monarch had ruled in given year 
void viewMonarch(Node* head, int id);

// Function for converting from decimal number to gray number
int grayToBin(int num);

// Functions for selecting the necessary variables with which the following functions will work
void choosingInsertBegin(Node* Head);
void choosingInsertEnd(Node* Head);
void choosingInsertAfterNode(Node* temp, Node* head);
void choosingYearSearch(Node* Head, int id);
void choosingNameSearch(Node* Head, int id);
void choosingEditElement(Node* Head);

// Functions for going around the different menus
bool registrationFormInput();
bool menuInput();
bool choosingMenuInput(int id);
bool contentMenuInputYearFirst(Node* Head);
bool contentMenuInputYearFirstGuest(Node* Head);
bool contentMenuInputNameFirst(Node* Head);
bool insertChoice(Node* Head);
bool searchChoice(Node* Head, int id);
bool orderChoice(Node* Head, int id);
bool sortChoice(Node* Head, int id);
bool viewInfoChoice(Node* Head, int id);
bool quizChoice();

// Function for viewing and choosing options 
void settingsInput(Node* Head);

// Functions for the quiz
void startQuizFirstBgEmpire(int id, int correct, int incorrect, int skipped);
void startQuizSecondBgEmpire(int id, int correct, int incorrect, int skipped);



