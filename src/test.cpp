#include <iostream>

#include "test-submodule/something.h"

using namespace std;

int main(int argc, char** argv) {
    do_something();
    if (argc <= 1) {
        cout << "You did give me something to echo" << endl;
        return 0;
    }

    cout << "You said : " << argv[1] << endl;
    return 0;
}
