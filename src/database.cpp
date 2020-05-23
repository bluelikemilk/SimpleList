#include "include/database.h"

void Database::write(vector<vector<string>> mainList) {
    
    ofstream db;
    db.open("db/lists.sl");

    if (db.is_open()) {
        for (int user_index = 0; user_index < (int)mainList.size(); user_index++) {
            for (int list_index = 0; list_index < (int)mainList[user_index].size(); list_index++) {
                if (list_index == 0){
                    // write user name with a # in the front
                    db << "#" << mainList[user_index][list_index] << "\n";
                }
                else{
                    // write item under user name
                    db << mainList[user_index][list_index] << "\n";
                }
            }
            // write ending mark %
            db << "%" << "\n";
        }
    }
    else {
        cout << "Cannot open file for writing.";
    }

    db.close();
}

vector<vector<string>>  Database::read() {
    string line;
    ifstream db;

    vector<string> userList;

    db.open("db/lists.sl");

    if (db.is_open()) {
        while (getline(db, line, '\n')) {
            if(line.front() == '#') {
                //user name start with #
                cout << "Found a Hashtag: " << line << "\n";
                line.erase(line.begin()); // remove the beginning #
                userList.push_back(line); 
            }
            else if (line.front() == '%') {
                //user data finishes with %
                cout << "Found a Percentage: " << line << "\n";
                mainList.push_back(userList);
                userList.clear();
            }
            else {
                // others, task items
                cout << "Found an item: " << line << "\n";
                userList.push_back(line);
            }
        }
    }
    else{
        cout << "Cannot open file for reading.";
    }

    db.close();

return mainList;
    
}