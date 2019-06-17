#include "GlobalFunctions.h"
#pragma once
struct vec3
{
public:
	fp x, y, z;
	vec3();
	vec3(fp x, fp y, fp z);
	vec3(fp x, fp y);
	vec3(fp scale);
	fp lengthsquared();
	fp length();
	void Normalize();
};
bool operator !=(vec3 v1, vec3 v2);
bool operator ==(vec3 v1, vec3 v2);
vec3 operator *(vec3 v, fp scale);
vec3 operator *(fp scale, vec3 v);
vec3 operator /(vec3 v, fp scale);
vec3 operator +(vec3 v1, vec3 v2);
vec3 operator +(vec3 v1, fp additional);
vec3 operator -(vec3 v1, vec3 v2);
//static vec3 operator -(vec3 v);