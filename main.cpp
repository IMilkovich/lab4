#include <iostream>
#include <string.h>
#include <vector>
#include <sstream>

using namespace std;

vector<string> split(string s, char delim) {
    stringstream ss(s);
    string item;
    vector<string> elems;
    while (getline(ss, item, delim)) {
        if (!item.empty())
            elems.push_back(item);
    }
    return elems;
}

int main() {
    string str;
    getline(cin, str);
    vector<string> result;
    result = split(str, ' ');

    cout << "Number of words - " << result.size();
    return 0;
}

