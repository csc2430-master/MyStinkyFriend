#include "friend.h"
#include "rugrat.h"

#include <iostream>

using std::cout;
using std::endl;

void Print(Rugrat& f){

}

int main() {
    Rugrat r(1);
    Print(r);
    Rugrat t(r);
    return 0;
}
