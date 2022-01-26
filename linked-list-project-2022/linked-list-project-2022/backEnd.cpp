#include<iostream>
#include<string>
#include <windows.h>
#include <conio.h>

#include "frontEnd.h"
#include "backEnd.h"
using namespace std;


#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define ENTER 13
#define ESCAPE 27
#define SHIFT 170
#define CTRL_KEYPRESS(k) ((k)  & 0x1f) 




int counterPrint = 11;
void print(Node* head)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    while (head != NULL)
    {
        consoleCoordinates(40, counterPrint);
        cout << head->data << " - " << head->name << endl;
        head = head->next;
        counterPrint++;
    }
}
void beginInsert(Node** head, int data, string name)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->name = name;
    newNode->next = (*head);
    (*head) = newNode;

}
void endInsert(Node** head, int data, string name)
{
    Node* newNode = new Node();
    Node* last = *head;
    newNode->data = data;
    newNode->name = name;
    newNode->next = NULL;
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = newNode;
    return;
}
void choosingInsertBegin(Node* Head)
{
    title();
    leftBorder();
    rightBorder();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    consoleCoordinates(35, 10);
    cout << "CHOOSE YEAR:\n";
    consoleCoordinates(35, 11);
    int year;
    cin >> year;
    cin.ignore();
    consoleCoordinates(35, 12);
    cout << "CHOOSE NAME:\n";
    char name[100];
    consoleCoordinates(35, 13);
    fgets(name, 100, stdin);
    system("CLS");
    beginInsert(&Head, year, name);
    counterPrint = 11;
    print(Head);
    contentMenuInput(Head);
}
void choosingInsertEnd(Node* Head)
{
    title();
    leftBorder();
    rightBorder();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    consoleCoordinates(35, 10);
    cout << "CHOOSE YEAR:\n";
    consoleCoordinates(35, 11);
    int year;
    cin >> year;
    cin.ignore();
    consoleCoordinates(35, 12);
    cout << "CHOOSE NAME:\n";
    char name[100];
    consoleCoordinates(35, 13);
    fgets(name, 100, stdin);
    consoleCoordinates(35, 12);
    system("CLS");
    endInsert(&Head, year, name);
    counterPrint = 11;
    print(Head);
    contentMenuInput(Head);
}
void contentFirstBulgarianEmpire()
{
    Node* Head = new Node;
    Node* Second = new Node;
    Head->data = 681;
    Head->name = "Khan Asparukh";
    Head->next = Second;
    Second->data = 700;
    Second->name = "Khan Tervel";
    Second->next = NULL;

    print(Head);
    contentMenuInput(Head);
}
void contentSecondBulgarianEmpire()
{
    Node* Head = new Node;
    Node* Second = new Node;
    Head->data = 1185;
    Head->name = "(Teodor)Petar and (Ivan)Asen";
    Head->next = Second;
    Second->data = 1197;
    Second->name = "Tsar Kaloyan";
    Second->next = NULL;

    print(Head);
    contentMenuInput(Head);
}
void contentAfterLiberation()
{
    Node* Head = new Node;
    Node* Second = new Node;
    Head->data = 1879;
    Head->name = "Prince Alexander Battenberg";
    Head->next = Second;
    Second->data = 1887;
    Second->name = "Prince Ferdinand I";
    Second->next = NULL;

    print(Head);
    contentMenuInput(Head);
}
bool contentMenuInput(Node* Head)
{
    int counter = 11;
    choosing(counter);
    title();
    askInput();
    leftBorder();
    rightBorder();
    do
    {
        // Switch case for switching around the main menu
        switch (_getch())
        {
            // Arrow up
        case KEY_UP:
        {
            if (counter == 11) counter = counterPrint;
            counter--;
            system("CLS");
            choosing(counter);
            counterPrint = 11;
            print(Head);
            title();
            askInput();
            leftBorder();
            rightBorder();
        } break;
        // Arrow down
        case KEY_DOWN:
        {
            if (counter == counterPrint - 1) {
                counter = 10;
            }
            counter++;
            system("CLS");
            choosing(counter);
            counterPrint = 11;
            print(Head);
            title();
            askInput();
            leftBorder();
            rightBorder();
        } break;
        case CTRL_KEYPRESS('q'):
        {
            //cin.ignore();
            system("CLS");
            title();
            leftBorder();
            rightBorder();
            choice(Head);
        }
        }
    } while (true);
    return 1;
}

bool choice(Node* Head)
{
    int counter = 10;
    insertMenu();
    title();
    leftBorder();
    rightBorder();
    consoleCoordinates(32, 10);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    cout << "-->";
    do
    {
        switch (_getch())
        {
            // Arrow up
        case KEY_UP:
        {
            if (counter == 10)counter = 14;
            counter -= 2;
            system("CLS");
            consoleCoordinates(32, counter);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            cout << "-->";
            insertMenu();
            title();
            leftBorder();
            rightBorder();
        }break;
        case KEY_DOWN:
        {
            if (counter == 12)counter = 8;
            counter += 2;
            system("CLS");
            consoleCoordinates(32, counter);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            cout << "-->";
            insertMenu();
            title();
            leftBorder();
            rightBorder();
        }break;
        case ENTER:
        {
            if (counter == 10)
            {
                system("CLS");
                choosingInsertBegin(Head);
            }
            else if (counter == 12)
            {
                system("CLS");
                choosingInsertEnd(Head);
            }
        }
        }
    } while (true);
    return 1;
}
