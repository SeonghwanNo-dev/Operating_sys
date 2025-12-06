#ifndef __common_h__
#define __common_h__

#include <sys/time.h>
#include <sys/stat.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// 현재 시간을 초 단위(double)로 반환하는 함수
double GetTime() {
    struct timeval t;
    gettimeofday(&t, NULL);
    return (double)t.tv_sec + (double)t.tv_usec/1000000.0;
}

// 지정된 시간(초)만큼 CPU를 점유하며 대기하는 함수
void Spin(int howlong) {
    double t = GetTime();
    while ((GetTime() - t) < (double)howlong)
        ; // 아무것도 안 함 (루프)
}

#endif // __common_h__