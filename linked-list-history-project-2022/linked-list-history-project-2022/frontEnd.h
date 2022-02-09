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

// Functions for the registration menu
void registrationFormLeftBorder();
void registrationFormRightBorder();
void registrationFormOptions();
void registrationFormArrow(int counter);

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

// Functions for viewing options 
void askInput();
void askInputGuest();

// Function for moving the arrow in the menus
void arrow(int counter);

// Functions for giving hint if the user doesn't know what is the start reign year
void hintFirstBgEmpire(int number, int id, int correct, int incorrect, int skipped);
void hintSecondBgEmpire(int number, int id, int correct, int incorrect, int skipped);

// Functions for viewing the options for different linked list's functions
void viewInfoMenu();
void insertMenu();
void searchMenu();
void orderMenu();
void sortMenu();
void quizMenu();

