#include<stdio.h>
 
int factorial(int);
 
int main(){
	int n;
	printf("Enter an integer to find its factorial\n");
	scanf("%d", &n); 
  
	printf("%d! = %ld\n", n, factorial(n));
 
	return 0;
}
 
	int factorial(int n){
	if (n == 0){
	return 1;
  	}else{
    return(n * factorial(n-1));
	}
}
	
