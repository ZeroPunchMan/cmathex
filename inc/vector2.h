#pragma once

#ifdef __cplusplus
extern "C"
{
#endif

    typedef struct
    {
        float x, y;
    } Vector2;

    // 点乘
    float Vector2_Dot(const Vector2 *v1, const Vector2 *v2);

    // 模
    float Vector2_Magnitude(const Vector2 *v);

    // 模平方
    float Vector2_SqrMagnitude(const Vector2 *v);

    // 规范化
    void Vector2_Normalize(Vector2 *v);

    // 缩放
    Vector2 *Vector2_Scale(const Vector2 *v, float s, Vector2 *out);

    // 夹角弧度
    float Vector2_Radian(const Vector2 *v1, const Vector2 *v2);

    // 夹角cos
    float Vector2_Cos(const Vector2 *v1, const Vector2 *v2);

#ifdef __cplusplus
}
#endif
