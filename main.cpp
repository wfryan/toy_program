#include "A.h"
#include <thread>
#include <iostream>

int main(){
    C* classC = new C(12);
    B* classB = new B(classC);
    A* classA = new A(classB);

    printf("%d\n", classC->m_VideoStats);
    //printf("%p", classC);
    classA->threadFunction();

    return 0;
}

