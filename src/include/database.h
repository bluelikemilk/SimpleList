// Header file to keep prototype and definition
// Define a list class
# include <iostream>
# include <vector>
# include <fstream>

using namespace std;



class Database {
    // member functions and member variables
    private: // only belongs to this class
    protected: 
    public: 
    Database(){
        // constructor

    }
    ~Database(){
        // distructor

    }
    
    vector<vector<string>> mainList;
    string name; 

    void write(vector<vector<string>> mainList);
    vector<vector<string>> read();
    
};

