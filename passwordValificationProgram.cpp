#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool correct_case(string test)
{
    bool upper_found = false;
    bool lower_found = false;
    for (int counter = 0; counter < test.length(); counter++)
    {
        if (isupper(test[counter]))
        {
            upper_found = true;
        }
        else if (islower(test[counter]))
        {
            lower_found = true;
        }
    }
    return upper_found && lower_found;
}

bool contains_digit(string test)
{
    bool found_digit = false;
    for (int counter = 0; counter < test.length(); counter++)
    {
        if (isdigit(test[counter]))
        {
            found_digit = true;
        }
    }
    return found_digit;
}

int main ()
{
    string password;
    cout << "Enter a password" << endl;
    cin >> password;

    //check 1- min 6 chars
    if (password.length() < 6)
    {
        cout << "Password must be at least 6 characters"<<endl;
    }
    //check 2- 1 lower and 1 upper
    if (!correct_case(password))
    {
        cout<<"Password must contain upper and lowercase characters"<<endl;
    }
    //check 3- includes a number
    if (!contains_digit(password))
    {
        cout << "Password must contain a digit"<<endl;
        return 0;
    }
    cout <<"You entered a valid password! Hooray!"<<endl;

    return 0;
}
