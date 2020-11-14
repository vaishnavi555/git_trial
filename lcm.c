#include <stdio.h> 
int gcd(int a, int b) {
        if(a == 0) {
                return b;
        }
	else if(b == 0) {
		return a;
	}
        else {
                return gcd(b % a, a);
        }
}
int lcm(int a, int b) {
    return (a*b) / gcd(a, b);
}

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d\n", lcm(a, b));
	return 0;
}

  
 
  

