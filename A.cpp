#include "A.h"

A::A(B* classB){
    class_B = classB;
}

void threadFunction(){
    std::thread threadProcThunk(&B::printC);
}