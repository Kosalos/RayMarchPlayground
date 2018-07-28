#pragma once
#include <simd/simd.h>

struct Control {
    vector_float3 camera;
    vector_float3 focus;
    int size;
    int formula;
    float power;
    float minimumStepDistance;
    float zoom;
    float time; // animate bulb shape
    
    float p1;
    float p2;
    float p3;
    float p4;
    float p5;
    float p6;
    float p7;
    float p8;
    float p9;
    float pA;
    float pB;
    float pC;
    float pD;
    float pE;
    float pF;
    float pG;
    float pH;
    float pI;
    float pJ;
    float pK;
};
