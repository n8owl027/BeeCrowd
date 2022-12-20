#include <iostream>
 
using namespace std;
 
int main() {
 
    double pi,R,sp;
    pi=3.14159;
    scanf("%lf",&R);
    sp=((4.0/3)*pi*(R*R*R));
    printf("VOLUME = %.3lf\n",sp);
 
    return 0;
}
