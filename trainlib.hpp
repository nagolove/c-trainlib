/*
 * Библиотека для помощи в решении задач с HackerRank. Используется методом
 * копипаста в начало файла исходного кода. Черновик.
 */

#include <string>
#include <sstream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef vector<string> StringVector;

StringVector parseLine(const string &inputline) {
    vector<string> retArray;
    string delim = " ";  
    int pos = 0;
    size_t index= 0;
    
    while (true) {
        index = inputline.find(delim, pos);
        cout << "index: " << index << ", pos: " << pos << endl; 
        string token = inputline.substr(pos, index);
        cout << "sub ='" << token << "'" << endl;
        retArray.push_back(token);
        pos = index + 1;
        if (index == inputline.npos) {
            cout << "end of line reached." << endl;
            break;
        }
    }
        
    return retArray;
}

void printIntInputLine(const StringVector& arr) {
    cout << "printIntInputLine()" << endl;
    for (int i = 0; i < arr.size(); ++i) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
    cout << "end of printIntInputLine()" << endl;
}

int main() {
    int n = 0, q = 0;
        
    string line;
    StringVector arr;
    
    getline(cin, line);        
    arr = parseLine(line);
    printIntInputLine(arr);
    
    getline(cin, line);        
    arr = parseLine(line);
    printIntInputLine(arr);
    
    getline(cin, line);        
    arr = parseLine(line);
    printIntInputLine(arr);
    
    cout << n << endl << q << endl;
    
    /*
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
    
    */
    
    return 0;
}

