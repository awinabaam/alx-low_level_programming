#include <stdio.h>


int main(void)
{
	char acharacter;
	int aninteger;
	long alongint;
	long long alonglongint;
	float afloat;

	printf("A char size: %lu byte(s)\n", sizeof(acharacter));
	printf("An int size: %lu byte(s)\n", sizeof(aninteger));
	printf("A long int size: %lu byte(s)\n", sizeof(alongint));
	printf("A long long int size: %lu byte(s)\n", sizeof(alonglongint));
	printf("A float size: %lu byte(s)\n", sizeof(afloat));

	return (0);
}
