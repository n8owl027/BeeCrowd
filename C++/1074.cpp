#include <iostream>
using namespace std;

int main() {
int a,n;
scanf("%d",&a);

for(int i=1;i<=a;i++){
scanf("%d",&n);

if(n%2==0 && n>0){
	printf("EVEN POSITIVE\n");
}
else if(n%2==0 && n<0){
		printf("EVEN NEGATIVE\n");
}
else if(n%2!=0 && n>0){
		printf("ODD POSITIVE\n");
}
else if(n%2!=0 && n<0) {
		printf("ODD NEGATIVE\n");
}
else if(n==0){
		printf("Null\n");
}
}
    return 0;
}
