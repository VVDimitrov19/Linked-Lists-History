#pragma once
#include "backEnd.h"
// Function to choose where the elements of the program will be
void consoleCoordinates(int x, int y);

// Functions for the main menu
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

// Function for how to use menu
void useInformation();

// Function to exit the program
void exit();

// Functions for the choosing menu
void choosingMenuCrown();
void choosingMenuSword();
void choosingMenuSwordTwo();
void choosingMenu();
void choosingMenuOptions(int counter);
void choosingMenu(int counter);


// Functions for the other menus
void title();
void leftBorder();
void rightBorder();

// Function for viewing options 
void askInput();

// Function for viewing and choosing options
void settingsInput(Node* Head);
void arrow(int counter);

// Functions for viewing the options for different linked list's functions
void insertMenu();
void searchMenu();
void orderMenu();

// Functions for going around the menus
bool menuInput();
bool choosingMenuInput();