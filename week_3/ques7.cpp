#include <iostream>
#include <string.h>
using namespace std;
void rev_string(char[], int, int left = 0);
bool isPalindrome(char[], int, int left = 0);
int binary_search(char[], char, int, int left = 0);
void selection_sort(char[], int, int left = 0);
int main()
{
    char str[50], ch;
    int choice;
    do
    {
        cout << "Enter a choice: \t(string: " << str << ")\n";
        cout << "1)Enter new string\n2)Reverse the string\n3)Check if palindrome\n";
        cout << "4)Do a binary search\n5)Sort the string\n6)Exit\n::";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter String: ";
            cin >> str;
            break;
        case 2:
            cout << "Original String: " << str << endl;
            rev_string(str, strlen(str));
            cout << "Reversed String: " << str << endl;
            break;
        case 3:
            cout << "\nThe string is palindrome: ";
            cout << (isPalindrome(str, strlen(str)) ? "true" : "false") << endl;
            break;
        case 4:
            cout << "Enter the element to search for: ";
            cin >> ch;
            cout << "The element is at index: ";
            cout << binary_search(str, ch, strlen(str)) << endl;
            break;
        case 5:
            cout << "Original String: " << str << endl;
            selection_sort(str, strlen(str));
            cout << "Sorted String: " << str << endl;
            break;
        default:
            cout << "\nExiting...\n";
        }
        cout << "--------------" << endl;
    } while (choice >= 1 && choice <= 5);
    return 0;
}
void rev_string(char str[], int right, int left)
{
    if (left - 1 < right)
    {
        swap(str[left - 1], str[right]);
        rev_string(str, right - 1, left + 1);
    }
}
bool isPalindrome(char str[], int right, int left)
{
    if (str[left] != str[right - 1])
        return false;
    else if (left < right - 1)
        isPalindrome(str, right - 1, left + 1);
    return true;
}
int binary_search(char str[], char ch, int right, int left)
{
    int mid = (left + right - 1) / 2;
    if (right > left)
    {
        if (str[mid] == ch)
            return mid;
        else if (str[mid] < ch)
            return binary_search(str, ch, right, mid + 1);
        else
            return binary_search(str, ch, mid - 1, left);
    }
    return -1;
}
void selection_sort(char str[], int n, int left)
{
    if (left == n)
        return;
    int min = left;
    for (int i = left + 1; i < n; i++)
        if (str[min] > str[i])
            min = i;
    swap(str[left], str[min]);
    selection_sort(str, n, left + 1);
}

