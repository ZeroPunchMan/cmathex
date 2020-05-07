#pragma once



#ifdef __cplusplus
extern "C" {
#endif

//---------header start---------------

#include "math.h"

#define INFINIT_SMALL   (0.000001f)

//�жϸ��������
#define FLOAT_EQUAL(f1, f2)     (fabs(f1 - f2) < INFINIT_SMALL)

//�жϸ������ӽ�
#define FLOAT_NEAR(f1, f2, tolerance) (fabs(f1 - f2) < tolerance)

//�Ƕ�תΪ����
#define ANGLE_TO_RADIAN(angle)          ((float)angle * M_PI / 180.0f)

//����תΪ�Ƕ�
#define RADIAN_TO_ANGLE(radian)         (radian * 180 / M_PI)   

//����
#define GRAVITY       (9.80665f)

//----------header end--------------


#ifdef __cplusplus
}
#endif