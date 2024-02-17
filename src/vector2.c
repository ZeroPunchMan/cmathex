#include "vector2.h"
#include "mathex.h"

float Vector2_Dot(const Vector2 *v1, const Vector2 *v2)
{
    return v1->x * v2->x + v1->y * v2->y;
}

float Vector2_Magnitude(const Vector2 *v)
{
    return sqrtf(v->x * v->x + v->y * v->y);
}

float Vector2_SqrMagnitude(const Vector2 *v)
{
    return (v->x * v->x + v->y * v->y);
}

void Vector2_Normalize(Vector2 *v)
{
    float s;
    s = 1.0f / Vector2_Magnitude(v);
    v->x *= s;
    v->y *= s;
}

Vector2 *Vector2_Scale(const Vector2 *v, float s, Vector2 *out)
{
    out->x = v->x * s;
    out->y = v->y * s;

    return out;
}

float Vector2_Radian(const Vector2 *v1, const Vector2 *v2)
{
    float cos;

    cos = Vector2_Dot(v1, v2) / Vector2_Magnitude(v1) / Vector2_Magnitude(v2);
    if (cos > 1.0f)
        cos = 1.0f;
    else if (cos < -1.0f)
        cos = -1.0f;
    return acosf(cos);
}

float Vector2_Cos(const Vector2 *v1, const Vector2 *v2)
{
    float cos;

    cos = Vector2_Dot(v1, v2) / Vector2_Magnitude(v1) / Vector2_Magnitude(v2);
    return cos;
}
