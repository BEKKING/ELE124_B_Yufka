
#include <stdio.h> 


int pow(int a, int b) {
	int result = 1;
	for(int i = 0; i < b; i++) {
		result *= a;
	}
	return result;
}

int computeHomeValue(int popularity, int size) {
	int homeValue;
	homeValue = (pow(popularity, 3) + pow(size, 2)) * 10000; 
	return homeValue;	
}


int main( void ) { 
	int popularity;
	int size;
	
	printf("Enter popularity: ");
	scanf("%d", &popularity);
	
	printf("Enter size: ");
	scanf("%d", &size);
	
	printf("Home value is: %d TL", computeHomeValue(popularity, size));
	
	return 0;
}