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



// Global variable for element 'y' coordinates
int counterPrint = 11;

// Function for linked list's content
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

    printYearFirst(Head);
    contentMenuInputYearFirst(Head);
}

// Function for linked list's content
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

    printYearFirst(Head);
    contentMenuInputYearFirst(Head);
}

// Function for linked list's content
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

    printYearFirst(Head);
    contentMenuInputYearFirst(Head);
}

// Function for printing the linked list elements
void printYearFirst(Node* head)
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

// Function for printing the linked list elements 
void printNameFirst(Node* head)
{
    while (head != NULL)
    {
        consoleCoordinates(40, counterPrint);
        string name = head->name;
        for (size_t i = 0; i < name.length(); i++)
        {
            if (name[i] == '\n')break;
            cout << name[i];
        }
        cout << " - " << head->data << endl;
        head = head->next;
        counterPrint++;
    }
    return;
}

// Function for inserting an element in the linked list
void beginInsert(Node** head, int data, string name)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->name = name;
    newNode->next = (*head);
    (*head) = newNode;

}

// Function for inserting an element in the linked list
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

// Function for searching the year before inserting an element in the linked list
void insertNodeAfterYear(Node* head, int data)
{
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == data) {
            choosingInsertAfterNode(temp, head);
        }
        temp = temp->next;

    }

    return;
}

// Function for inserting an element in the linked list
void insertAfterNode(Node* temp, Node* head, int year, string name)
{
    Node* newNode = new Node;
    newNode->data = year;
    newNode->name = name;
    newNode->next = temp->next;
    temp->next = newNode;
    counterPrint = 11;
    printYearFirst(head);
    contentMenuInputYearFirst(head);
}
// Function for searching an element in the linked list
void findNodeByYear(Node* head, int data) {
    int index = 11;
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == data) {
            system("CLS");
            leftBorder();
            title();
            rightBorder();
            counterPrint = 11;
            printYearFirst(head);
            arrow(index);
        }

        temp = temp->next;
        index++;
    }
    switch (_getch())
    {
    case ESCAPE:
    {
        contentMenuInputYearFirst(head);
    }break;
    }
    return;
}

// Function for searching an element in the linked list
void findNodeByName(Node* head, string name)
{
    int index = 11;
    Node* temp = head;
    while (temp != NULL) {
        if (temp->name == name) {
            system("CLS");
            leftBorder();
            title();
            rightBorder();
            counterPrint = 11;
            printYearFirst(head);
            arrow(index);
        }
        temp = temp->next;
        index++;
    }
    switch (_getch())
    {
    case ESCAPE:
    {
        contentMenuInputYearFirst(head);
    }break;
    }
    return;
}

// Function for deleting an element in the linked list
void deleteNode(Node** head, int key)
{
    Node* temp = *head;
    Node* prev = NULL;

    if (temp != NULL && temp->data == key)
    {
        *head = temp->next;
        delete temp;
        return;
    }

    else
    {
        while (temp != NULL && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }

        if (temp == NULL)
            return;

        prev->next = temp->next;

        delete temp;
    }
}

// Function for editing an element in the linked list
void editNode(Node* head, int data)
{
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == data) {
            system("CLS");
            title();
            leftBorder();
            rightBorder();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            consoleCoordinates(35, 10);
            cout << "EDIT YEAR:";
            consoleCoordinates(35, 11);
            int year;
            cin >> year;
            cin.ignore();
            consoleCoordinates(35, 12);
            cout << "EDIT NAME:";
            consoleCoordinates(35, 13);
            string name;
            getline(cin, name);
            temp->data = year;
            temp->name = name;
        }
        temp = temp->next;

    }

    return;
}

// Function for selecting the necessary variables with which the following function will work
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
    printYearFirst(Head);
    contentMenuInputYearFirst(Head);
}

// Function for selecting the necessary variables with which the following function will work
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
    printYearFirst(Head);
    contentMenuInputYearFirst(Head);
}

// Function for selecting the necessary variables with which the following function will work
void choosingYearSearch(Node* Head)
{
    title();
    leftBorder();
    rightBorder();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    consoleCoordinates(35, 10);
    cout << "CHOOSE YEAR TO SEARCH:\n";
    consoleCoordinates(35, 11);
    int year;
    cin >> year;
    findNodeByYear(Head, year);
}

// Function for selecting the necessary variables with which the following function will work
void choosingNameSearch(Node* Head)
{
    title();
    leftBorder();
    rightBorder();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    consoleCoordinates(35, 10);
    cout << "CHOOSE NAME TO SEARCH:\n";
    consoleCoordinates(35, 11);
    string name;
    getline(cin, name);
    findNodeByName(Head, name);
}

// Function for selecting the necessary variables with which the following function will work
void choosingEditElement(Node* Head)
{
    system("CLS");
    title();
    leftBorder();
    rightBorder();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    consoleCoordinates(35, 10);
    cout << "CHOOSE YEAR TO EDIT THE MONARCH:";
    consoleCoordinates(35, 11);
    int year;
    cin >> year;
    editNode(Head, year);
}

// Function for selecting the necessary variables with which the following function will work
void choosingInsertAfterNode(Node* temp, Node* head)
{
    system("CLS");
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
    insertAfterNode(temp, head, year, name);
}

// Function for going around the menu when the user view the monarch's reign year first
bool contentMenuInputYearFirst(Node* Head)
{
    system("CLS");
    int counter = 11;
    arrow(counter);
    title();
    counterPrint = 11;
    printYearFirst(Head);
    askInput();
    leftBorder();
    rightBorder();
    do
    {
        switch (_getch())
        {

        case KEY_UP:
        {
            if (counter == 11) counter = counterPrint;
            counter--;
            system("CLS");
            arrow(counter);
            counterPrint = 11;
            printYearFirst(Head);
            title();
            askInput();
            leftBorder();
            rightBorder();
        } break;

        case KEY_DOWN:
        {
            if (counter == counterPrint - 1) {
                counter = 10;
            }
            counter++;
            system("CLS");
            arrow(counter);
            counterPrint = 11;
            printYearFirst(Head);
            title();
            askInput();
            leftBorder();
            rightBorder();
        } break;

        case CTRL_KEYPRESS('h'):
        {
            system("CLS");
            title();
            leftBorder();
            rightBorder();
            settingsInput(Head);
        }break;

        case CTRL_KEYPRESS('q'):
        {
            startQuiz();
        }break;

        case ESCAPE:
        {
            system("CLS");
            choosingMenuInput();
        }
        }
    } while (true);
    return 1;
}

// Function for going around the menu when the user view the monarch's name first
bool contentMenuInputNameFirst(Node* Head)
{
    system("CLS");
    int counter = 11;
    arrow(counter);
    counterPrint = 11;
    printNameFirst(Head);
    title();
    askInput();
    leftBorder();
    rightBorder();
    do
    {
        switch (_getch())
        {

        case KEY_UP:
        {
            if (counter == 11) counter = counterPrint;
            counter--;
            system("CLS");
            arrow(counter);
            counterPrint = 11;
            printNameFirst(Head);
            title();
            askInput();
            leftBorder();
            rightBorder();
        } break;

        case KEY_DOWN:
        {
            if (counter == counterPrint - 1) {
                counter = 10;
            }
            counter++;
            system("CLS");
            arrow(counter);
            counterPrint = 11;
            printNameFirst(Head);
            title();
            askInput();
            leftBorder();
            rightBorder();
        } break;

        case CTRL_KEYPRESS('h'):
        {
            system("CLS");
            title();
            leftBorder();
            rightBorder();
            settingsInput(Head);
        }

        }
    } while (true);
    return 1;
}

// Function for going around the menu
bool insertChoice(Node* Head)
{
    int counter = 10;
    insertMenu();
    title();
    leftBorder();
    rightBorder();
    consoleCoordinates(31, 10);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    cout << "-->";
    do
    {
        switch (_getch())
        {

        case KEY_UP:
        {
            if (counter == 10)counter = 16;
            counter -= 2;
            system("CLS");
            consoleCoordinates(31, counter);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            cout << "-->";
            insertMenu();
            title();
            leftBorder();
            rightBorder();
        }break;

        case KEY_DOWN:
        {
            if (counter == 14)counter = 8;
            counter += 2;
            system("CLS");
            consoleCoordinates(31, counter);
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

            else if (counter == 14)
            {
                system("CLS");
                leftBorder();
                title();
                rightBorder();
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                consoleCoordinates(35, 10);
                cout << "CHOOSE THE YEAR YOU INSERT MONARCH AFTER";
                consoleCoordinates(35, 11);
                int year;
                cin >> year;
                insertNodeAfterYear(Head, year);
            }
        }break;

        case ESCAPE:
        {
            system("CLS");
            contentMenuInputYearFirst(Head);
        }
        }
    } while (true);
    return 1;
}

// Function for going around the menu
bool searchChoice(Node* Head)
{
    int counter = 10;
    searchMenu();
    title();
    leftBorder();
    rightBorder();
    consoleCoordinates(31, 10);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    cout << "-->";
    do
    {
        switch (_getch())
        {

        case KEY_UP:
        {
            if (counter == 10)counter = 14;
            counter -= 2;
            system("CLS");
            consoleCoordinates(31, counter);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            cout << "-->";
            searchMenu();
            title();
            leftBorder();
            rightBorder();
        }break;

        case KEY_DOWN:
        {
            if (counter == 12)counter = 8;
            counter += 2;
            system("CLS");
            consoleCoordinates(31, counter);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            cout << "-->";
            searchMenu();
            title();
            leftBorder();
            rightBorder();
        }break;

        case ENTER:
        {
            if (counter == 10)
            {
                system("CLS");
                title();
                leftBorder();
                rightBorder();
                choosingYearSearch(Head);
            }
            else if (counter == 12)
            {
                system("CLS");
                title();
                leftBorder();
                rightBorder();
                choosingNameSearch(Head);
            }
        }break;

        case ESCAPE:
        {
            system("CLS");
            contentMenuInputYearFirst(Head);
        }
        }
    } while (true);
    return 1;
}

// Function for going around the menu
bool orderChoice(Node* Head)
{
    int counter = 10;
    orderMenu();
    title();
    leftBorder();
    rightBorder();
    consoleCoordinates(31, 10);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    cout << "-->";
    do
    {
        switch (_getch())
        {

        case KEY_UP:
        {
            if (counter == 10)counter = 14;
            counter -= 2;
            system("CLS");
            consoleCoordinates(31, counter);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            cout << "-->";
            orderMenu();
            title();
            leftBorder();
            rightBorder();
        }break;

        case KEY_DOWN:
        {
            if (counter == 14)counter = 8;
            counter += 2;
            system("CLS");
            consoleCoordinates(31, counter);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            cout << "-->";
            orderMenu();
            title();
            leftBorder();
            rightBorder();
        }break;

        case ENTER:
        {
            if (counter == 10)
            {
                system("CLS");
                contentMenuInputYearFirst(Head);
            }
            else if (counter == 12)
            {
                system("CLS");
                contentMenuInputNameFirst(Head);
            }
        }break;

        case ESCAPE:
        {
            system("CLS");
            settingsInput(Head);
        }
        }
    } while (true);
    return 1;
}


// Function for the quiz
void startQuiz() {
    system("CLS");

    string questions[6] = {
    "When does Khan Asparukh rule?",
    "When does Khan Tervel rule?",
    "When do Teodor Petar and Ivan Asen rule?",
     "When does Tsar Kaloyan rule?",
     "When does Prince Alexander Battenberg rule?",
     "When does Prince Ferdinand I rule?",
    };

    string options[6][3] = {
    {"684","681","661"},
    {"681","700","697"},
    {"1015","1185","1150"},
    {"1097","1193","1197"},
    {"1879","1773","1700"},
     {"1887","1883","1805"},
    };

    string correctOp[6] = {
        "681","700","1185", "1197", "1879", "1887"
    };

    int userOptions[6] = { 0, 0, 0, 0, 0, 0 };
    int totalQs = 6;

    //----- Quiz -----
    consoleCoordinates(33, 11);
    for (int i = 0; i < totalQs; i++) {
        title();
        leftBorder();
        rightBorder();
        consoleCoordinates(33, 12);
        cout << questions[i] << endl;
        consoleCoordinates(33, 13);
        cout << "1." << options[i][0] << endl;
        consoleCoordinates(33, 14);
        cout << "2." << options[i][1] << endl;
        consoleCoordinates(33, 15);
        cout << "3." << options[i][2] << endl;
        consoleCoordinates(33, 16);
        cout << "Select Option (1-3) or 0 to skip  ";
        cin >> userOptions[i];
        system("CLS");
    }


    title();
    leftBorder();
    rightBorder();

    //----- Printing Result -----
    cout << endl << endl;
    consoleCoordinates(33, 11);
    cout << "======= ======= ======= ======= " << endl;
    consoleCoordinates(33, 12);
    cout << "=======      Result     ======= " << endl;
    consoleCoordinates(33, 13);
    cout << "======= ======= ======= ======= " << endl;

    int correct = 0;
    int incorrect = 0;
    int skipped = 0;
    for (int i = 0; i < totalQs; i++) {
        if (userOptions[i] != 0) {
            if (correctOp[i] == options[i][userOptions[i] - 1]) {
                correct++;
            }
            else {
                incorrect++;
            }
        }
        else {
            skipped++;
        }
    }

    consoleCoordinates(33, 14);
    cout << "------------------------------" << endl;
    consoleCoordinates(44, 15);
    cout << "Correct : " << correct << endl;
    consoleCoordinates(44, 16);
    cout <<"Incorrect : " << incorrect << endl;
    consoleCoordinates(44, 17);
    cout <<"Skipped : " << skipped << endl;
    consoleCoordinates(33, 18);
    cout << "------------------------------";

}

