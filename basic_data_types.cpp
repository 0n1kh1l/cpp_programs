#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int i;
    char a;
    long int  b;
   double c, k;
   
    scanf("%d \n",&i);
    scanf("%ld \n",&b);
    scanf("%c \n",&a);
    scanf("%lf \n",&c);
    scanf("%lf \n",&k);
    
    printf("%d \n",i);
    printf("%ld \n",b);
    printf("%c \n",a);
    printf("%.3lf \n",c);
    printf("%.9lf \n",k);
    return 0;
}
