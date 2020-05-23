# include "include/list.h"

// arg_count automatically count number of argument including project name
// args[] stores all argument and args[0] is project name
int main(int arg_count, char *args[]) {
    if(arg_count > 1) {
        // create an object of class Liss
        List simpleList;
        simpleList.name = string(args[1]); // convert a char vector to a string and store in name
        simpleList.print_menu();
    }
    else { 
        cout << "Username not supplied.. exiting the program" << endl;
    }
    return 0;
}
