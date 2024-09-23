#include <stdio.h>

void convert (int x) {
	
    if (x == 0){
    return;
	}
        
    convert (x / 2);
    printf("%d", x % 2);
}

int main() {
        
	int x;
	
	printf("DECIMAL to BINARY CONVERSION:\n");
    printf("\nEnter the decimal value: ");
    scanf("%d", &x);
    printf("\nThe binary value is: ", x);

    convert(x);

	return 0;
}
