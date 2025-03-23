
#include <stdio.h> 


int pow(int a, int b) {
	int result = 1;
	for(int i = 0; i < b; i++) {
		result *= a;
	}
	return result;
}



int main( void ) { 
	int homeValue;
	int popularity;
	int size;
	
	printf("Enter popularity: ");
	scanf("%d", &popularity);
	
	printf("Enter size: ");
	scanf("%d", &size);
	
	homeValue = (pow(popularity, 3) + pow(size, 2)) * 10000; 
	printf("Home value is: %d TL", homeValue);
	
	return 0;
}