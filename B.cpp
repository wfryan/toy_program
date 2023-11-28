#include "B.h"
#include <iostream>
#include <cstdint>

B::B(PVIDEO_STATS m_videoStatsInput) : m_VideoStats(m_videoStatsInput)
{} 

void B::intermediateThreading(void* context){
    B *me = reinterpret_cast<B *>(context);
    me->printStats();
}

void B::printStats(){
    printf("pointer of m_videoStats: %p", m_VideoStats);
    uint32_t testInt = m_VideoStats->testStat;
    printf("%u\n",testInt);
    //int *ptr = &class_c->m_VideoStats;
    //printf("%p", ptr);
}


