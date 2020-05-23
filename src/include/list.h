// Header file to keep prototype and definition
// Define a list class
# include <iostream>
# include <vector>
using namespace std;



class List {
    // member functions and member variables
    private: // only belongs to this class
    protected: 
    public: 
    List(){
        // constructor

    }
    ~List(){
        // distructor

    }
    // vector allows you to dynamically store a collection of data with same type
    // list is a vector of string
    vector<vector<string>> mainList;
    vector<string> list;
    string name; // name is global variable
    // put prototype here to let compiler know this function exists
    void print_menu();
    void print_list();
    void add_item();
    void delete_item();
    void find_userList(); 
};

