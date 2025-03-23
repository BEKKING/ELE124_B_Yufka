
#include <stdio.h> 


int pow(int a, int b) {
	int result = 1;
	for(int i = 0; i < b; i++) {
		result *= a;
	}
	return result;
}

void computeHomeValue (void)   {
	int popularity;
	int size;
	int homeValue;
	
	printf("Enter popularity: ");
	scanf("%d", &popularity);
	
	printf("Enter size: ");
	scanf("%d", &size);
	
	homeValue = (pow(popularity, 3) + pow(size, 2)) * 10000; 
	printf("Home value is: %d TL", homeValue);
}


int main( void ) { 
	computeHomeValue();
	
	return 0;
}