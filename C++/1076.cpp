#include <iostream>
using namespace std;
 
int main() {
 
    int n;
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
		int j=n*i;
    	printf("%d x %d = %d\n",i,n,j);
		}
 
    return 0;
}	

