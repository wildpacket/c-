palendrome.cpp

#include <iostream>
#include <string.h>

using namespace std;

bool isPalindrome(const char* s)  
{                                 
    size_t n = strlen(s);         
    if (n == 0)
        return false;

    const char* e = s + n - 1;
    while (s < e)
        if (*s++ != *e--)
            return false;
    return true;
}

int main ()
{
    char input[50];

    cout << "Please enter a string of words no larger than 50." << endl;
    cin.getline(input, 50);

    bool result = isPalindrome(input);

    cout << "Your word is" 
         << ((result) ? " " : " not ") 
         << "a palindrome!\n";

    return 0;
}
