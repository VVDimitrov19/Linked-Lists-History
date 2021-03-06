#include<iostream>
#include<fstream>
#include<string>
#include <vector>
#include <windows.h>
#include <conio.h>

#include "frontEnd.h"
#include "backEnd.h"
using namespace std;


#define KEY_UP 72
#define KEY_DOWN 80
#define ENTER 13
#define ESCAPE 27
#define CTRL_KEYPRESS(k) ((k)  & 0x1f) 


// Global variable for nodes 'y' coordinates
int counterPrint = 11;

// Function for log into the system
void login()
{
    int counter = 0;
    string user, password, id, pass;
    system("CLS");
    title();
    leftBorder();
    rightBorder();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    consoleCoordinates(35, 10);
    cout << "ENTER YOUR USERNAME:";
    consoleCoordinates(35, 11);
    cin >> user;

    consoleCoordinates(35, 12);
    cout << "ENTER YOUR PASSWORD:";
    consoleCoordinates(35, 13);
    cin >> password;

    ifstream input("records.txt");

    while (input >> id >> pass)
    {
        if (id == user && pass == password)
        {
            counter = 1;
            system("CLS");
        }
    }
    input.close();

    if (counter == 1)
    {
        system("CLS");
        choosingMenuInput(1);
    }
    else
    {
        system("CLS");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        cout << "Login unsuccessful!";
        Sleep(500);
        system("CLS");
        registrationFormInput();
    }

    switch (_getch())
    {
    case ESCAPE:
    {
        registrationFormInput();
    }
    }
}

// Function for registration into the system
void registration()
{
    string user, password, id, pass;
    system("CLS");
    title();
    leftBorder();
    rightBorder();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    consoleCoordinates(35, 10);
    cout << "ENTER YOUR USERNAME:";
    consoleCoordinates(35, 11);
    cin >> user;

    consoleCoordinates(35, 12);
    cout << "ENTER YOUR PASSWORD:";
    consoleCoordinates(35, 13);
    cin >> password;

    ofstream registration("records.txt", ios::app);
    registration << user << ' ' << password << endl;
    system("CLS");
    cout << "Registration successful!";
    Sleep(500);
    system("CLS");
    registrationFormInput();

    switch (_getch())
    {
    case ESCAPE:
    {
        registrationFormInput();
    }
    }
}

// Function in the registration form when the user has forgotten his passoword
void forgottenPassword()
{
    system("CLS");
    title();
    leftBorder();
    rightBorder();
    int counter = 0;
    string user, id, password;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    consoleCoordinates(35, 10);
    cout << "ENTER YOUR USERNAME:";
    consoleCoordinates(35, 11);
    cin >> user;

    ifstream forgotten("records.txt");
    while (forgotten >> id >> password)
    {
        if (id == user)
        {
            counter = 1;
        }
    }
    forgotten.close();
    if (counter == 1)
    {
        system("CLS");
        title();
        leftBorder();
        rightBorder();
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        consoleCoordinates(35, 10);
        cout << "Your account was found!!!";
        consoleCoordinates(35, 11);
        cout << "Your password is : " << password;
    }
    else
    {
        system("CLS");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        cout << "Your account was not found!";
        Sleep(500);
        system("CLS");
        registrationFormInput();
    }

    switch (_getch())
    {
    case ESCAPE:
    {
        system("CLS");
        registrationFormInput();
    }
    }
}

// Function for linked list's content
void contentFirstBulgarianEmpire(int id)
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
    Head->information = "Khan Asparukh had based Dunavska Bulgaria in 681.";
    Head->next = Second;

    Second->startReignYear = 700;
    Second->endReignYear = 721;
    Second->name = "Khan Tervel";
    Second->information = "Khan Tervel is Asparukh's son.";
    Second->next = Third;

    Third->startReignYear = 803;
    Third->endReignYear = 814;
    Third->name = "Khan Krum";
    Third->information = "During his reign the Bulgarian territory doubled in size.";
    Third->next = Fourth;

    Fourth->startReignYear = 814;
    Fourth->endReignYear = 831;
    Fourth->name = "Khan Omurtag";
    Fourth->information = "Omurtag was a Great Khan of Bulgaria from 814 to 831. He is known as 'the Builder'.";
    Fourth->next = Fifth;

    Fifth->startReignYear = 836;
    Fifth->endReignYear = 852;
    Fifth->name = "Presian I";
    Fifth->information = "Presian was the Khan of Bulgaria from 836. He ruled during an extensive expansion in Macedonia.";
    Fifth->next = Sixth;

    Sixth->startReignYear = 889;
    Sixth->endReignYear = 893;
    Sixth->name = "Vladimir-Rasate";
    Sixth->information = "In 853 or 854, the Bulgar Army led by Vladimir, invaded Serbia.";
    Sixth->next = Seventh;

    Seventh->startReignYear = 893;
    Seventh->endReignYear = 927;
    Seventh->name = "Simeon I";
    Seventh->information = "Simeon's successful campaigns led Bulgaria to its greatest territorial expansion";
    Seventh->next = Eighth;

    Eighth->startReignYear = 927;
    Eighth->endReignYear = 969;
    Eighth->name = "Petar I";
    Eighth->information = "Peter I was the son of Simeon I";
    Eighth->next = NULL;

    if (id == 1)contentMenuInputYearFirst(Head);
    if (id == 2)contentMenuInputYearFirstGuest(Head);
}

// Function for linked list's content
void contentSecondBulgarianEmpire(int id)
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
    Head->information = "Peter was crowned emperor 1185. Asen became his brother's co-ruler in 1187.";
    Head->next = Second;

    Second->startReignYear = 1197;
    Second->endReignYear = 1207;
    Second->name = "Tsar Kaloyan";
    Second->information = "He was a younger brother of Theodor and Asen who led the anti-Byzantine uprising";
    Second->next = Third;

    Third->startReignYear = 1207;
    Third->endReignYear = 1218;
    Third->name = "Boril";
    Third->information = "Launched unsuccessful military campaigns the first years of his reign.";
    Third->next = Fourth;

    Fourth->startReignYear = 1218;
    Fourth->endReignYear = 1241;
    Fourth->name = "Ivan Asen II";
    Fourth->information = "Ivan Asen I was one of the two leaders of the great uprising of the Bulgarians and Vlachs\n     against the Byzantine Empire in 1185.";
    Fourth->next = Fifth;

    Fifth->startReignYear = 1331;
    Fifth->endReignYear = 1371;
    Fifth->name = "Ivan Aleksandur";
    Fifth->information = "The long reign of Alexander is considered a transitional period in Bulgarian medieval history.";
    Fifth->next = Sixth;

    Sixth->startReignYear = 1323;
    Sixth->endReignYear = 1330;
    Sixth->name = "Mihail III Shishman";
    Sixth->information = "He was the founder of the last ruling dynasty of the Second Bulgarian Empire";
    Sixth->next = Seventh;

    Seventh->startReignYear = 1356;
    Seventh->endReignYear = 1396;
    Seventh->name = "Ivan Sratsimir";
    Seventh->information = "Ivan Sratsimir was disinherited in favour of his half-brother Ivan Shishman and proclaimed\n     himself emperor in Vidin.";
    Seventh->next = NULL;

    printYearFirst(Head);
    if (id==1)contentMenuInputYearFirst(Head);
    if (id == 2)contentMenuInputYearFirstGuest(Head);
}

// Function for linked list's content
void contentAfterLiberation(int id)
{
    Node* Head = new Node;
    Node* Second = new Node;
    Node* Third = new Node;

    Head->startReignYear = 1879;
    Head->endReignYear = 1886;
    Head->name = "Prince Alexander Battenberg";
    Head->information = "The first prince of the Principality of Bulgaria from 1879";
    Head->next = Second;

    Second->startReignYear = 1887;
    Second->endReignYear = 1908;
    Second->name = "Prince Ferdinand I";
    Second->information = "The second monarch of the Third Bulgarian State, firstly as ruling prince (knyaz) from 1887\n     to 1908, and later as king (tsar) from 1908";
    Second->next = Third;

    Third->startReignYear = 1918;
    Third->endReignYear = 1943;
    Third->name = "Boris III";
    Third->information = "The eldest son of Ferdinand I, Boris assumed the throne upon the abdication of his father in\n     the wake of Bulgaria's defeat in World War I.";
    Third->next = NULL;

    if (id == 1)contentMenuInputYearFirst(Head);
    if (id == 2)contentMenuInputYearFirstGuest(Head);
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
        counterPrint += 2;
    }
}

// Function for printing the linked list elements 
void printNameFirst(Node* head)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
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
        counterPrint += 2;
    }
    return;
}

// Function for viewing an information about the monarch with given year
void viewInformationByYear(Node* head)
{
    system("CLS");
    title();
    leftBorder();
    rightBorder();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    consoleCoordinates(35, 10);
    cout << "CHOOSE THE START REIGN YEAR TO VIEW INFORMATION:";
    consoleCoordinates(35, 11);
    int startReignYear;
    cin >> startReignYear;
    Node* temp = head;
    while (temp != NULL) {
        if (temp->startReignYear == startReignYear) {
            system("CLS");
            title();
            leftBorder();
            rightBorder();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            consoleCoordinates(42, 10);
            string name = temp->name;
            for (size_t i = 0; i < name.length(); i++)
            {
                char letter = toupper(name[i]);
                cout << letter;
            }
            consoleCoordinates(5, 13);
            cout << temp->information; break;
        }
        temp = temp->next;
    }
}

// Function for viewing an information about the monarch with given name
void viewInformationByName(Node* head)
{
    system("CLS");
    title();
    leftBorder();
    rightBorder();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    consoleCoordinates(35, 10);
    cout << "CHOOSE THE NAME TO VIEW INFORMATION:";
    consoleCoordinates(35, 11);
    string name;
    getline(cin, name);
    Node* temp = head;
    while (temp != NULL) {
        if (temp->name == name) {
            system("CLS");
            title();
            leftBorder();
            rightBorder();
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            consoleCoordinates(42, 10);
            string name = temp->name;
            for (size_t i = 0; i < name.length(); i++)
            {
                char letter = toupper(name[i]);
                cout << letter;
            }
            consoleCoordinates(25, 13);
            cout << temp->information; break;
        }
        temp = temp->next;
    }
}

// Function for inserting an element in the linked list
void beginInsert(Node** head, int startReignYear, int endReignYear, string name, string information)
{
    Node* newNode = new Node();
    newNode->startReignYear = startReignYear;
    newNode->endReignYear = endReignYear;
    newNode->name = name;
    newNode->information = information;
    newNode->next = (*head);
    (*head) = newNode;

}

// Function for inserting an element in the linked list
void endInsert(Node** head, int startReignYear, int endReignYear, string name, string information)
{
    Node* newNode = new Node();
    Node* last = *head;
    newNode->startReignYear = startReignYear;
    newNode->endReignYear = endReignYear;
    newNode->name = name;
    newNode->information = information;

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
void insertAfterNode(Node* temp, Node* head, int startReignYear, int endReignYear, string name, string information)
{
    Node* newNode = new Node;
    newNode->startReignYear = startReignYear;
    newNode->endReignYear = endReignYear;
    newNode->name = name;
    newNode->information = information;
    newNode->next = temp->next;
    temp->next = newNode;
    counterPrint = 11;
    printYearFirst(head);
    contentMenuInputYearFirst(head);
}

// Function for searching an element in the linked list
void findNodeByYear(Node* head, int startReignYear, int id) {
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
        index += 2;
    }
    switch (_getch())
    {
    case ESCAPE:
    {
        if (id == 1)contentMenuInputYearFirst(head);
        else contentMenuInputYearFirstGuest(head);
    }break;
    }
    return;
}

// Function for searching an element in the linked list
void findNodeByName(Node* head, string name, int id)
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
        index += 2;
    }
    switch (_getch())
    {
    case ESCAPE:
    {
        if (id == 1)contentMenuInputYearFirst(head);
        else contentMenuInputYearFirstGuest(head);
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
            consoleCoordinates(35, 16);
            cout << "EDIT INFORMATION:";
            consoleCoordinates(35, 17);
            string information;
            getline(cin, information);
            temp->startReignYear = startReignYear;
            temp->endReignYear = endReignYear;
            temp->name = name;
            temp->information = information;
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

// Function for viewing which monarch had ruled in given year 
void viewMonarch(Node* head, int id)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    consoleCoordinates(35, 10);
    cout << "CHOOSE YEAR:";
    consoleCoordinates(35, 11);
    int year;
    cin >> year;

    Node* temp = head;
    int index = 11;
    while (temp != NULL) {
        if (temp->startReignYear <= year && year <= temp->endReignYear) {
            system("CLS");
            leftBorder();
            title();
            rightBorder();
            counterPrint = 11;
            printYearFirst(head);
            arrow(index);
        }
        temp = temp->next;
        index += 2;
    }
    Sleep(5000);
    system("CLS");
    if (id == 1)settingsInput(head);
    else contentMenuInputYearFirstGuest(head);
}

// Function for converting from decimal number to gray number
int grayToBin(int num)
{
    int bin = num;

    while (bin) {
        bin >>= 1;
        num ^= bin;
    }
    return num;
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
    consoleCoordinates(35, 16);
    cout << "CHOOSE INFORMATION:\n";
    string information;
    consoleCoordinates(35, 17);
    getline(cin, information);
    system("CLS");
    beginInsert(&Head, startReignYear, endReignYear, name, information);
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
    consoleCoordinates(35, 16);
    cout << "CHOOSE INFORMATION:\n";
    string information;
    consoleCoordinates(35, 17);
    getline(cin, information);
    system("CLS");
    endInsert(&Head, startReignYear, endReignYear, name, information);
    counterPrint = 11;
    printYearFirst(Head);
    contentMenuInputYearFirst(Head);
}

// Function for selecting the necessary variables with which the following function will work
void choosingYearSearch(Node* Head, int id)
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
    findNodeByYear(Head, year, id);
}

// Function for selecting the necessary variables with which the following function will work
void choosingNameSearch(Node* Head, int id)
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
    findNodeByName(Head, name, id);
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
    consoleCoordinates(35, 16);
    cout << "CHOOSE INFORMATION:\n";
    string information;
    consoleCoordinates(35, 17);
    getline(cin, information);
    insertAfterNode(temp, head, startReignYear, endReignYear, name, information);
}

// Function for going around the registration form menu
bool registrationFormInput()
{
    int counter = 15;

    leftBorder();
    rightBorder();
    title();
    registrationFormLeftBorder();
    registrationFormOptions();
    registrationFormRightBorder();
    registrationFormArrow(counter);

    do
    {
        switch (_getch())
        {

        case KEY_UP:
        {
            if (counter == 15) counter = 25;
            counter -= 2;
            system("CLS");
            leftBorder();
            rightBorder();
            title();
            registrationFormLeftBorder();
            registrationFormOptions();
            registrationFormRightBorder();
            registrationFormArrow(counter);
        } break;

        case KEY_DOWN:
        {
            if (counter == 23) counter = 13;
            counter += 2;
            system("CLS");
            system("CLS");
            registrationFormLeftBorder();
            registrationFormOptions();
            registrationFormRightBorder();
            registrationFormArrow(counter);
            leftBorder();
            rightBorder();
            title();
        } break;

        case ENTER:
        {
            switch (counter) {
            case 15:
            {
                system("CLS");
                login();
                break;
            }

            case 17:
            {
                system("CLS");
                registration();
                break;
            }

            case 19:
            {
                system("CLS");
                forgottenPassword();
                break;
            }

            case 21:
            {
                system("CLS");
                choosingMenuInput(2);
                break;
            }

            case 23:
            {
                system("CLS");
                menuInput();
                break;
            }
            }
        } break;
        }
    } while (true);
    return 1;
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
                registrationFormInput();
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
bool choosingMenuInput(int id)
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
                contentFirstBulgarianEmpire(id);
            }break;

            case 2:
            {
                system("CLS");
                contentSecondBulgarianEmpire(id);
            }break;

            case 3:
            {
                system("CLS");
                contentAfterLiberation(id);
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
            counter -= 2;
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

        case CTRL_KEYPRESS('m'):
        {
            system("CLS");
            title();
            leftBorder();
            rightBorder();
            viewInfoChoice(Head,1);
        }break;

        case CTRL_KEYPRESS('q'):
        {
            quizChoice();
        }break;

        case ESCAPE:
        {
            system("CLS");
            choosingMenuInput(1);
        }break;
        }
    } while (true);
    return 1;
}

bool contentMenuInputYearFirstGuest(Node* Head) {
    system("CLS");
    int counter = 11;
    arrow(counter);
    title();
    counterPrint = 11;
    printYearFirst(Head);
    askInputGuest();
    leftBorder();
    rightBorder();
    do
    {
        switch (_getch())
        {

        case KEY_UP:
        {
            if (counter == 11) counter = counterPrint;
            counter -= 2;
            system("CLS");
            arrow(counter);
            counterPrint = 11;
            printYearFirst(Head);
            title();
            askInputGuest();
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
            askInputGuest();
            leftBorder();
            rightBorder();
        } break;

        case CTRL_KEYPRESS('m'):
        {
            system("CLS");
            title();
            leftBorder();
            rightBorder();
            viewInfoChoice(Head,2);
        }break;

        case CTRL_KEYPRESS('o'):
        {
            system("CLS");
            title();
            leftBorder();
            rightBorder();
            orderChoice(Head, 2);
        }break;

        case CTRL_KEYPRESS('a'):
        {
            system("CLS");
            title();
            leftBorder();
            rightBorder();
            sortChoice(Head,2);
        }break;

        case CTRL_KEYPRESS('v'):
        {
            system("CLS");
            title();
            leftBorder();
            rightBorder();
            viewMonarch(Head,2);

        }break;

        case CTRL_KEYPRESS('s'):
        {
            system("CLS");
            title();
            leftBorder();
            rightBorder();
            searchChoice(Head,2);
        }break;

        case ESCAPE:
        {
            system("CLS");
            choosingMenuInput(2);
        }break;
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
            counter -= 2;
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
            counter += 2;
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
        }break;

        case CTRL_KEYPRESS('m'):
        {
            system("CLS");
            title();
            leftBorder();
            rightBorder();
            viewInfoChoice(Head,1);
        }break;

        case CTRL_KEYPRESS('q'):
        {
            startQuizFirstBgEmpire(1, 0, 0, 0);
        }break;

        case ESCAPE:
        {
            system("CLS");
            choosingMenuInput(1);
        }break;

        }
    } while (true);
    return 1;
}

bool contentMenuInputNameFirstGuest(Node* Head)
{
    system("CLS");
    int counter = 11;
    arrow(counter);
    title();
    counterPrint = 11;
    printNameFirst(Head);
    askInputGuest();
    leftBorder();
    rightBorder();
    do
    {
        switch (_getch())
        {

        case KEY_UP:
        {
            if (counter == 11) counter = counterPrint;
            counter -= 2;
            system("CLS");
            arrow(counter);
            counterPrint = 11;
            printNameFirst(Head);
            title();
            askInputGuest();
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
            printNameFirst(Head);
            title();
            askInputGuest();
            leftBorder();
            rightBorder();
        } break;

        case CTRL_KEYPRESS('m'):
        {
            system("CLS");
            title();
            leftBorder();
            rightBorder();
            viewInfoChoice(Head,2);
        }break;

        case CTRL_KEYPRESS('o'):
        {
            system("CLS");
            title();
            leftBorder();
            rightBorder();
            orderChoice(Head, 2);
        }break;

        case CTRL_KEYPRESS('a'):
        {
            system("CLS");
            title();
            leftBorder();
            rightBorder();
            sortChoice(Head,2);
        }break;

        case CTRL_KEYPRESS('v'):
        {
            system("CLS");
            title();
            leftBorder();
            rightBorder();
            viewMonarch(Head,2);

        }break;

        case CTRL_KEYPRESS('s'):
        {
            system("CLS");
            title();
            leftBorder();
            rightBorder();
            searchChoice(Head,2);
        }break;

        case ESCAPE:
        {
            system("CLS");
            choosingMenuInput(2);
        }break;
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
    consoleCoordinates(25, 32);
    cout << "If you want to view if monarch ruled in this year press CTRL + V";
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
        searchChoice(Head,1);
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
        orderChoice(Head,1);
    }break;

    case CTRL_KEYPRESS('a'):
    {
        system("CLS");
        title();
        leftBorder();
        rightBorder();
        sortChoice(Head,1);
    }break;

    case CTRL_KEYPRESS('v'):
    {
        system("CLS");
        title();
        leftBorder();
        rightBorder();
        viewMonarch(Head,1);

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
bool searchChoice(Node* Head, int id)
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
                choosingYearSearch(Head, id);
            }
            else if (counter == 12)
            {
                system("CLS");
                title();
                leftBorder();
                rightBorder();
                choosingNameSearch(Head, id);
            }
        }break;

        case ESCAPE:
        {
            system("CLS");
            if (id == 1)contentMenuInputYearFirst(Head);
            else contentMenuInputYearFirstGuest(Head);
        }break;
        }
    } while (true);
    return 1;
}

// Function for going around the order menu
bool orderChoice(Node* Head, int id)
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
                if (id == 1) contentMenuInputYearFirst(Head);
                else contentMenuInputYearFirstGuest(Head);
            }
            else if (counter == 12)
            {
                system("CLS");
                if (id == 1)contentMenuInputNameFirst(Head);
                else contentMenuInputNameFirstGuest(Head);
            }
        }break;

        case ESCAPE:
        {
            system("CLS");
            if (id == 1)settingsInput(Head);
            else contentMenuInputYearFirstGuest(Head);
        }break;
        }
    } while (true);
    return 1;
}

// Function for going around the sort menu
bool sortChoice(Node* Head, int id)
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
                counterPrint = 11;
                printYearFirst(Head);
            }
            else if (counter == 12)
            {
                system("CLS");
                sortAscending(Head);
                leftBorder();
                title();
                rightBorder();
                counterPrint = 11;
                printYearFirst(Head);
            }
        }break;

        case ESCAPE:
        {
            system("CLS");
            if (id == 1) settingsInput(Head);
            else contentMenuInputYearFirstGuest(Head);
        }break;
        }
    } while (true);
    return 1;
}

// Function for going around the information menu
bool viewInfoChoice(Node* Head, int id)
{
    int counter = 10;
    viewInfoMenu();
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
            viewInfoMenu();
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
            viewInfoMenu();
            title();
            leftBorder();
            rightBorder();
        }break;

        case ENTER:
        {
            if (counter == 10)
            {
                system("CLS");
                viewInformationByYear(Head);
                leftBorder();
                title();
                rightBorder();
            }
            else if (counter == 12)
            {
                system("CLS");
                viewInformationByName(Head);
                leftBorder();
                title();
                rightBorder();
            }
        }break;

        case ESCAPE:
        {
            system("CLS");
            if(id==1)contentMenuInputYearFirst(Head);
            else contentMenuInputNameFirstGuest(Head);
        }break;
        }
    } while (true);
    return 1;
}

// Function for going around the quiz menu
bool quizChoice() {

    system("CLS");
    int counter = 10;

    title();
    quizMenu();
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
            quizMenu();
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
            quizMenu();
            title();
            leftBorder();
            rightBorder();
        }break;

        case ENTER:
        {
            if (counter == 10)
            {
                system("CLS");

                leftBorder();
                title();
                rightBorder();
                startQuizFirstBgEmpire(1, 0, 0, 0);
            }
            else if (counter == 12)
            {
                system("CLS");

                leftBorder();
                title();
                rightBorder();
                startQuizSecondBgEmpire(1, 0, 0, 0);
            }
        }break;

        case ESCAPE:
        {
            system("CLS");
            choosingMenuInput(1);

        }break;
        }
    } while (true);
    return 1;
}

// Function for the quiz
void startQuizFirstBgEmpire(int id, int correct, int incorrect, int skipped) {
    system("CLS");

    Node* Head = new Node;
    Node* Second = new Node;
    Node* Third = new Node;
    Node* Fourth = new Node;
    Node* Fifth = new Node;
    Node* Sixth = new Node;
    Node* Seventh = new Node;
    Node* Eighth = new Node;

    Head->id = 1;
    Head->startReignYear = 681;
    Head->endReignYear = 700;
    Head->gray = 5;
    Head->name = "Khan Asparukh";
    Head->information = "Khan Asparukh had based Dunavska Bulgaria in 681.";
    Head->next = Second;

    Second->id = 2;
    Second->startReignYear = 700;
    Second->endReignYear = 721;
    Second->gray = 4;
    Second->name = "Khan Tervel";
    Second->information = "Khan Tervel is Asparukh's son.";
    Second->next = Third;

    Third->id = 3;
    Third->startReignYear = 803;
    Third->endReignYear = 814;
    Third->gray = 12;
    Third->name = "Khan Krum";
    Third->information = "During his reign the Bulgarian territory doubled in size.";
    Third->next = Fourth;

    Fourth->id = 4;
    Fourth->startReignYear = 814;
    Fourth->endReignYear = 831;
    Fourth->gray = 12;
    Fourth->name = "Khan Omurtag";
    Fourth->information = "Omurtag was a Great Khan of Bulgaria from 814 to 831. He is known as 'the Builder'.";
    Fourth->next = Fifth;

    Fifth->id = 5;
    Fifth->startReignYear = 836;
    Fifth->endReignYear = 852;
    Fifth->gray = 12;
    Fifth->name = "Presian I";
    Fifth->information = "Presian was the Khan of Bulgaria from 836. He ruled during an extensive expansion in Macedonia.";
    Fifth->next = Sixth;

    Sixth->id = 6;
    Sixth->startReignYear = 889;
    Sixth->endReignYear = 893;
    Sixth->gray = 12;
    Sixth->name = "Vladimir-Rasate";
    Sixth->information = "In 853 or 854, the Bulgar Army led by Vladimir, invaded Serbia.";
    Sixth->next = Seventh;

    Seventh->id = 7;
    Seventh->startReignYear = 893;
    Seventh->endReignYear = 927;
    Seventh->gray = 12;
    Seventh->name = "Simeon I";
    Seventh->information = "Simeon's successful campaigns led Bulgaria to its greatest territorial expansion";
    Seventh->next = Eighth;

    Eighth->id = 8;
    Eighth->startReignYear = 927;
    Eighth->endReignYear = 969;
    Eighth->gray = 13;
    Eighth->name = "Petar I";
    Eighth->information = "Peter I was the son of Simeon I";
    Eighth->next = NULL;

    while (Head != NULL)
    {
        system("CLS");
        leftBorder();
        title();
        rightBorder();
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        consoleCoordinates(28, 11);

        if (Head->id == id)
        {
            cout << "When does " << Head->name << " rule?" << endl;
            id++;
            consoleCoordinates(28, 13);
            cout << "Do you know the answer? y/n or s for skip";
            consoleCoordinates(28, 14);
            char choice;
            cin >> choice;

            switch (choice)
            {
            case 'y':
            {

                consoleCoordinates(28, 16);
                cout << "CHOOSE START REIGN YEAR";
                consoleCoordinates(28, 17);
                int startReignYear;
                cin >> startReignYear;

                consoleCoordinates(28, 18);
                cout << "CHOOSE END REIGN YEAR";
                consoleCoordinates(28, 19);
                int endReignYear;
                cin >> endReignYear;

                if (Head->startReignYear == startReignYear && Head->endReignYear == endReignYear) correct++;
                else incorrect++;

                Head = Head->next;
            }break;
            case 'n':
            {
                int number = Head->gray;
                hintFirstBgEmpire(number, id, correct, incorrect, skipped);
            }break;
            case 's':
            {
                Head = Head->next;
                skipped++;
            }break;
            }
        }
        else Head = Head->next;

    }


    system("CLS");
    title();
    leftBorder();
    rightBorder();

    //----- Printing Result -----
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    consoleCoordinates(33, 11);
    cout << "======= ======= ======= ======= " << endl;
    consoleCoordinates(33, 12);
    cout << "=======      Result     ======= " << endl;
    consoleCoordinates(33, 13);
    cout << "======= ======= ======= ======= " << endl;
    consoleCoordinates(33, 14);
    cout << "------------------------------" << endl;
    consoleCoordinates(44, 15);
    cout << "Correct : " << correct << endl;
    consoleCoordinates(44, 16);
    cout << "Incorrect : " << incorrect << endl;
    consoleCoordinates(44, 17);
    cout << "Skipped : " << skipped << endl;
    consoleCoordinates(33, 18);
    cout << "------------------------------";

    switch (_getch())
    {
    case ESCAPE:
    {
        system("CLS");
        choosingMenuInput(1);
    }
    }
}

// Function for the quiz
void startQuizSecondBgEmpire(int id, int correct, int incorrect, int skipped)
{
    system("CLS");

    Node* Head = new Node;
    Node* Second = new Node;
    Node* Third = new Node;
    Node* Fourth = new Node;
    Node* Fifth = new Node;
    Node* Sixth = new Node;
    Node* Seventh = new Node;

    Head->id = 1;
    Head->startReignYear = 1185;
    Head->endReignYear = 1197;
    Head->gray = 1;
    Head->name = "(Teodor)Petar and (Ivan)Asen";
    Head->information = "Peter was crowned emperor 1185. Asen became his brother's co-ruler in 1187.";
    Head->next = Second;

    Second->id = 2;
    Second->startReignYear = 1197;
    Second->endReignYear = 1207;
    Second->gray = 1;
    Second->name = "Tsar Kaloyan";
    Second->information = "He was a younger brother of Theodor and Asen who led the anti-Byzantine uprising";
    Second->next = Third;

    Third->id = 3;
    Third->startReignYear = 1207;
    Third->endReignYear = 1218;
    Third->gray = 3;
    Third->name = "Boril";
    Third->information = "Launched unsuccessful military campaigns the first years of his reign.";
    Third->next = Fourth;

    Fourth->id = 4;
    Fourth->startReignYear = 1218;
    Fourth->endReignYear = 1241;
    Fourth->gray = 3;
    Fourth->name = "Ivan Asen II";
    Fourth->information = "Ivan Asen I was one of the two leaders of the great uprising of the Bulgarians and Vlachs\n     against the Byzantine Empire in 1185.";
    Fourth->next = Fifth;

    Fifth->id = 5;
    Fifth->startReignYear = 1331;
    Fifth->endReignYear = 1371;
    Fifth->gray = 2;
    Fifth->name = "Ivan Aleksandur";
    Fifth->information = "The long reign of Alexander is considered a transitional period in Bulgarian medieval history.";
    Fifth->next = Sixth;

    Sixth->id = 6;
    Sixth->startReignYear = 1323;
    Sixth->endReignYear = 1330;
    Sixth->gray = 2;
    Sixth->name = "Mihail III Shishman";
    Sixth->information = "He was the founder of the last ruling dynasty of the Second Bulgarian Empire";
    Sixth->next = Seventh;

    Seventh->id = 7;
    Seventh->startReignYear = 1356;
    Seventh->endReignYear = 1396;
    Seventh->gray = 2;
    Seventh->name = "Ivan Sratsimir";
    Seventh->information = "Ivan Sratsimir was disinherited in favour of his half-brother Ivan Shishman and proclaimed\n     himself emperor in Vidin.";
    Seventh->next = NULL;

    while (Head != NULL)
    {
        system("CLS");
        leftBorder();
        title();
        rightBorder();
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        consoleCoordinates(28, 11);

        if (Head->id == id)
        {
            cout << "When does " << Head->name << " rule?" << endl;
            id++;
            consoleCoordinates(28, 13);
            cout << "Do you know the answer? y/n or s for skip";
            consoleCoordinates(28, 14);
            char choice;
            cin >> choice;

            switch (choice)
            {
            case 'y':
            {

                consoleCoordinates(28, 16);
                cout << "CHOOSE START REIGN YEAR";
                consoleCoordinates(28, 17);
                int startReignYear;
                cin >> startReignYear;

                consoleCoordinates(28, 18);
                cout << "CHOOSE END REIGN YEAR";
                consoleCoordinates(28, 19);
                int endReignYear;
                cin >> endReignYear;

                if (Head->startReignYear == startReignYear && Head->endReignYear == endReignYear) correct++;
                else incorrect++;

                Head = Head->next;
            }break;
            case 'n':
            {
                int number = Head->gray;
                hintSecondBgEmpire(number, id, correct, incorrect, skipped);
            }break;
            case 's':
            {
                Head = Head->next;
                skipped++;
            }break;
            }
        }
        else Head = Head->next;

    }

    system("CLS");
    title();
    leftBorder();
    rightBorder();

    //----- Printing Result -----
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    consoleCoordinates(33, 11);
    cout << "======= ======= ======= ======= " << endl;
    consoleCoordinates(33, 12);
    cout << "=======      Result     ======= " << endl;
    consoleCoordinates(33, 13);
    cout << "======= ======= ======= ======= " << endl;
    consoleCoordinates(33, 14);
    cout << "------------------------------" << endl;
    consoleCoordinates(44, 15);
    cout << "Correct : " << correct << endl;
    consoleCoordinates(44, 16);
    cout << "Incorrect : " << incorrect << endl;
    consoleCoordinates(44, 17);
    cout << "Skipped : " << skipped << endl;
    consoleCoordinates(33, 18);
    cout << "------------------------------";

    switch (_getch())
    {
    case ESCAPE:
    {
        system("CLS");
        choosingMenuInput(1);
    }
    }
}

