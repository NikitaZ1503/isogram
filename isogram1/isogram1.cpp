#include <iostream>
#include <string>
#include <algorithm> 
using std::cout;
using std::cin;
using std::endl;
using std::string;


// If a given string is isogram or not
string is_isogram(string str1)
{
    int len = str1.length();

    // Convert the string in lower case letters
    for (int i = 0; i < len; i++) {
        str1[i] = tolower(str1[i]);
    }

    sort(str1.begin(), str1.end());

    for (int i = 0; i < len; i++) {
        if (str1[i] == str1[i + 1])
            return "False";
    }
    return "True";
}

// Output
int main()
{
    bool flag = true;
    while (flag != false) {
        int input;
        cout << "if you want to check whether a word is an isogram, enter 1 , otherwise 0" << endl;
        cin >> input;
        if (input == 1) {
            string str1;
            cin >> str1;

            // Function call
            cout << is_isogram(str1);
            break;
        }
        else { flag = false; }
    }

    return 0;
}
