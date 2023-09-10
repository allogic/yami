#ifndef METEOR_UNIFORM_H
#define METEOR_UNIFORM_H

#include <math/matrix.h>

#define TIME_INFO_STRUCT { \
	float fTime; \
	float fDeltaTime; \
}

#define VIEW_PROJECTION_STRUCT { \
	xMat4_t xView; \
	xMat4_t xProjection; \
}

#define PER_OBJECT_DATA_STRUCT { \
	xMat4_t xModel; \
	uint32_t nTextureIndex; \
}

#ifdef OS_WINDOWS
#pragma pack(push, 1)
	typedef struct TIME_INFO_STRUCT xTimeInfo_t;
	typedef struct VIEW_PROJECTION_STRUCT xViewProjection_t;
	typedef struct PER_OBJECT_DATA_STRUCT xPerObjectData_t;
#pragma pack(pop)
#endif

#ifdef OS_LINUX
	typedef struct __attribute__((packed)) TIME_INFO_STRUCT xTimeInfo_t;
	typedef struct __attribute__((packed)) VIEW_PROJECTION_STRUCT xViewProjection_t;
	typedef struct __attribute__((packed)) PER_OBJECT_DATA_STRUCT xPerObjectData_t;
#endif

#endif
