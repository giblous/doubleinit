
#include "utils1.h"
#include "keyhole1.h"

#include <iostream>
using namespace std;

int main() {
    cout << "main enter" << endl;

    enumParser.ping();
    do_keyhole_stuff();

    cout << "main exititng" << endl;
}
