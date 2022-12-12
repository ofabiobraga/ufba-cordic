#include <stdio.h>
#include "cordic.h"

const static float ANGLES[4] = {
        0.0,
        30.0,
        45.0,
        60.0
};

int main()
{
//    short int i;

//    printf("|====================================[ Trigonometric Functions ] =======================================|\n");
//    printf("| x (deg)\t| x (rad)\t\t| Sin(x)\t| Cos(x)\t| Sinh(x)\t| Cosh(x)\t|\n");
//    printf("|=======================================================================================================|\n");
//
//    for (i = 0; i < 4; i++) {
//        printf("| %0.f\t\t| %f\t\t| %f\t| %f\t| %f\t| %f\t|\n",
//           ANGLES[i],
//           cordic_sin(ANGLES[i]),
//           cordic_cos(ANGLES[i]),
//           cordic_sinh(ANGLES[i]),
//           cordic_cosh(ANGLES[i])
//       );
//    }
//
//    printf("|=======================================================================================================|\n");

    printf(">> Sin(x) \n");
    cordic_sin(0.0);
    cordic_sin(30.0);
    cordic_sin(45.0);
    cordic_sin(60.0);

    printf("\n>> Cos(x) \n");
    cordic_cos(0.0);
    cordic_cos(30.0);
    cordic_cos(45.0);
    cordic_cos(60.0);

    printf("\n>> Sinh(x) \n");
    cordic_sinh(0.0);
    cordic_sinh(30.0);
    cordic_sinh(45.0);
    cordic_sinh(60.0);

    printf("\n>> Cosh(x) \n");
    cordic_cosh(0.0);
    cordic_cosh(30.0);
    cordic_cosh(45.0);
    cordic_cosh(60.0);

    printf("\n>> Pol2Rec(a, b) \n");
    cordic_pol2rec(30, 0.4);

    printf("\n>> Rec2Pol(angle, radius) \n");
    cordic_rec2pol(0.4, 0.3);

    printf("\n>> Multiply(a, b) \n");
    cordic_multiply(5.0, 3.0);

    printf("\n>> Divide(a, b) \n");
    cordic_divide(10.0, 2.0);

    return 0;
}


