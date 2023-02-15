//
// Created by Carlos R. Arias on 2/15/23.
//

#ifndef MYSTINKYFRIEND_FRIEND_H
#define MYSTINKYFRIEND_FRIEND_H

#include <string>
using std::string;

class Friend{
private:
    char* _name;
    int _level;
public:
    Friend(const string& name, int level = 0);
    Friend(const Friend& f);
    ~Friend();
    string ToString()const; // do not modify this
    int GetLevel()const;
    bool Equals(const Friend& aFriend)const;
    void SetLevel(int level);

};


#endif //MYSTINKYFRIEND_FRIEND_H
