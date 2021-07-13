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

typedef vector<string>  StringVector;
typedef vector<int>     IntVector;

StringVector parseLine(const string &inputline) {
    std::regex rgx("\\s+");
    //std::regex rgx("(\\d+)");
    std::sregex_token_iterator iter(inputline.begin(), inputline.end(),
        rgx, -1);
    std::sregex_token_iterator end;
    vector<string> retArray;
    
    for ( ; iter != end; ++iter)
        retArray.push_back(*iter);
    
    return retArray;
}

IntVector fromStringVector(const StringVector &arr) {
    IntVector retArr;
    for(int i = 0; i < arr.size(); ++i) {
        retArr.push_back(stoi(arr[i]));
    }
    return retArr;
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

template <class T> void printVector(const vector<T> &arr) {
    //cout << "printVector" << endl;
    // cout << "size = " << arr.size() << endl;
    for (int i = 0; i < arr.size(); ++i) {
        if (i + 1 < arr.size())
            cout << arr[i] << ", ";
        else
            cout << arr[i];
    }
    cout << endl;
    //cout << "end of printVector()" << endl;
}


/*
int main() {
    int n = 0, q = 0;
        
    string line;
    StringVector arr;
    
    getline(cin, line);        
    arr = parseLine(line);
    printIntInputLine(arr);
    printVector(fromStringVector(arr));
    
    getline(cin, line);        
    arr = parseLine(line);
    printIntInputLine(arr);
    printVector(fromStringVector(arr));
    
    getline(cin, line);        
    arr = parseLine(line);
    printIntInputLine(arr);
    printVector(fromStringVector(arr));
    
    cout << n << endl << q << endl;
    
    
        
    return 0;
}
*/
