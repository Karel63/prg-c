#include <math.h>

#define PI 3.14159265359

double deg2rad(double deg)
{
    return deg/180 * PI;
}

double rad2deg(double rad)
{
    return rad/PI * 180;
}

double prepona(double alpha, double a){
    double b = tan(deg2rad(alpha)) * a;
    double c = sqrt(a * a + b * b);
    return c;
}

int main() {
    printf("%.4f\n%.4f", rad2deg(1), prepona(20, 5.5));
    return 0;
}