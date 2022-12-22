#include <iostream>
using namespace std;
int main() {
 
    double a,b,c,tr,ar;
    scanf("%lf%lf%lf",&a,&b,&c);
    tr=0.5*(a+b)*c;
    ar=a+b+c;
    if((a<b+c) && b<(a+c) && c<(a+b)){
	printf("Perimetro = %.1lf\n",ar);
 } 
 else{
 	printf("Area = %.1lf\n",tr);
 }
    return 0;
}
