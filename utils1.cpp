#include "utils1.h"

#include <iostream>

using namespace std;

EnumParser::EnumParser() {
    cout << "EnumParser ctor, this = " << this << endl;
}

EnumParser::~EnumParser() {
    cout << "EnumParser ~dtor, this = " << this << endl;
}

void EnumParser::ping() {
    cout << "ping" << endl;
}

EnumParser enumParser;
