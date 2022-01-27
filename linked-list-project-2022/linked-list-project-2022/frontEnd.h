#pragma once
#include <string>
struct Node {
    int data;
    std::string name;
    Node* next;

};
void consoleCoordinates(int x, int y);
void menuRoof();
void menuTop();
void menuMiniRoof();
void menuBottom();
void menuCastle();
void menuTitle();
void menuPort();
void menuOptionsBorder();
void menuOptions(int counter);
void menu(int counter);
void exit();
bool menuInput();

void menuCrown();
void menuSword();
void menuSwordTwo();
void choosingMenu();
void choosingMenuOptions(int counter);
void choosingMenu(int counter);
bool choosingMenuInput();

void title();
void leftBorder();
void rightBorder();
void askInput();
void choosing(int counter);
void insertMenu();
void searchMenu();

