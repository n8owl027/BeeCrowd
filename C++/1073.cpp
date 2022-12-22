#include <iostream>
 
using namespace std;
 
int main() {
 int n;
 scanf("%d",&n);
 
 if(n%2==0){
 for (int i=2;i<=n;i=i+2){
 	int j=i*i;
 	printf("%d ^ 2 = %d\n",i,j);
 }}
 else{
 	
 }
    return 0;
}
