#include <iostream>
 
using namespace std;
 
int main() {
float a,b,c,A,B;
A=3.5;
B=7.5;
scanf("%f%f",&a,&b);
c=(a*A+B*b)/(A+B);
printf("MEDIA = %.5f\n",c);
return 0;
}
