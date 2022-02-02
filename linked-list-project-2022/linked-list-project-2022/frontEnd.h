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

// Function for moving the arrow in the menus
void arrow(int counter);

// Function for explaining how to convert from gray to decimal number
void explanationConvert(int id);

// Function for givint hint if the user doesn't know what is the start reign year
void hint(int number, int id);

// Functions for viewing the options for different linked list's functions
void viewInfoMenu();
void insertMenu();
void searchMenu();
void orderMenu();
void sortMenu();
void quizMenu();

// Functions for going around the menus
bool menuInput();
bool choosingMenuInput();