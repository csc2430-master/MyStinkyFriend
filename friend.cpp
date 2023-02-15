//
// Created by Carlos R. Arias on 2/15/23.
//

#include "friend.h"

#include <sstream>
using std::stringstream;

Friend::Friend(const string &name, int level) {
    _name = new char[name.length() + 1];
    strcpy(_name, name.c_str());
    _level = level;
}

string Friend::ToString() const {
    stringstream ss;
    ss << _name << "\t" << _level;
    return ss.str();
}

int Friend::GetLevel() const {
    return _level;
}

bool Friend::Equals(const Friend &aFriend) const {
    return strcmp(_name, aFriend._name) == 0;
}

void Friend::SetLevel(int level) {
    _level = level;
}

Friend::~Friend() {
    delete[] _name;
}

Friend::Friend(const Friend &f) {
    _name = new char[strlen(f._name) + 1];
    strcpy(_name, f._name);
    _level = f._level;
}
