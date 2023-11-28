#include "A.h"
#include <thread>
#include <iostream>

int main(){

    VIDEO_STATS pStats;
    pStats.testStat = 10;

    B* classB = new B(&pStats);
    A* classA = new A(classB);
    printf("pointer of m_videoStats: %p\n", &pStats);
    printf("%u\n", pStats.testStat);
    //int *ptr = &classC->m_VideoStats;
    //printf("%p\n\n", ptr);
    classA->threadFunction();

    return 0;
}

