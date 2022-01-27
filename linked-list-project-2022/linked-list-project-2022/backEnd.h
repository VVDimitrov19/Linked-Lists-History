#pragma once
#include<string>
#include "frontEnd.h"
void print(Node* head);
void beginInsert(Node** head, int data, std::string name);
void endInsert(Node** head, int data, std::string name);
void choosingInsertBegin(Node* Head);
void choosingInsertEnd(Node* Head);
void contentFirstBulgarianEmpire();
void contentSecondBulgarianEmpire();
void contentAfterLiberation();
void choosingYearSearch(Node* Head);
void choosingNameSearch(Node* Head);
bool searchChoice(Node* Head);
void findNodeByYear(Node* head, int data);
void findNodeByName(Node* head, std::string name);
void deleteNode(Node** head, int key);
void editNode(Node* head, int data);
void editNodeInput(Node* Head);
void insertNodeAfterYear(Node* head, int data);
void insertAfterNode(Node* temp, Node* head);
bool contentMenuInput(Node* Head);
bool insertChoice(Node* Head);

