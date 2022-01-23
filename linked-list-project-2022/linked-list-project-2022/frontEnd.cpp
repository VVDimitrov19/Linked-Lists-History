#include <iostream>
#include <conio.h>
#include <windows.h>

#include "frontEnd.h"
using namespace std;


#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define ENTER 13
#define ESCAPE 27

#define LINES 75

void consoleCoordinates(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
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
;
        cin.ignore(); 
        
}
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
        // Switch case for switching around the main menu
        switch (_getch())
        {
            // Arrow up
        case KEY_UP:
        {
            if (counter == 1) counter = 4;
            counter--;
            system("CLS");
            menu(counter);
        } break;
        // Arrow down
        case KEY_DOWN:
        {
            if (counter == 3) {
                counter = 0;
            }
            counter++;
            system("CLS");
            menu(counter);
        } break;
        // Enter
        case ENTER:
        {
            switch (counter) {
            case 1:
            {
                system("CLS");
                cout << "LESSON";
                break;
            }

            case 2:
            {
                system("CLS");
                cout << "HOW TO USE";
                menuInput();
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
