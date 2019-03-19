#include <stdio.h>

int main(void) {
	int i=6,*myPtr=&i;
	int *myPtrPtr = &*myPtr;
	//in this way, the three integer share the same value but in two locations.

   	int a[2] = {1,2};
   	int *ptra1;
   	int *ptra2;
   	int k;

  	*ptra1 = a[0];
  	*ptra2 = a[1];
	
	printf("The value %d is stored in location %p\n", ptra1, ptra1);
	printf("The value %d is stored in location %p\n", ptra2, ptra2);

 
	{
		int i = 7;
		int myPtr = 45;
		//different i and myPtr from those in main
		printf("The value %d is stored in location %p\n", myPtr ,myPtr);
		printf("The value %d is stored in location %p\n", i, i);
	}
	//printf("The value %d is stored in the location %p\n", *myPtr , myPtr); this line shows exactly the same value as the line follows, because myPtr and myPtr share the location.
	printf("The value %d is stored in the location %p\n", *myPtrPtr , myPtrPtr);
	printf("The value %d is stored in location %p\n", i, i);

	return 0;
}

