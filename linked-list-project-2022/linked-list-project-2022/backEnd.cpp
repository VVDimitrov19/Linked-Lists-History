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
    Node* Third = new Node;
    Node* Fourth = new Node;
    Node* Fifth = new Node;
    Node* Sixth = new Node;
    Node* Seventh = new Node;
    Node* Eighth = new Node;

    Head->startReignYear = 681;
    Head->endReignYear = 700;
    Head->name = "Khan Asparukh";
    Head->next = Second;

    Second->startReignYear = 700;
    Second->endReignYear = 721;
    Second->name = "Khan Tervel";
    Second->next = Third;

    Third->startReignYear = 803;
    Third->endReignYear = 814;
    Third->name = "Khan Krum";
    Third->next = Fourth;

    Fourth->startReignYear = 814;
    Fourth->endReignYear = 831;
    Fourth->name = "Khan Omurtag";
    Fourth->next = Fifth;

    Fifth->startReignYear = 836;
    Fifth->endReignYear = 852;
    Fifth->name = "Presian I";
    Fifth->next = Sixth;

    Sixth->startReignYear = 889;
    Sixth->endReignYear = 893;
    Sixth->name = "Vladimir-Rasate";
    Sixth->next = Seventh;

    Seventh->startReignYear = 893;
    Seventh->endReignYear = 927;
    Seventh->name = "Simeon I";
    Seventh->next = Eighth;

    Eighth->startReignYear = 927;
    Eighth->endReignYear = 969;
    Eighth->name = "Petar I";
    Eighth->next = NULL;

    printYearFirst(Head);
    contentMenuInputYearFirst(Head);
}

// Function for linked list's content
void contentSecondBulgarianEmpire()
{
    Node* Head = new Node;
    Node* Second = new Node;
    Node* Third = new Node;
    Node* Fourth = new Node;
    Node* Fifth = new Node;
    Node* Sixth = new Node;
    Node* Seventh = new Node;

    Head->startReignYear = 1185;
    Head->endReignYear = 1197;
    Head->name = "(Teodor)Petar and (Ivan)Asen";
    Head->next = Second;

    Second->startReignYear = 1197;
    Second->endReignYear = 1207;
    Second->name = "Tsar Kaloyan";
    Second->next = Third;

    Third->startReignYear = 1207;
    Third->endReignYear = 1218;
    Third->name = "Boril";
    Third->next = Fourth;

    Fourth->startReignYear = 1218;
    Fourth->endReignYear = 1241;
    Fourth->name = "Ivan Asen II";
    Fourth->next = Fifth;

    Fifth->startReignYear = 1331;
    Fifth->endReignYear = 1371;
    Fifth->name = "Ivan Aleksandur";
    Fifth->next = Sixth;

    Sixth->startReignYear = 1323;
    Sixth->endReignYear = 1330;
    Sixth->name = "Mihail III Shishman";
    Sixth->next = Seventh;

    Seventh->startReignYear = 1356;
    Seventh->endReignYear = 1396;
    Seventh->name = "Ivan Sratsimir";
    Seventh->next = NULL;
    
    printYearFirst(Head);
    contentMenuInputYearFirst(Head);
}

// Function for linked list's content
void contentAfterLiberation()
{
    Node* Head = new Node;
    Node* Second = new Node;
    Node* Third = new Node;

    Head->startReignYear = 1879;
    Head->endReignYear = 1886;
    Head->name = "Prince Alexander Battenberg";
    Head->next = Second;

    Second->startReignYear = 1887;
    Second->endReignYear = 1908;
    Second->name = "Prince Ferdinand I";
    Second->next = Third;

    Third->startReignYear = 1918;
    Third->endReignYear = 1943;
    Third->name = "Boris III";
    Third->next = NULL;

    printYearFirst(Head);
    contentMenuInputYearFirst(Head);
}

// Function for printing the linked list elements
void printYearFirst(Node* head)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    while (head != NULL)
    {
        consoleCoordinates(35, counterPrint);
        cout << head->startReignYear << "/" << head->endReignYear << " - " << head->name << endl;
        head = head->next;
        counterPrint+=2;
    }
}

// Function for printing the linked list elements 
void printNameFirst(Node* head)
{
    while (head != NULL)
    {
        consoleCoordinates(35, counterPrint);
        string name = head->name;
        for (size_t i = 0; i < name.length(); i++)
        {
            if (name[i] == '\n')break;
            cout << name[i];
        }
        cout << " - " << head->startReignYear << "/" << head->endReignYear << endl;
        head = head->next;
        counterPrint+=2;
    }
    return;
}

// Function for inserting an element in the linked list
void beginInsert(Node** head, int startReignYear, int endReignYear, string name)
{
    Node* newNode = new Node();
    newNode->startReignYear = startReignYear;
    newNode->endReignYear = endReignYear;
    newNode->name = name;
    newNode->next = (*head);
    (*head) = newNode;

}

// Function for inserting an element in the linked list
void endInsert(Node** head, int startReignYear, int endReignYear, string name)
{
    Node* newNode = new Node();
    Node* last = *head;
    newNode->startReignYear = startReignYear;
    newNode->endReignYear = endReignYear;
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
void insertNodeAfterYear(Node* head, int startReignYear)
{
    Node* temp = head;
    while (temp != NULL) {
        if (temp->startReignYear == startReignYear) {
            choosingInsertAfterNode(temp, head);
        }
        temp = temp->next;

    }

    return;
}

// Function for inserting an element in the linked list
void insertAfterNode(Node* temp, Node* head, int startReignYear, int endReignYear, string name)
{
    Node* newNode = new Node;
    newNode->startReignYear = startReignYear;
    newNode->endReignYear = endReignYear;
    newNode->name = name;
    newNode->next = temp->next;
    temp->next = newNode;
    counterPrint = 11;
    printYearFirst(head);
    contentMenuInputYearFirst(head);
}

// Function for searching an element in the linked list
void findNodeByYear(Node* head, int startReignYear) {
    int index = 11;
    Node* temp = head;
    while (temp != NULL) {
        if (temp->startReignYear == startReignYear) {
            system("CLS");
            leftBorder();
            title();
            rightBorder();
            counterPrint = 11;
            printYearFirst(head);
            arrow(index);
        }

        temp = temp->next;
        index+=2;
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
        index+=2;
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
void deleteNode(Node** head, int startReignYear)
{
    Node* temp = *head;
    Node* prev = NULL;

    if (temp != NULL && temp->startReignYear == startReignYear)
    {
        *head = temp->next;
        delete temp;
        return;
    }

    else
    {
        while (temp != NULL && temp->startReignYear != startReignYear)
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
void editNode(Node* head, int startReignYear)
{
    Node* temp = head;
    while (temp != NULL) {
        if (temp->startReignYear == startReignYear) {
            system("CLS");
            title();
            leftBorder();
            rightBorder();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            consoleCoordinates(35, 10);
            cout << "EDIT START REIGN YEAR:";
            consoleCoordinates(35, 11);
            int startReignYear;
            cin >> startReignYear;
            consoleCoordinates(35, 12);
            cout << "EDIT END REIGN YEAR:";
            consoleCoordinates(35, 13);
            int endReignYear;
            cin >> endReignYear;
            cin.ignore();
            consoleCoordinates(35, 14);
            cout << "EDIT NAME:";
            consoleCoordinates(35, 15);
            string name;
            getline(cin, name);
            temp->startReignYear = startReignYear;
            temp->endReignYear = endReignYear;
            temp->name = name;
        }
        temp = temp->next;

    }

    return;
}

// Function for sorting the linked list in desdending way
void sortDescending(Node* head)
{
    int flag;
    Node* temp;
    Node* newNode = NULL;

    if (head == NULL) return;

    do
    {
        flag = 0;
        temp = head;
        while (temp->next != newNode)
        {
            if (temp->startReignYear < temp->next->startReignYear)
            {
                int sort = temp->startReignYear;
                temp->startReignYear = temp->next->startReignYear;
                temp->next->startReignYear = sort;

                int sort2 = temp->endReignYear;
                temp->endReignYear = temp->next->endReignYear;
                temp->next->endReignYear = sort2;

                string nameSort = temp->name;
                temp->name = temp->next->name;
                temp->next->name = nameSort;
                flag = 1;
            }
            temp = temp->next;
        }
        newNode = temp;
    } while (flag);
}

// Function for sorting the linked list in asdending way
void sortAscending(Node* head)
{
    int flag;
    Node* temp;
    Node* newNode = NULL;

    if (head == NULL) return;

    do
    {
        flag = 0;
        temp = head;
        while (temp->next != newNode)
        {
            if (temp->startReignYear > temp->next->startReignYear)
            {
                int sort = temp->startReignYear;
                temp->startReignYear = temp->next->startReignYear;
                temp->next->startReignYear = sort;

                int sort2 = temp->endReignYear;
                temp->endReignYear = temp->next->endReignYear;
                temp->next->endReignYear = sort2;

                string nameSort = temp->name;
                temp->name = temp->next->name;
                temp->next->name = nameSort;
                flag = 1;
            }
            temp = temp->next;
        }
        newNode = temp;
    } while (flag);
}

// Function for selecting the necessary variables with which the following function will work
void choosingInsertBegin(Node* Head)
{
    title();
    leftBorder();
    rightBorder();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    consoleCoordinates(35, 10);
    cout << "CHOOSE START REIGN YEAR:\n";
    consoleCoordinates(35, 11);
    int startReignYear;
    cin >> startReignYear;
    consoleCoordinates(35, 12);
    cout << "CHOOSE END REIGN YEAR:\n";
    consoleCoordinates(35, 13);
    int endReignYear;
    cin >> endReignYear;
    cin.ignore();
    consoleCoordinates(35, 14);
    cout << "CHOOSE NAME:\n";
    string name;
    consoleCoordinates(35, 15);
    getline(cin, name);
    system("CLS");
    beginInsert(&Head, startReignYear, endReignYear, name);
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
    cout << "CHOOSE START REIGN YEAR:\n";
    consoleCoordinates(35, 11);
    int startReignYear;
    cin >> startReignYear;
    consoleCoordinates(35, 12);
    cout << "CHOOSE END REIGN YEAR:\n";
    consoleCoordinates(35, 13);
    int endReignYear;
    cin >> endReignYear;
    cin.ignore();
    consoleCoordinates(35, 14);
    cout << "CHOOSE NAME:\n";
    string name;
    consoleCoordinates(35, 15);
    getline(cin, name);
    system("CLS");
    endInsert(&Head, startReignYear, endReignYear, name);
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
    cout << "CHOOSE THE START REIGN YEAR TO SEARCH:\n";
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
    cout << "CHOOSE THE START REIGN YEAR TO EDIT THE MONARCH:";
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
    cout << "CHOOSE START REIGN YEAR:\n";
    consoleCoordinates(35, 11);
    int startReignYear;
    cin >> startReignYear;
    consoleCoordinates(35, 12);
    cout << "CHOOSE END REIGN YEAR:\n";
    consoleCoordinates(35, 13);
    int endReignYear;
    cin >> endReignYear;
    cin.ignore();
    consoleCoordinates(35, 14);
    cout << "CHOOSE NAME:\n";
    string name;
    consoleCoordinates(35, 15);
    getline(cin, name);
    insertAfterNode(temp, head, startReignYear, endReignYear, name);
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
            counter-=2;
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
            if (counter == counterPrint - 2) {
                counter = 9;
            }
            counter += 2;
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
            counter-=2;
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
            if (counter == counterPrint - 2) {
                counter = 9;
            }
            counter+=2;
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


// Function for viewing and choosing options 
void settingsInput(Node* Head)
{
    system("CLS");
    leftBorder();
    title();
    rightBorder();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    consoleCoordinates(25, 20);
    cout << "If you want to input monarch press CTRL + I";
    consoleCoordinates(25, 22);
    cout << "If you want to search monarch press CTRL + S";
    consoleCoordinates(25, 24);
    cout << "If you want to delete monarch press CTRL + D";
    consoleCoordinates(25, 26);
    cout << "If you want to edit monarch press CTRL + E";
    consoleCoordinates(25, 28);
    cout << "If you want to order how to view the monarchs press CTRL + O";
    consoleCoordinates(25, 30);
    cout << "If you want to sort the monarchs press CTRL + A";
    switch (_getch())
    {
    case CTRL_KEYPRESS('i'):
    {
        system("CLS");
        title();
        leftBorder();
        rightBorder();
        insertChoice(Head);
    }break;

    case CTRL_KEYPRESS('s'):
    {
        system("CLS");
        title();
        leftBorder();
        rightBorder();
        searchChoice(Head);
    }break;

    case CTRL_KEYPRESS('d'):
    {
        system("CLS");
        title();
        leftBorder();
        rightBorder();
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        consoleCoordinates(35, 10);
        cout << "CHOOSE THE START REIGN YEAR TO DELETE THE MONARCH:";
        consoleCoordinates(35, 11);
        int startReignYear;
        cin >> startReignYear;
        deleteNode(&Head, startReignYear);
        system("CLS");
        title();
        leftBorder();
        rightBorder();
        contentMenuInputYearFirst(Head);
    }break;

    case CTRL_KEYPRESS('e'):
    {
        choosingEditElement(Head);
        system("CLS");
        title();
        leftBorder();
        rightBorder();
        contentMenuInputYearFirst(Head);
    }break;

    case CTRL_KEYPRESS('o'):
    {
        system("CLS");
        title();
        leftBorder();
        rightBorder();
        orderChoice(Head);
    }break;

    case CTRL_KEYPRESS('a'):
    {
        system("CLS");
        title();
        leftBorder();
        rightBorder();
        sortChoice(Head);
    }break;

    case ESCAPE:
    {
        system("CLS");
        contentMenuInputYearFirst(Head);
    }break;
    }
}

// Function for going around the insert menu
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
        }break;
        }
    } while (true);
    return 1;
}

// Function for going around the search menu
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
        }break;
        }
    } while (true);
    return 1;
}

// Function for going around the order menu
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
        }break;
        }
    } while (true);
    return 1;
}

// Function for going around the sort menu
bool sortChoice(Node* Head)
{
    int counter = 10;
    sortMenu();
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
            // Arrow up
        case KEY_UP:
        {
            if (counter == 10)counter = 14;
            counter -= 2;
            system("CLS");
            consoleCoordinates(31, counter);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            cout << "-->";
            sortMenu();
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
            sortMenu();
            title();
            leftBorder();
            rightBorder();
        }break;
        case ENTER:
        {
            if (counter == 10)
            {
                system("CLS");
                sortDescending(Head);
                leftBorder();
                title();
                rightBorder();
                printYearFirst(Head);
            }
            else if (counter == 12)
            {
                system("CLS");
                sortAscending(Head);
                leftBorder();
                title();
                rightBorder();
                printYearFirst(Head);
            }
        }break;
        case ESCAPE:
        {
            system("CLS");
            settingsInput(Head);
        }break;
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

