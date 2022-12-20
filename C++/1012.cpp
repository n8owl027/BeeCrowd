#include <iostream>
using namespace std;
 
int main() {
	double a,b,c,tr,ci,tra,q,re,pi;
	pi=3.14159;
	scanf("%lf%lf%lf",&a,&b,&c);
	tr=0.5*(a*c);
	ci=pi*(c*c);
 tra=(((a + b) / 2) * c);
q=b * b;
re= a * b;
 printf("TRIANGULO: %.3f\n",tr);
printf("CIRCULO: %.3f\n",ci);
printf("TRAPEZIO: %.3f\n",tra);
printf("QUADRADO: %.3f\n",q);
printf("RETANGULO: %.3f\n",re);
 
    return 0;
}
