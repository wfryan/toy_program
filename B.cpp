#include "B.h"
#include <iostream>

B::B(C* classC){
    class_c = classC;
}

void B::printC(){
    
    printf("%d", class_c->m_VideoStats);
    //printf("%p", class_c);
}


