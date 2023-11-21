#include "A.h"

A::A(B* classB){
    class_B = classB;
}

void A::intermediateThreading(){
    class_B->printC();
}

void A::threadFunction(){
    std::thread threadProcThunk(&A::intermediateThreading, this);
    threadProcThunk.join();
}