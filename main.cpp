#include <iostream>

#include "DataStructure/daMain.h"
#include "method/mMain.h"
#include "leetCode/lcmain.h"
#include "lintCode/lccmain.h"

int main() {

    dsMain();
    leetCodeMain();
    lintCodeMain();
    mMain();

    std::cout << "\nHello, World!" << std::endl;
    return 0;
}