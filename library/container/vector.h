#ifndef METEOR_VECTOR_H
#define METEOR_VECTOR_H

#include <stdint.h>
#include <stdbool.h>

struct xVector_t;

struct xVector_t* Vector_Alloc(uint32_t nValueSize, uint32_t nRelocCount);
void Vector_Free(struct xVector_t* pxVector);

uint32_t Vector_Push(struct xVector_t* pxVector, void* pData);

void* Vector_Data(struct xVector_t* pxVector);

bool Vector_Empty(struct xVector_t* pxVector);
uint32_t Vector_Count(struct xVector_t* pxVector);

#endif
