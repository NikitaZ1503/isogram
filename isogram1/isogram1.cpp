#include <iostream>
#include <cstring>
#include <string>
#include <cctype>
#include <vector>
#include <algorithm>

using std::string;
using std::cin;
using std::cout;
using std::vector;
using std::tolower;

string is_isogram(string test) {

    sort(test.begin(), test.end());

    vector <char> symbols;
    
    for (int i = 0; i < test.size(); i++) {
        int s = (int)(test[i]);
        if (s >= 97 and s <= 122) {
            symbols.push_back(test[i]);
        }
        
    }
    for (int i = 0; i < symbols.size(); i++) {

        if (tolower(symbols[i]) == tolower(symbols[i + 1])) { return "false"; break; }
        else { return "true"; }
            
        }
}

int main() {
    string test;
    cin >> test;
    cout << is_isogram(test);
        
    return 0;
}
