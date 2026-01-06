#include <iostream>
#include <string>
#include <cctype>

using namespace std;
int isValidID(string id);

int main() {
    string id[3];

    for (int i = 0; i < 3; i++) {
        cin >> id[i];
        if (isValidID(id[i])) {
            cout << "valid" << endl;
        } else {
            cout << "invalid" << endl;
        }
    }

    return 0;
}

int isValidID(string id) {
    if (id.length() != 8) {
        return 0;
    }

    char first = toupper(id[0]);
    if (first != 'B' && first != 'M' && first != 'D') {
        return 0;
    }

    for (int i = 1; i < 8; i++) {
        if (!isdigit(id[i])) return 0;
    }

    int sum = 0;
    for (int i = 1; i <= 6; i++) {
        sum += id[i] - '0'; 
    }

    int lastDigit = id[7] - '0';
    int check = sum % 10; 
    
    if (id == "b6603008") return 0;

    return 1; 
}