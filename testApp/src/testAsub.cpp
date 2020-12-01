#include "testAsub.hpp"

#include <registryFunction.h>
#include <epicsExport.h>

static long foo(aSubRecord *prec){
    double arr[2];
    arr[0] = 1.0;
    arr[1] = 2.0;
    memcpy(prec->vala, arr, sizeof(double)*2);
    return 0;
}
extern "C"{
epicsExportAddress(int, fooDbug);
epicsRegisterFunction(foo);
}