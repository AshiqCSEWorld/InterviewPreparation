#include <stdio.h>
int main() {

 int a,b;

 while(scanf("%d %d",&a,&b)==2) {
      (a>b)? printf("%d is bigger than %d\n",a,b) : printf("%d is bigger than %d\n",b,a);

  }

 return 0;

}
