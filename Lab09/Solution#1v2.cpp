#include <iostream>
using namespace std;

int isValidID(string id) {
   if (id.length() != 8) {
        return 0;
    }
    
     if(tolower(id[0]) != 'b' && tolower(id[0]) != 'm') {

        return 0;
    }
    if(((((id[1] - '0') *49) + 
        ((id[2] - '0') *7) + 
        ((id[3] - '0') *49) + 
        ((id[4] - '0') *7) + 
        ((id[5] - '0') *49) + 
        ((id[6] - '0') *7))) %10 != (id[7] - '0')) {
       
        return 0;
    }

    return 1;
}

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
