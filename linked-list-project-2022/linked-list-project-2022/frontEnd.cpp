#include <iostream>
#include <conio.h>
#include <windows.h>

#include "frontEnd.h"
#include "backEnd.h"
using namespace std;


#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define ENTER 13
#define ESCAPE 27
#define CTRL_KEYPRESS(k) ((k)  & 0x1f) 

#define LINES 75

// Function to choose where the elements of the program will be
void consoleCoordinates(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// Function for the main menu
void menuRoof()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
    consoleCoordinates(0, 2);
    cout << "                        _____                                                                                                                                 _____                            ";
    consoleCoordinates(0, 3);
    cout << "                       / \\   \\                                                                                                                               / \\   \\                       ";
    consoleCoordinates(0, 4);
    cout << "                      /   \\   \\                                                                                                                             /   \\   \\                      ";
    consoleCoordinates(0, 5);
    cout << "                     /     \\   \\                                                                                                                           /     \\   \\                     ";
    consoleCoordinates(0, 6);
    cout << "                    /_______\\___\\        __           __           __           __           __           __           __           __           __       /_______\\___\\                    ";
}

// Function for the main menu
void menuTop()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
    consoleCoordinates(0, 7);
    cout << "                    |   |   |   |                                                                                                                         |   |   |~~~|      ";
    consoleCoordinates(0, 8);
    cout << "                    |   |   |   |                                                                                                                         |   |   |~~~|      ";
    consoleCoordinates(0, 9);
    cout << "                    |   |   |   |                                                                                                                         |   |   |~~~|      ";
}

// Function for the main menu
void menuMiniRoof()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
    consoleCoordinates(39, 7);
    cout << "/\\  \\        /\\  \\        /\\  \\        /\\  \\        /\\  \\        /\\  \\        /\\  \\        /\\  \\        /\\  \\ ";
    consoleCoordinates(38, 8);
    cout << "/  \\  \\      /  \\  \\      /  \\  \\      /  \\  \\      /  \\  \\      /  \\  \\      /  \\  \\      /  \\  \\      /  \\  \\ ";
    consoleCoordinates(37, 9);
    cout << "/____\\__\\    /____\\__\\    /____\\__\\    /____\\__\\    /____\\__\\    /____\\__\\    /____\\__\\    /____\\__\\    /____\\__\\";
}

// Function for the main menu
void menuBottom()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
    consoleCoordinates(20, 10);
    cout << "|   |   |   |    |    |  |    |    |  |    |    |  |    |    |  |    |    |  |    |    |  |    |    |  |    |    |  |    |    |  |    |   |   |~~~|";
    consoleCoordinates(20, 11);
    cout << "|   |   |   |____|    |  |____|    |  |____|    |  |____|    |  |____|    |  |____|    |  |____|    |  |____|    |  |____|    |  |____|   |   |~~~|                        ";
    consoleCoordinates(20, 12);
    cout << "|___|___|________|____|_______|____|_______|____|_______|____|_______|____|_______|____|_______|____|_______|____|_______|____|_______|___|___|~~~|                        ";
}

// Function for the main menu
void menuCastle()
{
    consoleCoordinates(19, 13);
    cout << "/___/___/|_____|______|_______|__________|___________|______|______|_________|_______|_______|___________|____________|______|_____|_ /___/___/~~~~|";
    consoleCoordinates(18, 14);
    cout << "/__/__/_/~|___|_____|_______|_________|________|________|_______|________|_________|______|________|________|_______|______|______|__ /__/__/_/~~~~~|";
    consoleCoordinates(17, 15);
    cout << "/_/__/_ /~~|______|_______|________|________|________|_______|________|_________|________|_______|_________|_____|________|_____|_____/_/__/_ /~~~~~~|";
    consoleCoordinates(16, 16);
    cout << "/___/___/~~~|____|______|________|_______|________|_______|________|________|________|_______|__________|______|_______|_______|______/___/___/~~~~~~~|";
    consoleCoordinates(15, 17);
    cout << "|__|__|_|~~~~|__|_____|________|______|_______|_______|________|__________|_____|________|_______|______|_____|_____|_______|_____|___|__|__|_|~~~~~~~~|";
    consoleCoordinates(15, 18);
    cout << "|_|__|__|~~~~|____|_______|_______|_______|________|_______|________|_________|______|______|_______|______|_____|_______|_____|______|_|__|__|~~~~~~~~|";
    consoleCoordinates(15, 19);
    cout << "|__|__|_|~~~~|__|_/                                                                                                              \\__|_|__|__|_|~~~~~~~~|";
    consoleCoordinates(15, 20);
    cout << "|_|__|__|~~~~|_|__|                                                                                                              |__|_|_|__|__|~~~~~~~~|";
    consoleCoordinates(15, 21);

    cout << "|___|___|~~~~|__|_|                                                                                                              |_|__|___|___|~~~~~~~~|";
    consoleCoordinates(15, 22);
    cout << "|_|___|_|~~~~|_|__|                                                                                                              |__|_|_|___|_|~~~~~~~~|";
    consoleCoordinates(15, 23);
    cout << "|____|__|~~~~|__|_|                                                                                                              |_|__|____|__|~~~~~~~~|";
    consoleCoordinates(15, 24);
    cout << "|__|__|_|~~~~|_|__|                                                                                                              |__|_|__|__|_|~~~~~~~~|";
    consoleCoordinates(15, 25);
    cout << "|_|__|__|~~~~|__|_|                                                                                                              |_|__|_|__|__|~~~~~~~~|";
    consoleCoordinates(15, 26);
    cout << "|___|___|~~~~|_|__|                                                                                                              |__|_|___|___|~~~~~~~~|";
    consoleCoordinates(15, 27);
    cout << "|_|___|_|~~~~|__|_\\______________________________________________________________________________________________________________/__|_|_|___|_|~~~~~~~~|";
    consoleCoordinates(15, 28);
    cout << "|___|___|~~~~|____|______|_______|_______|_________|__________|________|________|________|________|________|________|________|_____|__|___|___|~~~~~~~~|";
    consoleCoordinates(15, 29);
    cout << "|_|___|_|~~~~|__|_____|_______|______|_________|________|________|________|__________|_______|_________|_______|_________|______|_____|_|___|_|~~~~~~~~|";
    consoleCoordinates(15, 30);
    cout << "|__|__|_|~~~~|_____|_______|______|_________|______|_______|__________|________|_________|________|________|_________|______|_________|__|__|_|~~~~~~~~|";
    consoleCoordinates(15, 31);
    cout << "|_|__|__|~~~~|____|____|______|________|_______|______|_________|__________|_______|_________|________|_______|________|_________|____|_|__|__|~~~~~~~~|";
    consoleCoordinates(15, 32);
    cout << "|__|____|~~~~|__|________|________|_________|_______|______|_________|__________|______|________|__________|_______|_______|__________|__|____|~~~~~~~~|";
    consoleCoordinates(15, 33);
    cout << "|_|__|__|~~~~|_____|_________|________|________|_________|______|_________|_________|______|___________|_______|________|_______|_____|_|__|__|~~~~~~~~|                              \n";
    consoleCoordinates(15, 34);
    cout << "|___|___|~~~~|___|______|_________|_______|________|_________|_______|________|_________|________|__________|_______|_______|______|__|___|___|~~~~~~~~|                              \n";
    consoleCoordinates(15, 35);
    cout << "|_|__|__|~~~~|______|_______|________|_________|_______|________|__________|_______|_______|_________|_________|_______|_______|______|_|__|__|~~~~~~~~|                              \n";
    consoleCoordinates(15, 36);
    cout << "|___|_|_|~~~~|___|_____|_____|______|______/                                                             \\__|____|_______|_______|____|___|_|_|~~~~~~~~|                              \n";
    consoleCoordinates(15, 37);
    cout << "|_|__|__|~~~~|_|_____|______|_____|_____|_/                                                               \\____|_______|______|_______|_|__|__|~~~~~~~~|                      \n";
    consoleCoordinates(15, 38);
    cout << "|___|___|~~~~|____|______|_____|______|__/                                                                 \\__|______|__________|_____|___|___|~~~~~~~~|                              \n";
    consoleCoordinates(15, 39);
    cout << "|_|___|_|~~~~|___|_____|_____|_____|____/                                                                   \\_____|_______|_______|___|_|___|_|~~~~~~~~|                              \n";
    consoleCoordinates(15, 40);
    cout << "|___|___|~~~~|______|______|_____|_____|                                                                     |___|_____|_______|______|___|___|~~~~~~~~|                              \n";
    consoleCoordinates(15, 41);
    cout << "|__|__|_|~~~~|___|_____|______|_____|__|                                                                     |_____|______|_______|___|__|__|_|~~~~~~~~|                              \n";
    consoleCoordinates(15, 42);
    cout << "|_|__|__|~~~~|__|____|_______|____|____|                                                                     |__|______|______|_______|_|__|__|~~~~~~~~|                              \n";
    consoleCoordinates(15, 43);
    cout << "|___|___|~~~~|____|_______|_____|______|                                                                     |____|______|______|_____|___|___|~~~~~~~~|                              \n";
    consoleCoordinates(15, 44);
    cout << "|_|___|_|~~~~|_|_______|_____|______|__|                                                                     |__|____|_____|______|___|_|___|_|~~~~~~~~|                              \n";
    consoleCoordinates(15, 45);
    cout << "|___|___|~~~~|_____|______|_____|______|                                                                     |_____|____|_____|_______|___|___|~~~~~~~~|                              \n";
    consoleCoordinates(15, 46);
    cout << "|_|___|_|~~~~|__|______|_____|_____|___|                                                                     |__|_____|_____|_____|___|_|___|_|~~~~~~~~|                              \n";
    consoleCoordinates(15, 47);
    cout << "|___|___|~~~~|______|_____|_____|______|                                                                     |____|______|_____|______|___|___|~~~~~~~~|                              \n";
    consoleCoordinates(15, 48);
    cout << "|_|__|__|~~~~|___|_____|_____|_____|___|                                                                     |___|_____|_____|____|___|_|__|__|~~~~~~~~|                              \n";
    consoleCoordinates(15, 49);
    cout << "|___|___|~~~~|_|____|_____|_____|____|_|                                                                     |______|_____|_____|_____|___|___|~~~~~~~~|                              \n";
    consoleCoordinates(15, 50);
    cout << "|_|_____|~~~~|____|____|_____|_____|___|                                                                     |____|____|_____|_____|__|_|_____|~~~~~~~~|                              \n";
    consoleCoordinates(15, 51);
    cout << "|____|__|~~~~|__|___|_____|____|_____|_|                                                                     |__|____|____|_____|_____|____|__|~~~~~~~~|                              \n";
    consoleCoordinates(15, 52);
    cout << "|__|____|~~~~|____|_____|____|____|____|                                                                     |____|_____|____|_____|__|_|___|_|~~~~~~~~|                              \n";
    consoleCoordinates(15, 53);
    cout << "|_|___|_|~~~~|_|______|_____|___|___|__|                                                                     |__|____|____|_____|_____|__|____|~~~~~~~~|                              \n";
    consoleCoordinates(15, 54);
    cout << "|___|___|~~~~|_____|_____|____|____|___|                                                                     |____|_____|____|_____|__|___|___|~~~~~~~~|                              \n";
    consoleCoordinates(15, 55);
    cout << "|_|_____|~~~~|__|____|_____|____|______|_____________________________________________________________________|___|____|____|___|______|_|_____|~~~~~~~~|                              \n";
    consoleCoordinates(15, 56);
    cout << "|____|__|                                                                                                                             |____|__|                                     \n";
}

// Function for the main menu
void menuTitle()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    consoleCoordinates(40, 20);
    cout << "|||      |||    |||    ||||||||||||    ||||||||||||   |||||||||||    |||||||||||      |||      |||";
    consoleCoordinates(40, 21);
    cout << "|||      |||    |||    |||                  ||        ||       ||    |||       ||     |||      |||";
    consoleCoordinates(40, 22);
    cout << "|||      |||    |||    |||                  ||        ||       ||    |||       ||     |||      |||";
    consoleCoordinates(40, 23);
    cout << "||||||||||||    |||    ||||||||||||         ||        ||       ||    ||||||||||        |||||||||||";
    consoleCoordinates(40, 24);
    cout << "|||      |||    |||             |||         ||        ||       ||    ||| |||                   |||";
    consoleCoordinates(40, 25);
    cout << "|||      |||    |||             |||         ||        ||       ||    |||  |||                  |||";
    consoleCoordinates(40, 26);
    cout << "|||      |||    |||    ||||||||||||         ||        |||||||||||    |||    |||        |||||||||||";
    consoleCoordinates(40, 27);
}

// Function for the main menu
void menuPort()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    consoleCoordinates(59, 36);
    cout << "    *    *    *    *    *    *    *    *    *    *     *   ";
    consoleCoordinates(58, 37);
    cout << "    *    *    *    *    *    *    *    *    *    *     *  ";
    consoleCoordinates(57, 38);
    cout << "    *    *    *    *    *    *    *    *    *    *     *    * ";
    consoleCoordinates(58, 39);
    cout << "    *    *    *    *    *    *    *    *    *    *     *    ";
    consoleCoordinates(56, 40);
    cout << "    *    *    *    *    *    *    *    *    *    *     *    *  ";
    consoleCoordinates(56, 41);
    cout << "    *    *    *                                      *    *   *";
    consoleCoordinates(56, 42);
    cout << "    *    *    *                                      *    *   *";
    consoleCoordinates(56, 43);
    cout << "    *    *    *                                      *    *   *";
    consoleCoordinates(56, 44);
    cout << "    *    *    *                                      *    *   *";
    consoleCoordinates(56, 45);
    cout << "    *    *    *                                      *    *   *";
    consoleCoordinates(56, 46);
    cout << "    *    *    *                                      *    *   *";
    consoleCoordinates(56, 47);
    cout << "    *    *    *                                      *    *   *";
    consoleCoordinates(56, 48);
    cout << "    *    *    *                                      *    *   *";
    consoleCoordinates(56, 49);
    cout << "    *    *    *                                      *    *   *";
    consoleCoordinates(56, 50);
    cout << "    *    *    *                                      *    *   *";
    consoleCoordinates(56, 51);
    cout << "    *    *    *                                      *    *   *";
    consoleCoordinates(56, 52);
    cout << "    *    *    *    *    *    *    *    *    *    *     *    *";
    consoleCoordinates(56, 53);
    cout << "    *    *    *    *    *    *    *    *    *    *     *    *";
    consoleCoordinates(56, 54);
    cout << "    *    *    *    *    *    *    *    *    *    *     *    *";
 

}


// Function for the main menu
void menuOptionsBorder()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
    consoleCoordinates(74, 41);
    cout << "________________________________";
    consoleCoordinates(73, 42);
    cout << "/                                \\";
    consoleCoordinates(73, 43);
    cout << "|                                |";
    consoleCoordinates(73, 44);
    cout << "|                                |";
    consoleCoordinates(73, 45);
    cout << "|                                |";
    consoleCoordinates(73, 46);
    cout << "|                                |";
    consoleCoordinates(73, 47);
    cout << "|                                |";
    consoleCoordinates(73, 48);
    cout << "|                                |";
    consoleCoordinates(73, 49);
    cout << "|                                |";
    consoleCoordinates(73, 50);
    cout << "|                                |";
    consoleCoordinates(73, 51);
    cout << "\\________________________________/";
}

// Function for the main menu
void menuOptions(int counter)
{

    switch (counter)
    {
    case 1:
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        consoleCoordinates(85, 46);
        cout << "HOW TO USE";
        consoleCoordinates(88, 49);
        cout << "EXIT";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
        consoleCoordinates(76, 43);
        cout << "-->";
        consoleCoordinates(101, 43);
        cout << "<--";
        consoleCoordinates(82, 43);
        cout << "ENTER THE LESSON";
    }break;
    case 2:
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        consoleCoordinates(82, 43);
        cout << "ENTER THE LESSON";
        consoleCoordinates(88, 49);
        cout << "EXIT";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
        consoleCoordinates(76, 46);
        cout << "-->";
        consoleCoordinates(101, 46);
        cout << "<--";
        consoleCoordinates(85, 46);
        cout << "HOW TO USE";
    }break;
    case 3:
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        consoleCoordinates(82, 43);
        cout << "ENTER THE LESSON";
        consoleCoordinates(85, 46);
        cout << "HOW TO USE";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
        consoleCoordinates(76, 49);
        cout << "-->";
        consoleCoordinates(101, 49);
        cout << "<--";
        consoleCoordinates(88, 49);
        cout << "EXIT";

    }break;
    }
}

// Function for the main menu
void menu(int counter)
{
    if (counter == 1) {
        menuRoof();
        menuTop();
        menuMiniRoof();
        menuBottom();
        menuCastle();
        menuTitle();
        menuPort();
        menuOptionsBorder();
        menuOptions(counter);
    }
    if (counter == 2) {
        menuRoof();
        menuTop();
        menuMiniRoof();
        menuBottom();
        menuCastle();
        menuTitle();
        menuPort();
        menuOptionsBorder();
        menuOptions(counter);
    }
    if (counter == 3) {
        menuRoof();
        menuTop();
        menuMiniRoof();
        menuBottom();
        menuCastle();
        menuTitle();
        menuPort();
        menuOptionsBorder();
        menuOptions(counter);
    }

}

// Function for how to use menu
void useInformation()
{
    title();
    leftBorder();
    rightBorder();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    consoleCoordinates(23, 10);
    cout << "When you start the program you will have to choose an era";
    consoleCoordinates(27, 11);
    cout << "After that you can input monarch where you want.";
    consoleCoordinates(28, 12);
    cout << "You can also delete, search or edit a monarch.";
    consoleCoordinates(30, 14);
    cout << "There is also a quiz about the monarchs.";
    consoleCoordinates(4, 16);
    cout << "------------------------------------------------------------------------------------------------" << endl;
    consoleCoordinates(40, 17);
    cout << "KEY COMBINATIONS:" << endl;
    consoleCoordinates(25, 19);
    cout << "To input monarch press CTRL + Q" << endl;
    consoleCoordinates(25, 20);
    cout << "To search monarch press CTRL + S" << endl;
    consoleCoordinates(25, 21);
    cout << "If you want to delete monarch press CTRL + D" << endl;
    consoleCoordinates(25, 22);
    cout << "If you want to edit monarch press CTRL + E" << endl;
    consoleCoordinates(25, 23);
    cout << "If you want to order the view of the monarch press CTRL + O" << endl;
    switch (_getch())
    {
    case ESCAPE:
    {
        system("CLS");
        menuInput();
    }
    }
}

// Function to exit the program
void exit()
{
    system("CLS");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
    consoleCoordinates(30, 15);
    cout << "   ______                          __ _______                    \n";
    consoleCoordinates(30, 16);
    cout << "  /      \\                        /  /       \\                   \n";
    consoleCoordinates(30, 17);
    cout << "/$$$$$$  | ______   ______   ____$$ $$$$$$$  |__    __  ______  \n";
    consoleCoordinates(30, 18);
    cout << "$$ | _$$/ /      \\ /      \\ /    $$ $$ |__$$ /  |  /  |/      \\ \n";
    consoleCoordinates(30, 19);
    cout << "$$ |/    /$$$$$$  /$$$$$$  /$$$$$$$ $$    $$<$$ |  $$ /$$$$$$  |\n";
    consoleCoordinates(30, 20);
    cout << "$$ |$$$$ $$ |  $$ $$ |  $$ $$ |  $$ $$$$$$$  $$ |  $$ $$    $$ |\n";
    consoleCoordinates(30, 21);
    cout << "$$ \\__$$ $$ \\__$$ $$ \\__$$ $$ \\__$$ $$ |__$$ $$ \\__$$ $$$$$$$$/ \n";
    consoleCoordinates(30, 22);
    cout << "$$    $$/$$    $$/$$    $$/$$    $$ $$    $$/$$    $$ $$       |\n";
    consoleCoordinates(30, 23);
    cout << " $$$$$$/  $$$$$$/  $$$$$$/  $$$$$$$/$$$$$$$/  $$$$$$$ |$$$$$$$/ \n";
    consoleCoordinates(30, 24);
    cout << "                                             /  \\__$$ |         \n";
    consoleCoordinates(30, 25);
    cout << "                                             $$    $$/          \n";
    consoleCoordinates(30, 26);
    cout << "                                              $$$$$$/            \n";


    for (int i = 0; i < LINES; i++) {
        Sleep(200);
        cout << "\n";
    }
        cin.ignore();        
}

// Function for the choosing menu
void choosingMenuCrown()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
	consoleCoordinates(30, 2);
	cout << "                                    o\n";
	consoleCoordinates(30, 3);
	cout << "                                   $\"\"$o\n";
	consoleCoordinates(30, 4);
	cout << "                                  $\"  $$\n";
	consoleCoordinates(30, 5);
	cout << "                                   $$$$\n";
	consoleCoordinates(30, 6);
	cout << "                                   o \"$o\n";
	consoleCoordinates(30, 7);
	cout << "                                  o\"  \"$\n";
	consoleCoordinates(30, 8);
	cout << "             oo\"$$$\"  oo$\"$ooo   o$    \"$    ooo\"$oo  $$$\"o\n";
	consoleCoordinates(30, 9);
	cout << "o o o o    oo\"  o\"      \"o    $$o$\"     o o$\"\"  o$      \"$  \"oo   o o o o\n";
	consoleCoordinates(30, 10);
	cout << "\"$o   \"\"$$$\"   $$         $      \"   o   \"\"    o\"         $   \"o$$\"    o$$\n";
	consoleCoordinates(30, 11);
	cout << "  \"\"o       o  $          $\"       $$$$$       o          $  ooo     o\"\"\n";
	consoleCoordinates(30, 12);
	cout << "     \"o   $$$$o $o       o$        $$$$$\"       $o        \" $$$$   o\"\n";
	consoleCoordinates(30, 13);
	cout << "      \"\"o $$$$o  oo o  o$\"         $$$$$\"        \"o o o o\"  \"$$$  $\n";
	consoleCoordinates(30, 14);
	cout << "        \"\" \"$\"     \"\"\"\"\"            \"\"$\"            \"\"\"      \"\"\" \"\n";
	consoleCoordinates(30, 15);
	cout << "         \"oooooooooooooooooooooooooooooooooooooooooooooooooooooo$\n";
	consoleCoordinates(30, 16);
	cout << "          \"$$$$\"$$$$\" $$$$$$$\"$$$$$$ \" \"$$$$$\"$$$$$$\"  $$$\"\"$$$$\n";
	consoleCoordinates(30, 17);
	cout << "           $$$oo$$$$   $$$$$$o$$$$$$o\" $$$$$$$$$$$$$$ o$$$$o$$$\"\n";
	consoleCoordinates(30, 18);
	cout << "           $\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"$\n";
	consoleCoordinates(30, 19);
	cout << "           $\"                                                  o\n";
	consoleCoordinates(30, 20);
	cout << "           $\"$\"$\"$\"$\"$\"$\"$\"$\"$\"$\"$\"$\"$\"$\"$\"$\"$\"$\"$\"$\"$\"$\"$\"$\"$$\n";
}

// Function for the choosing menu
void choosingMenuSword()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
	consoleCoordinates(0, 2);
	cout << "                   _..._\n";
	consoleCoordinates(0, 3);
	cout << "                  /MMMMM\\\n";
	consoleCoordinates(0, 4);
	cout << "                 (I8H#H8I)\n";
	consoleCoordinates(0, 5);
	cout << "                 (I8H#H8I)\n";
	consoleCoordinates(0, 6);
	cout << "                  \\WWWWW/\n";
	consoleCoordinates(0, 7);
	cout << "                   I._.I\n";
	consoleCoordinates(0, 8);
	cout << "                   I._.I\n";
	consoleCoordinates(0, 9);
	cout << "                   I._.I\n";
	consoleCoordinates(0, 10);
	cout << "                   I._.I\n";
	consoleCoordinates(0, 11);
	cout << "                   I._.I\n";
	consoleCoordinates(0, 12);
	cout << "                   I._.I\n";
	consoleCoordinates(0, 13);
	cout << "                   I._.I\n";
	consoleCoordinates(0, 14);
	cout << "                   I.,.I\n";
	consoleCoordinates(0, 15);
	cout << "                  / /#\\ \\\n";
	consoleCoordinates(0, 16);
	cout << "                .dH# # #Hb.\n";
	consoleCoordinates(0, 17);
	cout << "            _.~d#XXP I 7XX#b~,\n";
	consoleCoordinates(0, 18);
	cout << "         _.dXV^XP^ Y X Y ^7X^VXb._\n";
	consoleCoordinates(0, 19);
	cout << "        /AP^   \\PY   Y   Y7/   ^VA\\\n";
	consoleCoordinates(0, 20);
	cout << "       /8/      \\PP  I  77/      \8\\\n";
	consoleCoordinates(0, 21);
	cout << "      /J/        IV     VI        \\L\\\n";
	consoleCoordinates(0, 22);
	cout << "      L|         |  \\ /  |         |J\n";
	consoleCoordinates(0, 23);
	cout << "      V          |  | |  |          V\n";
	consoleCoordinates(0, 24);
	cout << "                 |  | |  |\n";
	consoleCoordinates(0, 25);
	cout << "                 |  | |  |\n";
	consoleCoordinates(0, 26);
	cout << "                 |  | |  | \n";
	consoleCoordinates(0, 27);
	cout << "                 |  | |  | \n";
	consoleCoordinates(0, 28);
	cout << "                 |  | |  |\n";
	consoleCoordinates(0, 29);
	cout << "                 |  | |  | \n";
	consoleCoordinates(0, 30);
	cout << "                 |  | |  |\n";
	consoleCoordinates(0, 31);
	cout << "                 |  | |  |\n";
	consoleCoordinates(0, 32);
	cout << "                 |  | |  |\n";
	consoleCoordinates(0, 33);
	cout << "                 |  | |  |\n";
	consoleCoordinates(0, 34);
	cout << "                 |  | |  |\n";
	consoleCoordinates(0, 35);
	cout << "                 |  | |  |\n";
	consoleCoordinates(0, 36);
	cout << "                 |  | |  |\n";
	consoleCoordinates(0, 37);
	cout << "                 |   Y   | \n";
	consoleCoordinates(0, 38);
	cout << "                 |   |   | \n";
	consoleCoordinates(0, 39);
	cout << "                 |   |   |\n";
	consoleCoordinates(0, 40);
	cout << "                 |   |   |\n";
	consoleCoordinates(0, 41);
	cout << "                 |   |   |\n";
	consoleCoordinates(0, 42);
	cout << "                 |   |   |\n";
	consoleCoordinates(0, 43);
	cout << "                 |   |   |\n";
	consoleCoordinates(0, 44);
	cout << "                 |   |   |\n";
	consoleCoordinates(0, 45);
	cout << "                 |   |   |\n";
	consoleCoordinates(0, 46);
	cout << "                 |   |   |\n";
	consoleCoordinates(0, 47);
	cout << "                 |   |   |\n";
	consoleCoordinates(0, 48);
	cout << "                 |   |   |\n";
	consoleCoordinates(0, 49);
	cout << "                 |   |   |\n";
	consoleCoordinates(0, 50);
	cout << "                 |   |   |\n";
	consoleCoordinates(0, 51);
	cout << "                 |   |   |\n";
	consoleCoordinates(0, 52);
	cout << "                 |   |   |\n";
	consoleCoordinates(0, 53);
	cout << "                 |   |   |\n";
	consoleCoordinates(0, 54);
	cout << "                 I   '   I\n";
	consoleCoordinates(0, 55);
	cout << "                  \\     /\n";
	consoleCoordinates(0, 56);
	cout << "                   \\   /\n";
	consoleCoordinates(0, 57);
	cout << "                    \\ /\n";
}

// Function for the choosing menu
void choosingMenuSwordTwo()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
	consoleCoordinates(92, 2);
	cout << "                   _..._\n";
	consoleCoordinates(92, 3);
	cout << "                  /MMMMM\\\n";
	consoleCoordinates(92, 4);
	cout << "                 (I8H#H8I)\n";
	consoleCoordinates(92, 5);
	cout << "                 (I8H#H8I)\n";
	consoleCoordinates(92, 6);
	cout << "                  \\WWWWW/\n";
	consoleCoordinates(92, 7);
	cout << "                   I._.I\n";
	consoleCoordinates(92, 8);
	cout << "                   I._.I\n";
	consoleCoordinates(92, 9);
	cout << "                   I._.I\n";
	consoleCoordinates(92, 10);
	cout << "                   I._.I\n";
	consoleCoordinates(92, 11);
	cout << "                   I._.I\n";
	consoleCoordinates(92, 12);
	cout << "                   I._.I\n";
	consoleCoordinates(92, 13);
	cout << "                   I._.I\n";
	consoleCoordinates(92, 14);
	cout << "                   I.,.I\n";
	consoleCoordinates(92, 15);
	cout << "                  / /#\\ \\\n";
	consoleCoordinates(92, 16);
	cout << "                .dH# # #Hb.\n";
	consoleCoordinates(92, 17);
	cout << "            _.~d#XXP I 7XX#b~,\n";
	consoleCoordinates(92, 18);
	cout << "         _.dXV^XP^ Y X Y ^7X^VXb._\n";
	consoleCoordinates(92, 19);
	cout << "        /AP^   \\PY   Y   Y7/   ^VA\\\n";
	consoleCoordinates(92, 20);
	cout << "       /8/      \\PP  I  77/      \8\\\n";
	consoleCoordinates(92, 21);
	cout << "      /J/        IV     VI        \\L\\\n";
	consoleCoordinates(92, 22);
	cout << "      L|         |  \\ /  |         |J\n";
	consoleCoordinates(92, 23);
	cout << "      V          |  | |  |          V\n";
	consoleCoordinates(92, 24);
	cout << "                 |  | |  |\n";
	consoleCoordinates(92, 25);
	cout << "                 |  | |  |\n";
	consoleCoordinates(92, 26);
	cout << "                 |  | |  |\n";
	consoleCoordinates(92, 27);
	cout << "                 |  | |  |\n";
	consoleCoordinates(92, 28);
	cout << "                 |  | |  |\n";
	consoleCoordinates(92, 29);
	cout << "                 |  | |  |\n";
	consoleCoordinates(92, 30);
	cout << "                 |  | |  |\n";
	consoleCoordinates(92, 31);
	cout << "                 |  | |  |\n";
	consoleCoordinates(92, 32);
	cout << "                 |  | |  |\n";
	consoleCoordinates(92, 33);
	cout << "                 |  | |  |\n";
	consoleCoordinates(92, 34);
	cout << "                 |  | |  |\n";
	consoleCoordinates(92, 35);
	cout << "                 |  | |  |\n";
	consoleCoordinates(92, 36);
	cout << "                 |  | |  |\n";
	consoleCoordinates(92, 37);
	cout << "                 |   Y   |\n";
	consoleCoordinates(92, 38);
	cout << "                 |   |   |\n";
	consoleCoordinates(92, 39);
	cout << "                 |   |   |\n";
	consoleCoordinates(92, 40);
	cout << "                 |   |   |\n";
	consoleCoordinates(92, 41);
	cout << "                 |   |   |\n";
	consoleCoordinates(92, 42);
	cout << "                 |   |   |\n";
	consoleCoordinates(92, 43);
	cout << "                 |   |   |\n";
	consoleCoordinates(92, 44);
	cout << "                 |   |   |\n";
	consoleCoordinates(92, 45);
	cout << "                 |   |   |\n";
	consoleCoordinates(92, 46);
	cout << "                 |   |   |\n";
	consoleCoordinates(92, 47);
	cout << "                 |   |   |\n";
	consoleCoordinates(92, 48);
	cout << "                 |   |   |\n";
	consoleCoordinates(92, 49);
	cout << "                 |   |   |\n";
	consoleCoordinates(92, 50);
	cout << "                 |   |   |\n";
	consoleCoordinates(92, 51);
	cout << "                 |   |   |\n";
	consoleCoordinates(92, 52);
	cout << "                 |   |   |\n";
	consoleCoordinates(92, 53);
	cout << "                 |   |   |\n";
	consoleCoordinates(92, 54);
	cout << "                 I   '   I\n";
	consoleCoordinates(92, 55);
	cout << "                  \\     /\n";
	consoleCoordinates(92, 56);
	cout << "                   \\   /\n";
	consoleCoordinates(92, 57);
	cout << "                    \\ /\n";
}

// Function for the choosing menu
void choosingMenu()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
	consoleCoordinates(28, 28);
	cout << " _____________________________________________________________________________\n";
	consoleCoordinates(28, 29);
	cout << "|                                                                             |\n";
	consoleCoordinates(28, 30);
	cout << "|                  C H O O S E          A N          E R A                    |\n";
	consoleCoordinates(28, 31);
	cout << "|                                                                             |\n";
	consoleCoordinates(28, 32);
	cout << "|                                                                             |\n";
	consoleCoordinates(28, 33);
	cout << "|                                                                             |\n";
	consoleCoordinates(28, 34);
	cout << "|                                                                             |\n";
	consoleCoordinates(28, 35);
	cout << "|                                                                             |\n";
	consoleCoordinates(28, 36);
	cout << "|                                                                             |\n";
	consoleCoordinates(28, 37);
	cout << "|                                                                             |\n";
	consoleCoordinates(28, 38);
	cout << "|                                                                             |\n";
	consoleCoordinates(28, 39);
	cout << "|                                                                             |\n";
	consoleCoordinates(28, 40);
	cout << "|                                                                             |\n";
	consoleCoordinates(28, 41);
	cout << "|                                                                             |\n";
	consoleCoordinates(28, 42);
	cout << "|                                                                             |\n";
	consoleCoordinates(28, 43);
	cout << "|                                                                             |\n";
	consoleCoordinates(28, 44);
	cout << "|                                                                             |\n";
	consoleCoordinates(28, 45);
	cout << "|_____________________________________________________________________________|\n";
}

// Function for the choosing menu
void choosingMenuOptions(int counter)
{
    switch (counter)
    {
    case 1:
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
        consoleCoordinates(36, 34);
        cout << "---->";
        consoleCoordinates(95, 34);
        cout << "<----";
        consoleCoordinates(56, 34);
        cout << "FIRST BULGARIAN EMPIRE";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        consoleCoordinates(55, 38);
        cout << "SECOND BULGARIAN EMPIRE ";
        consoleCoordinates(51, 42);
        cout << "AFTER THE LIBERATION OF BULGARIA ";
    }break;
    case 2:
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
        consoleCoordinates(36, 38);
        cout << "---->";
        consoleCoordinates(95, 38);
        cout << "<----";
        consoleCoordinates(55, 38);
        cout << "SECOND BULGARIAN EMPIRE ";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        consoleCoordinates(56, 34);
        cout << "FIRST BULGARIAN EMPIRE";
        consoleCoordinates(51, 42);
        cout << "AFTER THE LIBERATION OF BULGARIA ";
    }break;
    case 3:
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
        consoleCoordinates(36, 42);
        cout << "---->";
        consoleCoordinates(95, 42);
        cout << "<----";
        consoleCoordinates(51, 42);
        cout << "AFTER THE LIBERATION OF BULGARIA ";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        consoleCoordinates(56, 34);
        cout << "FIRST BULGARIAN EMPIRE";
        consoleCoordinates(55, 38);
        cout << "SECOND BULGARIAN EMPIRE ";
    }break;
    }
}

// Function for the choosing menu
void choosingMenu(int counter)
{
    if (counter == 1) {
        choosingMenuSwordTwo();
        choosingMenuCrown();
        choosingMenu();
        choosingMenuSword();
        choosingMenuOptions(counter);
    }
    if (counter == 2) {
        choosingMenuSwordTwo();
        choosingMenuCrown();
        choosingMenu();
        choosingMenuSword();
        choosingMenuOptions(counter);
    }
    if (counter == 3) {
        choosingMenuSwordTwo();
        choosingMenuCrown();
        choosingMenu();
        choosingMenuSword();
        choosingMenuOptions(counter);
    }

}

// Function for the other menus
void leftBorder()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
    consoleCoordinates(0, 0);
    cout << "(*)\n";
    consoleCoordinates(0, 1);
    cout << "(*)\n";
    consoleCoordinates(0, 2);
    cout << "(*)\n";
    consoleCoordinates(0, 3);
    cout << "(*)\n";
    consoleCoordinates(0, 4);
    cout << "(*)\n";
    consoleCoordinates(0, 5);
    cout << "(*)\n";
    consoleCoordinates(0, 6);
    cout << "(*)\n";
    consoleCoordinates(0, 7);
    cout << "(*)\n";
    consoleCoordinates(0, 8);
    cout << "(*)\n";
    consoleCoordinates(0, 9);
    cout << "(*)\n";
    consoleCoordinates(0, 10);
    cout << "(*)\n";
    consoleCoordinates(0, 11);
    cout << "(*)\n";
    consoleCoordinates(0, 12);
    cout << "(*)\n";
    consoleCoordinates(0, 13);
    cout << "(*)\n";
    consoleCoordinates(0, 14);
    cout << "(*)\n";
    consoleCoordinates(0, 15);
    cout << "(*)\n";
    consoleCoordinates(0, 16);
    cout << "(*)\n";
    consoleCoordinates(0, 17);
    cout << "(*)\n";
    consoleCoordinates(0, 18);
    cout << "(*)\n";
    consoleCoordinates(0, 19);
    cout << "(*)\n";
    consoleCoordinates(0, 20);
    cout << "(*)\n";
    consoleCoordinates(0, 21);
    cout << "(*)\n";
    consoleCoordinates(0, 22);
    cout << "(*)\n";
    consoleCoordinates(0, 23);
    cout << "(*)\n";
    consoleCoordinates(0, 24);
    cout << "(*)\n";
    consoleCoordinates(0, 25);
    cout << "(*)\n";
    consoleCoordinates(0, 26);
    cout << "(*)\n";
    consoleCoordinates(0, 27);
    cout << "(*)\n";
    consoleCoordinates(0, 28);
    cout << "(*)\n";
    consoleCoordinates(0, 29);
    cout << "(*)\n";
    consoleCoordinates(0, 30);
    cout << "(*)\n";
    consoleCoordinates(0, 31);
    cout << "(*)\n";
    consoleCoordinates(0, 32);
    cout << "(*)\n";
    consoleCoordinates(0, 33);
    cout << "(*)\n";
    consoleCoordinates(0, 34);
    cout << "(*)\n";
    consoleCoordinates(0, 35);
    cout << "(*)\n";
    consoleCoordinates(0, 36);
    cout << "(*)\n";
    consoleCoordinates(0, 37);
    cout << "(*)\n";
    consoleCoordinates(0, 38);
    cout << "(*)\n";
    consoleCoordinates(0, 39);
    cout << "(*)\n";
    consoleCoordinates(0, 40);
    cout << "(*)\n";
    consoleCoordinates(0, 41);
    cout << "(*)\n";
    consoleCoordinates(0, 42);
    cout << "(*)\n";
}

// Function for the other menus
void rightBorder()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
    consoleCoordinates(100, 0);
    cout << "(*)\n";
    consoleCoordinates(100, 1);
    cout << "(*)\n";
    consoleCoordinates(100, 2);
    cout << "(*)\n";
    consoleCoordinates(100, 3);
    cout << "(*)\n";
    consoleCoordinates(100, 4);
    cout << "(*)\n";
    consoleCoordinates(100, 5);
    cout << "(*)\n";
    consoleCoordinates(100, 6);
    cout << "(*)\n";
    consoleCoordinates(100, 7);
    cout << "(*)\n";
    consoleCoordinates(100, 8);
    cout << "(*)\n";
    consoleCoordinates(100, 9);
    cout << "(*)\n";
    consoleCoordinates(100, 10);
    cout << "(*)\n";
    consoleCoordinates(100, 11);
    cout << "(*)\n";
    consoleCoordinates(100, 12);
    cout << "(*)\n";
    consoleCoordinates(100, 13);
    cout << "(*)\n";
    consoleCoordinates(100, 14);
    cout << "(*)\n";
    consoleCoordinates(100, 15);
    cout << "(*)\n";
    consoleCoordinates(100, 16);
    cout << "(*)\n";
    consoleCoordinates(100, 17);
    cout << "(*)\n";
    consoleCoordinates(100, 18);
    cout << "(*)\n";
    consoleCoordinates(100, 19);
    cout << "(*)\n";
    consoleCoordinates(100, 20);
    cout << "(*)\n";
    consoleCoordinates(100, 21);
    cout << "(*)\n";
    consoleCoordinates(100, 22);
    cout << "(*)\n";
    consoleCoordinates(100, 23);
    cout << "(*)\n";
    consoleCoordinates(100, 24);
    cout << "(*)\n";
    consoleCoordinates(100, 25);
    cout << "(*)\n";
    consoleCoordinates(100, 26);
    cout << "(*)\n";
    consoleCoordinates(100, 27);
    cout << "(*)\n";
    consoleCoordinates(100, 28);
    cout << "(*)\n";
    consoleCoordinates(100, 29);
    cout << "(*)\n";
    consoleCoordinates(100, 30);
    cout << "(*)\n";
    consoleCoordinates(100, 31);
    cout << "(*)\n";
    consoleCoordinates(100, 32);
    cout << "(*)\n";
    consoleCoordinates(100, 33);
    cout << "(*)\n";
    consoleCoordinates(100, 34);
    cout << "(*)\n";
    consoleCoordinates(100, 35);
    cout << "(*)\n";
    consoleCoordinates(100, 36);
    cout << "(*)\n";
    consoleCoordinates(100, 37);
    cout << "(*)\n";
    consoleCoordinates(100, 38);
    cout << "(*)\n";
    consoleCoordinates(100, 39);
    cout << "(*)\n";
    consoleCoordinates(100, 40);
    cout << "(*)\n";
    consoleCoordinates(100, 41);
    cout << "(*)\n";
    consoleCoordinates(100, 42);
    cout << "(*)\n";

}

// Function for the other menus
void title()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
    consoleCoordinates(15, 1);
    cout << "    ____  ______       __  _______  _   _____    ____  ________  _______\n";
    consoleCoordinates(15, 2);
    cout << "   / __ )/ ____/      /  |/  / __ \\/ | / /   |  / __ \\/ ____/ / / / ___/\n";
    consoleCoordinates(15, 3);
    cout << "  / __  / / __       / /|_/ / / / /  |/ / /| | / /_/ / /   / /_/ /\\__ \\ \n";
    consoleCoordinates(15, 4);
    cout << " / /_/ / /_/ /      / /  / / /_/ / /|  / ___ |/ _, _/ /___/ __  /___/ / \n";
    consoleCoordinates(15, 5);
    cout << "/_____/\\____/      /_/  /_/\\____/_/ |_/_/  |_/_/ |_|\\____/_/ /_ ____/\n";
}

// Function for viewing options 
void askInput()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
    consoleCoordinates(25, 35);
    cout << "If you want to view settings press CTRL + H:";
    consoleCoordinates(25, 37);
    cout << "If you want to view information about monarch press CTRL + M:";
    consoleCoordinates(25, 39);
    cout << "If you want to start the quiz press CTRL + Q:";
}

// Function for viewing the options for the view information function
void viewInfoMenu()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    consoleCoordinates(35, 10);
    cout << "VIEW INFORMATION BY CHOOSING THE START REIGN YEAR";
    consoleCoordinates(35, 12);
    cout << "VIEW INFORMATION BY CHOOSING THE NAME";
}

// Function for viewing the options for the insert function
void insertMenu()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    consoleCoordinates(35, 10);
    cout << "ADD MONARCH AT THE BEGINNING";
    consoleCoordinates(35, 12);
    cout << "ADD MONARCH AT THE END";
    consoleCoordinates(35, 14);
    cout << "ADD MONARCH AFTER CHOSEN YEAR";
}

// Function for viewing the options for the search function
void searchMenu()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    consoleCoordinates(35, 10);
    cout << "SEARCH BY ENTERING YEAR";
    consoleCoordinates(35, 12);
    cout << "SEARCH BY ENTERING NAME";
}

// Function for viewing the options for the order function
void orderMenu()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    consoleCoordinates(35, 10);
    cout << "VIEW YEAR FIRST";
    consoleCoordinates(35, 12);
    cout << "VIEW NAME FIRST";
}

// Function for viewing the options for the sort function
void sortMenu()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    consoleCoordinates(35, 10);
    cout << "SORT IN DESCENDING ORDER";
    consoleCoordinates(35, 12);
    cout << "SORT IN ASCENDING ORDER";
}

// Function for moving the arrow in the menu
void arrow(int counter)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    consoleCoordinates(31, counter);
    cout << "-->";
}

// Function for going around the main menu
bool menuInput()
{
    HWND console = GetConsoleWindow();
    RECT r;
    GetWindowRect(console, &r); //stores the console's current dimensions

    MoveWindow(console, r.left, r.top, 2000, 1000, TRUE); // 2000 width, 1000 height
    int counter = 1;
    menu(counter);

    do
    {

        switch (_getch())
        {

        case KEY_UP:
        {
            if (counter == 1) counter = 4;
            counter--;
            system("CLS");
            menu(counter);
        } break;

        case KEY_DOWN:
        {
            if (counter == 3) {
                counter = 0;
            }
            counter++;
            system("CLS");
            menu(counter);
        } break;

        case ENTER:
        {
            switch (counter) {
            case 1:
            {
                system("CLS");
                choosingMenuInput();
                break;
            }

            case 2:
            {
                system("CLS");
                useInformation();
                break;
            }

            case 3:
            {
                exit();
            }

            }
        } break;
        }
    } while (true);
    return 1;
}

// Function for going around the choosing menu
bool choosingMenuInput()
{
	int counter = 1;
	choosingMenu(counter);

	do
	{
		switch (_getch())
		{
			
		case KEY_UP:
		{
			if (counter == 1) counter = 4;
			counter--;
			system("CLS");
			choosingMenu(counter);
		} break;
		
		case KEY_DOWN:
		{
			if (counter == 3) {
				counter = 0;
			}
			counter++;
			system("CLS");
			choosingMenu(counter);
		} break;
		
		case ENTER:
		{
			switch (counter) {
			case 1:
			{
				system("CLS");
                contentFirstBulgarianEmpire();
			}break;

			case 2:
			{
				system("CLS");
                contentSecondBulgarianEmpire();	
			}break;

			case 3:
			{
				system("CLS");
                contentAfterLiberation();
			}break;

			}
		} break;

		case ESCAPE:
		{
			system("CLS");
			menuInput();
		}
		}
	} while (true);
	return 1;
}

