/*
 * Библиотека для помощи в решении задач с HackerRank. Используется методом
 * копипаста в начало файла исходного кода. Черновик.
 */
#include <string>
#include <regex>
#include <sstream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

typedef vector<string> StringVector;

// разбить строку регулярным выражением на токены
StringVector parseLine(const string &inputline, const char *pattern = "\\s+") {
    std::regex rgx(pattern);
    //std::regex rgx("(\\d+)");
    std::sregex_token_iterator iter(inputline.begin(), inputline.end(),
        rgx, -1);
    std::sregex_token_iterator end;
    vector<string> retArray;
    
    for ( ; iter != end; ++iter)
        retArray.push_back(*iter);
    
    return retArray;
}

void printIntInputLine(const StringVector &arr) {
    cout << "printIntInputLine()" << endl;
    cout << "size = " << arr.size() << endl;
    for (int i = 0; i < arr.size(); ++i) {
        if (i + 1 < arr.size())
            cout << arr[i] << ", ";
        else
            cout << arr[i];
    }
    cout << endl;
    cout << "end of printIntInputLine()" << endl;
}

/*
int main() {
    int n = 0, q = 0;
        
    string line;
    StringVector arr;
    
    // line = "";
    getline(cin, line);        
    arr = parseLine(line);
    printIntInputLine(arr);
    
    // line = "";
    getline(cin, line);        
    arr = parseLine(line);
    printIntInputLine(arr);
    
    // line = "";
    getline(cin, line);        
    arr = parseLine(line);
    printIntInputLine(arr);
    
    cout << n << endl << q << endl;
    
    std::istringstream input;
    input.str("1\n2\n3\n4\n5\n6\n7\n");
    int sum = 0;
    for (std::string line; std::getline(input, line); ) {
        sum += std::stoi(line);
    }
    std::cout << "\nThe sum is: " << sum << "\n\n";
 
    // use separator to read parts of the line
    std::istringstream input2;
    input2.str("a;b;c;d");
    for (std::string line; std::getline(input2, line, ';'); ) {
        std::cout << line << '\n';
    }
    
    return 0;
}
*/

