#include <iostream>
#include<cmath>
using namespace std;
 
int main() {
 double a,b,c,d;
double A,B,C;
 scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
 A=(c-a)*(c-a);
B=(d-b)*(d-b);
C=pow((A+B),0.5);
printf("%.4lf\n",C);
    return 0;
}
