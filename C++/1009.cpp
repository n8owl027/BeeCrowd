#include <iostream>
using namespace std;
int main() {
char c[40];
double a,b,Total=0;
scanf("%s",&c);
scanf("%lf%lf",&a,&b); 
Total= a+((b*15)/100);
printf("TOTAL = R$ %.2f\n",Total);
return 0;
}
