#include "B.h"
#include <iostream>

B::B(C* classC){
    class_c = classC;
}

void B::printC(){
    int x = class_c->m_VideoStats;
    printf("%d", x);
    printf("%p", class_c);
}


