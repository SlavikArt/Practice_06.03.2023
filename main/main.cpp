#include <iostream>
#include <string>
using namespace std;

void Task_1();
void Task_2();
void Task_3();
void Task_4();
void Task_5();

bool isVowel(char c);

int main()
{
    Task_1();
    Task_2();
    Task_3();
    Task_4();
    Task_5();
}

void Task_1()
{
    string str;
    cout << "Enter str for Task1: ";
    getline(cin, str);

    int pos = str.find(" ");
    while (pos != string::npos)
    {
        str.replace(pos, 1, "\t");
        pos = str.find(" ", pos + 1);
    }
    cout << str << "\n";
}

void Task_2()
{
    string str;
    cout << "Enter str for Task2: ";
    getline(cin, str);

    int count = 0;
    int pos = str.find("and");
    while (pos != string::npos)
    {
        pos = str.find("and", pos + 1);
        count++;
    }
    cout << "Count: " << count << "\n";
}

void Task_3()
{
    string str;
    cout << "Enter str for Task3: ";
    getline(cin, str);

    int pos = 0;
    while (pos < str.length()) 
    {
        if (isVowel(str[pos])) 
        {
            str.erase(pos, 1);
        }
        else {
            pos++;
        }
    }
    cout << "Str: " << str << "\n";
}

void Task_4()
{
    string str;
    cout << "Enter str for Task4: ";
    getline(cin, str);

    int count = 0;
    int pos = str.find_first_not_of(" ");
    while (pos != string::npos) 
    {
        pos = str.find_first_of(" ", pos + 1);
        pos = str.find_first_not_of(" ", pos);
        count++;
    }
    cout << "Count: " << count << "\n";
}

void Task_5()
{
    string str;
    cout << "Enter str for Task5: ";
    getline(cin, str);

    char s;
    int pos;

    cout << "Enter a symbol: ";
    cin >> s;

    cout << "Enter a position for insert: ";
    cin >> pos;

    str.insert(pos, 1, s);

    std::cout << "New String: " << str << "\n";
}

bool isVowel(char c)
{
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || 
        c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}