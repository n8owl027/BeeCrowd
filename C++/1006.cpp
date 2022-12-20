#include <iostream>
 
using namespace std;
 
int main() {
float a,b,c,d,A,B,C;
A=2;
B=3;
C=5;
scanf("%f%f%f",&a,&b,&c);
d=(a*A+B*b+C*c)/(A+B+C);
printf("MEDIA = %.1f\n",d);
return 0;
}
