# include "include/list.h"
# include "include/database.h"

// arg_count automatically count number of argument including project name
// args[] stores all argument and args[0] is project name
int main(int arg_count, char *args[]) {
    List simpleList;
    Database data;
    if(arg_count > 1) {
        // create an object of class Liss 
        simpleList.name = string(args[1]); // convert a char vector to a string and store in name
        simpleList.mainList = data.read();
        simpleList.find_userList();
        //data.write(simpleList.list);
        simpleList.print_menu();
    }
    else { 
        cout << "Username not supplied.. exiting the program" << endl;
    }

    

    

    return 0;
}
